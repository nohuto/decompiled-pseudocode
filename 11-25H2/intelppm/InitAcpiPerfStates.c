/*
 * XREFs of InitAcpiPerfStates @ 0x140027628
 * Callers:
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     AcpiEval_PCT_PTC @ 0x1400279B4 (AcpiEval_PCT_PTC.c)
 *     ValidateAcpi2PStates @ 0x14002DB34 (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x14002FD60 (ValidateXPssPStates.c)
 *     AcpiEval_PSS @ 0x140031C38 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1400322EC (AcpiEval_XPSS.c)
 *     Display_PCT_PTC @ 0x1400346CC (Display_PCT_PTC.c)
 *     Display_PSS @ 0x140034838 (Display_PSS.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v19 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = 0;
  v4 = AcpiEval_PCT_PTC(a1, 1413697631LL, a1 + 424);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          2,
          10,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
        v4);
    }
    v3 = v6;
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
  {
    v7 = AcpiEval_XPSS(a1, a1 + 456);
    v6 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            2,
            12,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v7;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
          v18);
      }
      *(_QWORD *)(a1 + 280) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0 )
  {
    v9 = AcpiEval_PSS(a1, a1 + 448);
    v6 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            2,
            14,
            (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = v9;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
          v18);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 280) & 0x40000000LL) != 0 )
        v6 = 0;
    }
  }
  if ( v3 >= 0 )
  {
    if ( v6 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 280) & 0x40000000) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        v12 = *(_QWORD *)(a1 + 456);
        v19 = 0;
        v6 = ValidateXPssPStates(a1 + 424, v12, v11, &v19);
        if ( v6 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v19);
          *(_QWORD *)(a1 + 280) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v18) = v6;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
              v18);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 280) & 0x30000000) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        v14 = *(_QWORD *)(a1 + 448);
        v19 = 0;
        v6 = ValidateAcpi2PStates(a1 + 424, v14, v13, &v19);
        if ( v6 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1112), v19);
          *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v18) = v6;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x11u,
              (__int64)&WPP_a3593c6019bf3e2a93a12731601a84ea_Traceguids,
              v18);
          }
        }
      }
      v15 = *(_QWORD *)(a1 + 280);
      if ( (v15 & 0x40000000) != 0 )
      {
        v16 = *(_QWORD *)(a1 + 456);
LABEL_39:
        Display_PCT_PTC(a1 + 424, "_PCT");
        Display_PSS(v16);
        goto LABEL_41;
      }
      if ( (v15 & 0x30000000) != 0 )
      {
        v16 = *(_QWORD *)(a1 + 448);
        goto LABEL_39;
      }
    }
    v3 = v6;
  }
LABEL_41:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
