/*
 * XREFs of ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C005A740
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C005A528 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dqddddddddd @ 0x1C005A5DC (WPP_RECORDER_AND_TRACE_SF_dqddddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C005AACC (-GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z.c)
 *     AreHashesEqual @ 0x1C005E828 (AreHashesEqual.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CMonitorTopology *CMonitorTopology::CreateTopologySnapshot(void)
{
  char v0; // bl
  _DWORD *v1; // rax
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // r9d
  __int64 v9; // r8
  _DWORD *v10; // r14
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  char v16; // dl
  __int64 v17; // r15
  _DWORD *v19; // r12
  int v20; // [rsp+20h] [rbp-D8h]
  int v21; // [rsp+28h] [rbp-D0h]
  int v22; // [rsp+30h] [rbp-C8h]
  int v23; // [rsp+38h] [rbp-C0h]
  _DWORD *v24; // [rsp+A0h] [rbp-58h]

  v0 = 1;
  if ( (unsigned int)(*(_DWORD *)*gpDispInfo - 1) > 0xFFFD )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 306LL);
  v1 = (_DWORD *)Win32AllocPoolZInit((unsigned int)(72 * (*(_DWORD *)*gpDispInfo - 1) + 88), 1919775573LL);
  v24 = v1;
  v5 = v1;
  if ( v1 )
  {
    *v1 = 1;
    v6 = (_DWORD *)SGDGetUserSessionState(v3);
    v7 = dword_1C0359168 / 0x64u;
    v8 = dword_1C0359168 + 100 * (*v6 - dword_1C0359168 / 0x64u);
    v9 = (unsigned int)(dword_1C0359168 + 1);
    v5[1] = v8;
    dword_1C0359168 = v9;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v7) = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v9,
        (_DWORD)gFullLog,
        4,
        7,
        16,
        (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
        v8);
    v10 = v5 + 4;
    v11 = 0;
    v5[2] = *(_DWORD *)*gpDispInfo;
    v12 = *(_QWORD *)(gpDispInfo + 104LL);
    while ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 40);
      if ( (*(_DWORD *)(v13 + 24) & 1) != 0 )
      {
        *(_OWORD *)(v10 + 2) = *(_OWORD *)(v13 + 28);
        *(_OWORD *)(v10 + 6) = *(_OWORD *)(*(_QWORD *)(v12 + 40) + 44LL);
        *((_WORD *)v10 + 20) = *(_WORD *)(*(_QWORD *)(v12 + 40) + 60LL);
        v10[17] = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 104LL) + 40LL) + 62LL);
        if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 104LL) + 40LL) + 62LL) != *(_WORD *)(*(_QWORD *)(v12 + 40)
                                                                                                + 62LL) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 358LL);
        v14 = *(_QWORD *)(*(_QWORD *)(gpDispInfo + 104LL) + 40LL);
        if ( *(_WORD *)(v14 + 62) > *(_WORD *)(*(_QWORD *)(v12 + 40) + 60LL) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 360LL);
        if ( (unsigned int)HdevFromMonitor(v12, v14, v9) != -1 )
          *(_QWORD *)v10 = *(_QWORD *)v12;
        CMonitorTopology::GetMonitorId((struct tagMONITOR *)v12, (struct CMonitorTopology::MonitorId *)(v10 + 11));
        v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dqddddddddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v9,
            v15,
            v20,
            v21,
            v22,
            v23);
        v17 = v11;
        if ( BYTE1(v5[18 * v11 + 20]) && v11 )
        {
          v19 = v5 + 15;
          do
          {
            if ( (unsigned __int8)AreHashesEqual(v19, &v5[18 * v11 + 15], v9) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 392LL);
            v19 += 18;
            --v17;
          }
          while ( v17 );
          v5 = v24;
        }
        ++v11;
      }
      v12 = *(_QWORD *)(v12 + 56);
      v10 += 18;
    }
    if ( v5[2] != v11 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 399LL);
    if ( !v5[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 400LL);
    return (struct CMonitorTopology *)v5;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v0 = 0;
    }
    if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = v0;
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v4,
        (_DWORD)gFullLog,
        2,
        7,
        15,
        (__int64)&WPP_b503bcdc7a733346aed43161a8297e0b_Traceguids,
        *(_DWORD *)*gpDispInfo);
    }
    return 0LL;
  }
}
