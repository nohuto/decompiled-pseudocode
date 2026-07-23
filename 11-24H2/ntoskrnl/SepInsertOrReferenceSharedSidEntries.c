/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x140794E00
 * Callers:
 *     SepSetTokenCapabilities @ 0x1409854B8 (SepSetTokenCapabilities.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x1403E3160 (RtlRemoveEntryHashTable.c)
 *     RtlInsertEntryHashTable @ 0x140421C30 (RtlInsertEntryHashTable.c)
 *     SepFindSharedSidEntry @ 0x140794CA0 (SepFindSharedSidEntry.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(__int64 a1, unsigned int **a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebp
  unsigned __int64 *v7; // rdi
  char *v8; // rax
  char *v9; // rsi
  unsigned int v10; // edi
  unsigned int v11; // r15d
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  unsigned int *Blink; // rcx
  unsigned int v14; // r13d
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Pool2; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v16; // rbp
  __int64 v17; // rcx
  ULONG_PTR v18; // r8
  __int64 v19; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v20; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v21; // rdi
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)g_SepSidMapping;
  v8 = (char *)KeAbPreAcquire(g_SepSidMapping, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v9 )
    v9[10] = 1;
  v10 = 0;
  v11 = 0;
  while ( v10 < v4 )
  {
    LODWORD(a2[2 * v10 + 1]) = *(_DWORD *)(a1 + 16LL * v10 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*(unsigned int **)(a1 + 16LL * v10));
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = (unsigned int *)SharedSidEntry[1].Linkage.Blink;
    }
    else
    {
      v14 = 8 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 16LL * v10) + 1LL) + 96;
      Pool2 = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePool2(0x100uLL, v14, 0x73536553u);
      v16 = Pool2;
      if ( !Pool2 )
      {
        v11 = -1073741801;
LABEL_19:
        if ( v10 )
        {
          v19 = v10;
          do
          {
            v20 = SepFindSharedSidEntry(*a2);
            v21 = v20;
            v22 = _InterlockedDecrement64((volatile signed __int64 *)&v20[1]);
            if ( v22 <= 0 )
            {
              if ( v22 )
                __fastfail(0xEu);
              if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v20, 0LL) )
                ExFreePoolWithTag(v21, 0);
            }
            a2 += 2;
            --v19;
          }
          while ( v19 );
        }
        break;
      }
      Pool2[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
      Pool2[1].Linkage.Blink = (struct _LIST_ENTRY *)&Pool2[1].Signature;
      RtlCopySid(v14 - 40, &Pool2[1].Signature, *(PSID *)(a1 + 16LL * v10));
      v17 = *(unsigned int *)(*(_QWORD *)(a1 + 16LL * v10)
                            + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 16LL * v10) + 1LL) - 1)
                            + 8);
      v18 = v17 + 1;
      if ( (_DWORD)v17 )
        v18 = *(unsigned int *)(*(_QWORD *)(a1 + 16LL * v10)
                              + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a1 + 16LL * v10) + 1LL) - 1)
                              + 8);
      if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v16, v18, 0LL) )
      {
        v11 = -1073741823;
        ExFreePoolWithTag(v16, 0x73536553u);
        goto LABEL_19;
      }
      Blink = (unsigned int *)v16[1].Linkage.Blink;
      v4 = a3;
    }
    a2[2 * v10++] = Blink;
  }
  v23 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v23);
  KeAbPostRelease((ULONG_PTR)v23);
  KeLeaveCriticalRegion();
  return v11;
}
