/*
 * XREFs of _GetWinStationInfo @ 0x1402B7130
 * Callers:
 *     NtUserGetWinStationInfo @ 0x1402973E0 (NtUserGetWinStationInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(ULONG64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  _BYTE *v7; // r8

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = -PsGetCurrentProcessWow64Process(v4, v3, v5);
  v7 = (_BYTE *)a1;
  if ( ((v6 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[39] = v7[39];
  *(_OWORD *)a1 = *(_OWORD *)(UserSessionState + 63600);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(UserSessionState + 63616);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(UserSessionState + 63632);
  return 1LL;
}
