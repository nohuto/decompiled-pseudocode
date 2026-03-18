/*
 * XREFs of PoIssueCoalescingNotification @ 0x1404481D4
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x140A546A0 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x140A73B20 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  signed __int64 *i; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  char v5; // [rsp+20h] [rbp-18h] BYREF
  __int16 v6; // [rsp+21h] [rbp-17h]
  char v7; // [rsp+23h] [rbp-15h]
  int v8; // [rsp+24h] [rbp-14h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v8 = a2;
  v6 = 0;
  v7 = 0;
  v9 = 0LL;
  v5 = *(_BYTE *)(a1 + 32);
  PopAcquireRwLockShared(&PopCoalRegistrationListLock);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v3 = ExReferenceCallBackBlock(i + 2);
    if ( v3 )
    {
      if ( *((_BYTE *)i - 16) != v5 )
        guard_dispatch_icall_no_overrides(v3, &v5);
      ExDereferenceCallBackBlock(i + 2, v3);
    }
  }
  return PopReleaseRwLock(&PopCoalRegistrationListLock);
}
