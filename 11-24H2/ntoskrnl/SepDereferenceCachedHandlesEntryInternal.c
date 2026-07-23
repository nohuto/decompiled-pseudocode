/*
 * XREFs of SepDereferenceCachedHandlesEntryInternal @ 0x140A05254
 * Callers:
 *     SepDereferenceCachedHandlesEntry @ 0x140A05230 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeleteCachedHandlesTable @ 0x140A5D138 (SepDeleteCachedHandlesTable.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x1403E3160 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x140492308 (SepCloseCachedTokenHandles.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntryInternal(
        ULONG_PTR BugCheckParameter2,
        char a2,
        __int64 a3,
        BOOLEAN *a4)
{
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rax
  char *v11; // rbp
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
    v10 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      v11[10] = 1;
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
