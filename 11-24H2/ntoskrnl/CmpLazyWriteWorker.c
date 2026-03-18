/*
 * XREFs of CmpLazyWriteWorker @ 0x140668210
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpCompleteLazyWrite @ 0x140497950 (CmpCompleteLazyWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDiskFullWarning @ 0x1407D5A00 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  KSPIN_LOCK *p_QuadPart; // rsi
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // di
  __int128 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  char v9; // [rsp+78h] [rbp+10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v10 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&v7);
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v3 = KeAcquireSpinLockRaiseToDpc(p_QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KeReleaseSpinLock(p_QuadPart, v3);
    v6 = guard_dispatch_icall_no_overrides(&v9, &v10, v4, v5);
    if ( Timer == &CmpLazyWriterData && CmpCannotWriteConfiguration )
    {
      if ( v9 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v10 & -(__int64)(v6 != 0)));
    CmpCleanupThreadInfo((_KAFFINITY_EX **)&v7);
  }
}
