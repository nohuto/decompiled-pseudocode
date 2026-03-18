/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x140785648
 * Callers:
 *     SepFreeTokenCapabilities @ 0x140471AA8 (SepFreeTokenCapabilities.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x1403EA340 (RtlRemoveEntryHashTable.c)
 *     SepFindSharedSidEntry @ 0x140785848 (SepFindSharedSidEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbp
  unsigned __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 SharedSidEntry; // rax
  void *v10; // rdi
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rdi

  CurrentThread = KeGetCurrentThread();
  v4 = a2;
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned __int64 *)g_SepSidMapping;
  v6 = KeAbPreAcquire(g_SepSidMapping, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
