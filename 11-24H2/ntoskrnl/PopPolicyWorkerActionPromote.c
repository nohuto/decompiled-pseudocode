/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140AA7360
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerActionState @ 0x1403CB224 (PopSetPowerActionState.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
  qword_140F0B2D0 = (__int64)KeGetCurrentThread();
  if ( (_BYTE)PopAction )
  {
    v6 = PopAction;
    if ( !byte_140F0B101 )
    {
      if ( (PopAction & 2) == 0 )
        goto LABEL_11;
      PopSetPowerActionState(1);
      v7 = 2;
      goto LABEL_10;
    }
    if ( byte_140F0B101 != 2 )
      goto LABEL_11;
    if ( (int)PopIssueActionRequest(1, dword_140F0B104, dword_140F0B108, dword_140F0B10C) >= 0 )
    {
      LOBYTE(PopAction) = ~v6 & PopAction;
      goto LABEL_11;
    }
    if ( byte_140F0B101 != 2 )
    {
      v7 = 1;
LABEL_10:
      PopGetPolicyWorker(v7);
    }
  }
LABEL_11:
  qword_140F0B2D0 = 0LL;
  PopReleasePolicyLock(v3, v2, v4, v5, v9);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
