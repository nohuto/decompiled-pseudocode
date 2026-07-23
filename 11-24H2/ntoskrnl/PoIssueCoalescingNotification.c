/*
 * XREFs of PoIssueCoalescingNotification @ 0x14043DCBC
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x140A4F938 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x140A702A0 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     ExDereferenceCallBackBlock @ 0x14043DD80 (ExDereferenceCallBackBlock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 *i; // rbx
  struct _EX_RUNDOWN_REF *v6; // rdi
  char v8; // [rsp+20h] [rbp-18h] BYREF
  __int16 v9; // [rsp+21h] [rbp-17h]
  char v10; // [rsp+23h] [rbp-15h]
  int v11; // [rsp+24h] [rbp-14h]
  __int64 v12; // [rsp+28h] [rbp-10h]

  v11 = a2;
  v9 = 0;
  v10 = 0;
  v12 = 0LL;
  v8 = *(_BYTE *)(a1 + 32);
  PopAcquireRwLockShared(&PopCoalRegistrationListLock);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v6 = ExReferenceCallBackBlock(i + 2, v2, v3, v4);
    if ( v6 )
    {
      if ( *((_BYTE *)i - 16) != v8 )
        guard_dispatch_icall_no_overrides(v6, &v8);
      ExDereferenceCallBackBlock(i + 2, v6);
    }
  }
  return PopReleaseRwLock(&PopCoalRegistrationListLock);
}
