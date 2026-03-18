/*
 * XREFs of rimExtractScantime @ 0x1C01A9E68
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C00E33E2 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetUsageValue @ 0x1C00E0D8A (rimHidP_GetUsageValue.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C00E2A52 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C00E2B82 (RIMDivideToCeilingOrNearestInt.c)
 */

void __fastcall rimExtractScantime(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v6; // rdi
  int v8; // edx
  int v9; // r8d
  int v10; // r8d
  _DWORD *v11; // rsi
  _QWORD *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // r14d
  char v19; // dl
  char v20; // dl
  unsigned int v21; // ecx
  char v22; // dl
  unsigned int v23; // ebx
  unsigned __int64 v24; // r8
  __int64 v25; // [rsp+40h] [rbp-20h]
  int v26[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+30h] BYREF

  v6 = a1 + 832;
  ++*(_DWORD *)(a1 + 856);
  v27 = 0;
  if ( (int)rimHidP_GetUsageValue(0LL, 13LL, 0LL, 86LL, (__int64)&v27, a2, a3, a4) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        2,
        1,
        68,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
    }
    goto LABEL_59;
  }
  v10 = *(_DWORD *)(v6 + 24);
  if ( v10 != 1 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
    {
      v14 = *(_DWORD *)(v6 + 12);
      v15 = v14 % *(_DWORD *)(a1 + 888);
      if ( v27 < v15 )
        ++*(_DWORD *)(v6 + 28);
      v16 = v27 + *(_DWORD *)(v6 + 28) * *(_DWORD *)(a1 + 888);
      if ( v16 <= v14 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v10,
            (_DWORD)gRimLog,
            4,
            1,
            65,
            (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
        }
        *(_DWORD *)(v6 + 48) |= 1u;
      }
      else
      {
        *(_DWORD *)(v6 + 12) = v16;
        v17 = v16 - *(_DWORD *)(v6 + 16);
        v26[0] = 0;
        if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v17, v10 - 1, 1, v26) )
        {
          v18 = v26[0];
          if ( !v26[0] )
          {
            v26[0] = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3330);
          }
          *(_DWORD *)(v6 + 20) = v18;
        }
      }
    }
    if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
      goto LABEL_60;
    if ( *(_DWORD *)(v6 + 20) && *(_DWORD *)(v6 + 24) >= 5u )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v19 = 0;
      }
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v19,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x42u,
          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
          *(_DWORD *)(v6 + 20));
      *(_DWORD *)(v6 + 12) += *(_DWORD *)(v6 + 20);
      goto LABEL_60;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v20 = 0;
    }
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v20,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x43u,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        80);
LABEL_59:
    *(_DWORD *)(v6 + 12) += 80;
LABEL_60:
    v12 = a5;
    v11 = a6;
    goto LABEL_61;
  }
  if ( *(_DWORD *)v6 )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3295);
  }
  if ( *(_DWORD *)(v6 + 24) != 1 )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3296);
  }
  if ( *(_DWORD *)(v6 + 8) )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3297);
  }
  if ( *(_DWORD *)(v6 + 4) )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3298);
  }
  if ( *(_DWORD *)(v6 + 12) )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3299);
  }
  if ( *(_DWORD *)(v6 + 20) )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3300);
  }
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
  {
    v26[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3301);
  }
  v11 = a6;
  v12 = a5;
  *(_DWORD *)v6 = *a6;
  *(_QWORD *)(v6 + 40) = *v12;
  v13 = v27;
  *(_DWORD *)(v6 + 12) = v27;
  *(_DWORD *)(v6 + 16) = v13;
LABEL_61:
  if ( *(_DWORD *)(v6 + 24) > 1u )
  {
    v21 = *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16);
    v26[0] = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v21, 0xAu, 0, v26) )
    {
      v23 = v26[0];
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v22 = 0;
      }
      v23 = 8;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v25) = 8;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v22,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x45u,
          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
          v25);
      }
    }
    v24 = gliQpcFreq.QuadPart * v23;
    *v11 = v23 + *(_DWORD *)v6;
    *v12 = *(_QWORD *)(v6 + 40) + v24 / 0x3E8;
  }
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = *a6;
  *(_QWORD *)(v6 + 32) = *a5;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v6);
}
