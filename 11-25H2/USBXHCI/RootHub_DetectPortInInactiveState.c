/*
 * XREFs of RootHub_DetectPortInInactiveState @ 0x14000A42C
 * Callers:
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F318 (Etw_ReportControllerHealthWithPortInfo.c)
 */

bool __fastcall RootHub_DetectPortInInactiveState(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  char v6; // bl
  int v7; // edx
  __int64 v10; // rdi

  v3 = *(_QWORD *)(a1 + 48);
  v4 = a2 - 1;
  v6 = 0;
  v7 = *a3;
  v10 = 120 * v4;
  if ( (*a3 & 0x1E0) == 0xC0 && *(_DWORD *)(v10 + v3 + 108) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        11,
        267,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        *a3);
    }
    ++*(_DWORD *)(v10 + v3 + 92);
    if ( !*(_BYTE *)(v10 + v3 + 96) )
    {
      Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(a1 + 8), a2, a3, 0LL);
      *(_BYTE *)(v10 + v3 + 96) = 1;
    }
    return *(_DWORD *)(v10 + v3 + 92) <= 3u;
  }
  else if ( *(_DWORD *)(v10 + v3 + 92) )
  {
    Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(a1 + 8), a2, a3, 1LL);
    *(_DWORD *)(v10 + v3 + 92) = 0;
    *(_BYTE *)(v10 + v3 + 96) = 0;
    *(_BYTE *)(v10 + v3 + 104) = 0;
  }
  return v6;
}
