/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x140794AA0
 * Callers:
 *     SepFreeTokenCapabilities @ 0x14046A360 (SepFreeTokenCapabilities.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x1403E3160 (RtlRemoveEntryHashTable.c)
 *     SepFindSharedSidEntry @ 0x140794CA0 (SepFindSharedSidEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbp
  unsigned __int64 *v5; // rsi
  char *v6; // rax
  char *v7; // rdi
  __int64 v8; // rsi
  __int64 SharedSidEntry; // rax
  void *v10; // rdi
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = a2;
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned __int64 *)g_SepSidMapping;
  v6 = (char *)KeAbPreAcquire(g_SepSidMapping, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v7 )
    v7[10] = 1;
  if ( (_DWORD)v4 )
  {
    v8 = v4;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v10 = (void *)SharedSidEntry;
      v11 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v11 <= 0 )
      {
        if ( v11 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v10, 0);
        }
      }
      a1 += 2;
      --v8;
    }
    while ( v8 );
  }
  v12 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegion();
}
