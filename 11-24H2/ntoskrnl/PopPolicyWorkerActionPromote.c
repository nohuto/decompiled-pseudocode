/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140AA2460
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerActionState @ 0x1402B8248 (PopSetPowerActionState.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPolicyWorkerActionPromote(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  int v7; // ecx
  __int64 v9; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  qword_140F0BB50 = (__int64)KeGetCurrentThread();
  if ( (_BYTE)PopAction )
  {
    v6 = PopAction;
    if ( !byte_140F0B981 )
    {
      if ( (PopAction & 2) == 0 )
        goto LABEL_11;
      PopSetPowerActionState(1);
      v7 = 2;
      goto LABEL_10;
    }
    if ( byte_140F0B981 != 2 )
      goto LABEL_11;
    if ( (int)PopIssueActionRequest(
                1,
                (POWER_ACTION)dword_140F0B984,
                (SYSTEM_POWER_STATE)dword_140F0B988,
                dword_140F0B98C) >= 0 )
    {
      LOBYTE(PopAction) = ~v6 & PopAction;
      goto LABEL_11;
    }
    if ( byte_140F0B981 != 2 )
    {
      v7 = 1;
LABEL_10:
      PopGetPolicyWorker(v7);
    }
  }
LABEL_11:
  qword_140F0BB50 = 0LL;
  PopReleasePolicyLock(v3, v2, v4, v5, v9);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
