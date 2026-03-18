/*
 * XREFs of SepDereferenceCachedHandlesEntryInternal @ 0x140A06268
 * Callers:
 *     SepTokenDeleteMethod @ 0x1409A7370 (SepTokenDeleteMethod.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140A06244 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeleteCachedHandlesTable @ 0x140A627A8 (SepDeleteCachedHandlesTable.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x1403EA340 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x14049845C (SepCloseCachedTokenHandles.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntryInternal(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        BOOLEAN *a4)
{
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // rax
  BOOLEAN v14; // bp
  void *v15; // rcx

  v4 = 0;
  if ( !BugCheckParameter2 || !a3 )
    return 0LL;
  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire(BugCheckParameter2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = _InterlockedDecrement64((volatile signed __int64 *)(a3 + 24));
  if ( v12 > 0 )
  {
    if ( !a2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegion();
    }
    if ( a4 )
      *a4 = 0;
    return 0LL;
  }
  if ( v12 )
    __fastfail(0xEu);
  v14 = RtlRemoveEntryHashTable(
          *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 8),
          (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a3,
          0LL);
  if ( !a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  if ( v14 )
  {
    SepCloseCachedTokenHandles(*(_DWORD *)(a3 + 56), *(HANDLE **)(a3 + 64));
    v15 = *(void **)(a3 + 64);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    ExFreePoolWithTag((PVOID)a3, 0);
  }
  else
  {
    v4 = -1073741823;
  }
  if ( a4 )
    *a4 = v14;
  return v4;
}
