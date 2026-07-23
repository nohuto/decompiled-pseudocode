/*
 * XREFs of PopCoalescingCallbackWorker @ 0x140A702A0
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14043DCBC (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x1404A8140 (PopCoalescingSetActiveState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCoalescingCallbackWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-8h]

  while ( 1 )
  {
    PopAcquirePolicyLock(a1, a2);
    if ( (PopCoalescingState & 2) != 0 )
      break;
    if ( (PopCoalescingState & 1) == 0 )
      goto LABEL_3;
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock(v9, v8, v10, v11, v16);
    v7 = 2;
LABEL_8:
    PoIssueCoalescingNotification(PopCoalescingRegistration, v7);
  }
  if ( (PopCoalescingState & 1) == 0 )
  {
    PopCoalescingState &= ~4u;
    PopCoalescingSetActiveState(1);
    PopReleasePolicyLock(v13, v12, v14, v15, v16);
    v7 = 1;
    goto LABEL_8;
  }
  if ( (PopCoalescingState & 4) != 0 )
  {
    PopCoalescingState &= ~4u;
    PopReleasePolicyLock(v3, v2, v4, v5, v16);
    v7 = 3;
    goto LABEL_8;
  }
LABEL_3:
  PopCoalescingState &= ~8u;
  return PopReleasePolicyLock(v3, v2, v4, v5, v16);
}
