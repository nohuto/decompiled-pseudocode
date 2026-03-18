/*
 * XREFs of CmpLazyWriteWorker @ 0x14065C790
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmpCompleteLazyWrite @ 0x140498018 (CmpCompleteLazyWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDiskFullWarning @ 0x1407C62B4 (CmpDiskFullWarning.c)
 */

void __fastcall __noreturn CmpLazyWriteWorker(PKTIMER Timer)
{
  KSPIN_LOCK *p_QuadPart; // rsi
  KIRQL v3; // al
  char v4; // di
  __int128 i; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0LL;
  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v6 = 0;
  for ( i = 0LL; ; KeGetCurrentThread()[1].UserAffinity = (_KAFFINITY_EX *)i )
  {
    CmpInitializeThreadInfo((_KAFFINITY_EX *)&i);
    KeWaitForSingleObject(&Timer[2], Executive, 1, 0, 0LL);
    v3 = KeAcquireSpinLockRaiseToDpc(p_QuadPart);
    Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)2;
    KeReleaseSpinLock(p_QuadPart, v3);
    v4 = guard_dispatch_icall_no_overrides(&v6);
    if ( Timer == &CmpLazyWriterData && CmpCannotWriteConfiguration )
    {
      if ( v6 )
        CmpDiskFullWarning();
      else
        CmpCannotWriteConfiguration = 0;
    }
    CmpCompleteLazyWrite(Timer, (__int64 *)((unsigned __int64)&v7 & -(__int64)(v4 != 0)));
  }
}
