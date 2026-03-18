/*
 * XREFs of _GetWinStationInfo @ 0x1C0202E88
 * Callers:
 *     NtUserGetWinStationInfo @ 0x1C01D3C40 (NtUserGetWinStationInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcessWow64Process; // rax
  __int64 v5; // rdx
  _BYTE *v6; // rdx

  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1, a2, a3);
  v5 = 0LL;
  if ( !CurrentProcessWow64Process )
    v5 = 3LL;
  if ( (v5 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[39] = v6[39];
  *(_OWORD *)a1 = gWinStationInfo;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)&gWinStationInfo + 1);
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&gWinStationInfo + 4);
  return 1LL;
}
