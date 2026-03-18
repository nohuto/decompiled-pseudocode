/*
 * XREFs of PoIssueCoalescingNotification @ 0x140445910
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x140A58188 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x140A75E00 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  signed __int64 *i; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // r9
  char v6; // [rsp+20h] [rbp-18h] BYREF
  __int16 v7; // [rsp+21h] [rbp-17h]
  char v8; // [rsp+23h] [rbp-15h]
  int v9; // [rsp+24h] [rbp-14h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  v9 = a2;
  v7 = 0;
  v8 = 0;
  v10 = 0LL;
  v6 = *(_BYTE *)(a1 + 32);
  PopAcquireRwLockShared((volatile signed __int64 *)&PopCoalRegistrationListLock);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v3 = ExReferenceCallBackBlock(i + 2);
    if ( v3 )
    {
      if ( *((_BYTE *)i - 16) != v6 )
        guard_dispatch_icall_no_overrides(v3, &v6, v10, v4);
      ExDereferenceCallBackBlock(i + 2, v3);
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopCoalRegistrationListLock);
}
