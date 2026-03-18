/*
 * XREFs of RootHub_DetectPortInComplianceMode @ 0x14000A540
 * Callers:
 *     RootHub_DetectLinkErrorState @ 0x14000A288 (RootHub_DetectLinkErrorState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x14004F318 (Etw_ReportControllerHealthWithPortInfo.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14005796C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall RootHub_DetectPortInComplianceMode(__int64 a1, unsigned int a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  char v6; // si
  int v7; // edx
  __int64 v9; // rbx
  _QWORD *v11; // r14
  unsigned int v12; // eax
  int v13; // ecx

  v3 = *(_QWORD *)(a1 + 48);
  v4 = a2 - 1;
  v6 = 0;
  v7 = *a3;
  v9 = 120 * v4;
  if ( (*a3 & 0x1E0) == 0x140 )
  {
    v11 = (_QWORD *)(a1 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*v11 + 72LL),
        v7,
        11,
        266,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        *a3);
    }
    if ( (*(_QWORD *)(*v11 + 744LL) & 0x8000LL) != 0 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected link state in COMPLIANCE_MODE when disabled in hardware");
    if ( ++*(_DWORD *)(v9 + v3 + 88) == 3 && !*(_BYTE *)(v9 + v3 + 96) )
    {
      Etw_ReportControllerHealthWithPortInfo(*v11, a2, a3, 0LL);
      *(_BYTE *)(v9 + v3 + 96) = 1;
    }
    v12 = *(_DWORD *)(v9 + v3 + 88);
    if ( v12 <= 0x18 )
    {
      v13 = 17043456;
      if ( _bittest(&v13, v12) )
        return 1;
    }
  }
  else if ( *(_DWORD *)(v9 + v3 + 88) )
  {
    LOBYTE(v4) = 1;
    Etw_ReportControllerHealthWithPortInfo(*(_QWORD *)(a1 + 8), a2, a3, v4);
    *(_DWORD *)(v9 + v3 + 88) = 0;
    *(_BYTE *)(v9 + v3 + 96) = 0;
    *(_BYTE *)(v9 + v3 + 104) = 0;
  }
  return v6;
}
