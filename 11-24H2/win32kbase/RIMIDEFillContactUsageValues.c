/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1401E5E2C
 * Callers:
 *     ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E3FA8 (-RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(__int64 a1, _DWORD *a2, unsigned int a3, int *a4)
{
  int v4; // r14d
  unsigned int v5; // ebp
  int v10; // r15d
  char v11; // bl
  char v12; // si
  __int64 UserSessionState; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  bool v28; // zf
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  int v32; // eax

  v4 = *a4;
  v5 = 0;
  v10 = 0;
  if ( *a4 == 2 )
  {
    if ( a3 < 0xA )
      goto LABEL_5;
  }
  else if ( v4 == 3 )
  {
    if ( a3 < 0xB )
      goto LABEL_5;
  }
  else
  {
    if ( v4 != 5 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1079);
      goto LABEL_5;
    }
    if ( a3 < 0xA )
    {
LABEL_5:
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v12,
          *(_QWORD *)(UserSessionState + 19392),
          2u,
          1u,
          0x15u,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          v4,
          a3);
      }
      v10 = 1;
      goto LABEL_13;
    }
  }
  if ( ((v4 - 2) & 0xFFFFFFFC) != 0 )
    goto LABEL_5;
  v15 = a4[5];
  if ( (v15 & 4) != 0 )
    a2[7] = 1;
  if ( (v15 & 2) != 0 )
    a2[10] = 1;
  if ( v4 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || (v16 = 1, *(_DWORD *)(a1 + 364) != 1) )
      v16 = 0;
    if ( v16 )
    {
      v17 = a4[11];
      v18 = a4[10];
    }
    else
    {
      v17 = a4[13];
      v18 = a4[12];
    }
    a2[1] = v18;
    a2[4] = v17;
    v19 = a4[27];
    if ( (v19 & 1) != 0 )
      a2[13] = a4[28];
    if ( (v19 & 4) != 0 )
      a2[25] = a4[30];
    if ( (v19 & 8) != 0 )
      a2[28] = a4[31];
    if ( (v19 & 2) != 0 )
      a2[31] = a4[29];
    v20 = a4[26];
    if ( (v20 & 1) != 0 )
      a2[16] = 1;
    if ( (v20 & 2) != 0 )
      a2[19] = 1;
    if ( (v20 & 4) != 0 )
      a2[22] = 1;
  }
  else if ( v4 == 2 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || (v21 = 1, *(_DWORD *)(a1 + 364) != 1) )
      v21 = 0;
    if ( v21 )
    {
      v22 = a4[11];
      v23 = a4[10];
    }
    else
    {
      v22 = a4[13];
      v23 = a4[12];
    }
    a2[1] = v23;
    a2[4] = v22;
    v24 = a4[27];
    if ( (v24 & 4) != 0 )
      a2[13] = a4[37];
    if ( (v24 & 1) != 0 )
    {
      v25 = a4[28] - a4[30];
      if ( v25 < 0 )
        v25 = a4[30] - a4[28];
      v26 = a4[31] - a4[29];
      a2[19] = v25;
      v27 = -v26;
      if ( v26 > 0 )
        v27 = v26;
      a2[22] = v27;
    }
    a2[25] = a4[3];
    if ( (v24 & 2) != 0 )
      a2[28] = a4[36];
    if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 || (a4[5] & 0x4000) != 0 )
      a2[16] = 1;
  }
  else
  {
    a2[25] = a4[3];
    if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1185);
    v28 = (a4[5] & 0x4000) == 0;
    a2[1] = a4[12];
    a2[4] = a4[13];
    if ( !v28 )
      a2[16] = 1;
    v29 = a4[27];
    if ( (v29 & 4) != 0 )
      a2[13] = a4[37];
    if ( (v29 & 1) != 0 )
    {
      v30 = a4[28] - a4[30];
      if ( v30 < 0 )
        v30 = a4[30] - a4[28];
      v31 = a4[31] - a4[29];
      a2[19] = v30;
      v32 = -v31;
      if ( v31 > 0 )
        v32 = v31;
      a2[22] = v32;
    }
    if ( (v29 & 2) != 0 )
      a2[28] = a4[36];
  }
LABEL_13:
  LOBYTE(v5) = v10 == 0;
  return v5;
}
