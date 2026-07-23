/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140AA25D0
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerActionState @ 0x140354C84 (PopSetPowerActionState.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
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
  qword_140F0B030 = (__int64)KeGetCurrentThread();
  if ( (_BYTE)PopAction )
  {
    v6 = PopAction;
    if ( !byte_140F0AE61 )
    {
      if ( (PopAction & 2) == 0 )
        goto LABEL_11;
      PopSetPowerActionState(1);
      v7 = 2;
      goto LABEL_10;
    }
    if ( byte_140F0AE61 != 2 )
      goto LABEL_11;
    if ( (int)PopIssueActionRequest(
                1,
                (POWER_ACTION)dword_140F0AE64,
                (SYSTEM_POWER_STATE)dword_140F0AE68,
                dword_140F0AE6C) >= 0 )
    {
      LOBYTE(PopAction) = ~v6 & PopAction;
      goto LABEL_11;
    }
    if ( byte_140F0AE61 != 2 )
    {
      v7 = 1;
LABEL_10:
      PopGetPolicyWorker(v7);
    }
  }
LABEL_11:
  qword_140F0B030 = 0LL;
  PopReleasePolicyLock(v3, v2, v4, v5, v9);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
