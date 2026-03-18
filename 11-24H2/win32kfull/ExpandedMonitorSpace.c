/*
 * XREFs of ExpandedMonitorSpace @ 0x140098B24
 * Callers:
 *     VirtualizeMultiMonDigitizerSize @ 0x1400266E0 (VirtualizeMultiMonDigitizerSize.c)
 *     GetHimetricScaleForMonitor @ 0x1402818AC (GetHimetricScaleForMonitor.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x140098BB8 (ExpandMonitorSpaceVertex.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v4 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo() + 104) + 40LL) + 62LL);
  UserSessionState = W32GetUserSessionState(v6, v5);
  *(_OWORD *)a1 = 0LL;
  v9 = *(_OWORD *)(**(_QWORD **)(UserSessionState + 57008) + 24LL);
  *(_QWORD *)a1 = ExpandMonitorSpaceVertex(a2, v4, *(_QWORD *)(**(_QWORD **)(UserSessionState + 57008) + 24LL));
  *(_QWORD *)(a1 + 8) = ExpandMonitorSpaceVertex(a2, v4, *((_QWORD *)&v9 + 1));
  return a1;
}
