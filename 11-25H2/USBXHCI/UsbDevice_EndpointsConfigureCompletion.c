/*
 * XREFs of UsbDevice_EndpointsConfigureCompletion @ 0x14003A070
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dqq @ 0x14000F084 (WPP_RECORDER_SF_dqq.c)
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     WPP_RECORDER_SF_dq @ 0x14002CC1C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqL @ 0x140031A4C (WPP_RECORDER_SF_dqL.c)
 *     WPP_RECORDER_SF_dqd @ 0x140032ECC (WPP_RECORDER_SF_dqd.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140034B18 (UsbDevice_SetConfigureRequestStatus.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1400375C4 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     UsbDevice_GetEndpointOffloadInformation @ 0x14003A950 (UsbDevice_GetEndpointOffloadInformation.c)
 *     Controller_ReportFatalErrorEx @ 0x140042368 (Controller_ReportFatalErrorEx.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall UsbDevice_EndpointsConfigureCompletion(__int64 a1, int a2, __int128 *a3)
{
  _QWORD *v3; // rdi
  int v4; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rsi
  _BYTE *v15; // r15
  char v16; // r14
  int v17; // ebp
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rcx
  unsigned int i; // r15d
  __int64 v26; // rax
  char v27; // al
  unsigned int j; // r14d
  __int64 v29; // rax
  unsigned int k; // r15d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned int v35; // r15d
  unsigned int *m; // r14
  __int64 v37; // rcx
  int v38; // edx
  __int64 result; // rax
  unsigned int n; // r14d
  __int64 v41; // rax
  _QWORD *v42; // rax
  _DWORD *v43; // r15
  _DWORD *v44; // r14
  int v45; // ecx
  __int64 v46; // r10
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // rdx
  unsigned int ii; // ebp
  __int64 v53; // rax
  __int64 *v54; // rax
  char v55; // cl
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // [rsp+20h] [rbp-98h]
  __int64 v61; // [rsp+30h] [rbp-88h]
  char v62; // [rsp+40h] [rbp-78h]
  int v63; // [rsp+44h] [rbp-74h] BYREF
  __int64 v64; // [rsp+48h] [rbp-70h]
  __int64 v65; // [rsp+50h] [rbp-68h]
  __int64 v66; // [rsp+58h] [rbp-60h]
  _OWORD v67[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v68; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD **)(a1 + 48);
  v4 = 0;
  v63 = 0;
  v62 = 0;
  v8 = v3[1];
  v9 = v3[55];
  v64 = v9;
  v10 = *(_QWORD *)(v8 + 88);
  v66 = *(_QWORD *)(v8 + 144);
  memset(v67, 0, sizeof(v67));
  v65 = v10;
  v68 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v67[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v11 = -1;
  }
  else
  {
    v11 = 40;
  }
  LOWORD(v67[0]) = v11;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    v9,
    v67);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v9,
          off_14006AE88);
  v14 = *((_QWORD *)&v67[0] + 1);
  v15 = (_BYTE *)v12;
  if ( a2 == 3 )
  {
    if ( !*(_DWORD *)(*((_QWORD *)&v67[0] + 1) + 24LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v3[1] + 72LL),
          4u,
          0xCu,
          0x3Cu,
          (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
          *((unsigned __int8 *)v3 + 135),
          *v3,
          *(_DWORD *)(*((_QWORD *)&v67[0] + 1) + 40LL));
      goto LABEL_33;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(v3[1] + 72LL),
        4u,
        0xCu,
        0x3Du,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        *((unsigned __int8 *)v3 + 135),
        *v3,
        *(_DWORD *)(*((_QWORD *)&v67[0] + 1) + 24LL));
LABEL_13:
    v16 = 1;
    v17 = -1073741823;
    goto LABEL_35;
  }
  v18 = *(_BYTE *)(a1 + 60);
  if ( v18 == 1 )
  {
    v19 = *(_QWORD *)(v3[1] + 136LL);
    v20 = *(_QWORD *)(v19 + 88);
    v21 = v19 + 16;
    v22 = *(_QWORD *)(v20 + 8);
    if ( *(_BYTE *)(v21 + 64) && (*((_BYTE *)v3 + 656) && *(_DWORD *)(v22 + 1012) == 2 || *(_DWORD *)(v22 + 1012) == 1) )
    {
      XilDeviceSlot_SendQuerySlotContextInfoRequest((__int64 *)v21, (__int64)v3, 0LL, &v63);
    }
    else
    {
      v24 = (__int64)(v3 + 77);
      if ( !*((_BYTE *)v3 + 657) )
        v24 = (__int64)(v3 + 76);
      XilCoreUsbDevice_GetDeviceContextBufferVA(v24);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 72LL), 4u, v23, 0x3Eu, v60);
    *(_DWORD *)(v14 + 76) = *(_DWORD *)(a1 + 64);
    if ( *v15 || v15[1] )
    {
      v17 = -1073741823;
LABEL_34:
      v16 = 0;
LABEL_35:
      for ( i = 0; i < *(_DWORD *)(v14 + 40); ++i )
      {
        v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * i),
                off_14006AFE8);
        Endpoint_Disable(v26, 0LL);
      }
      if ( v16 != 1 )
        goto LABEL_56;
      goto LABEL_54;
    }
    v62 = 1;
LABEL_33:
    v17 = 0;
    goto LABEL_34;
  }
  if ( v18 == 11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v3[1] + 72LL),
        4u,
        0xCu,
        0x3Fu,
        (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
        *(unsigned __int8 *)(a1 + 61),
        *v3);
    if ( !*(_DWORD *)(v14 + 24) )
      goto LABEL_33;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v61 = *v3;
    WPP_RECORDER_SF_dqL(*(_QWORD *)(v3[1] + 72LL), 2u, v13, 0x40u, v60);
  }
  v27 = *(_BYTE *)(a1 + 60);
  switch ( v27 )
  {
    case 8:
    case 35:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 1u;
      break;
    case 7:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 2u;
      break;
    case 29:
      if ( *(_DWORD *)(v14 + 24) )
        *(_DWORD *)(v14 + 72) |= 4u;
      *(_DWORD *)(v14 + 76) = *(_DWORD *)(a1 + 64);
      break;
  }
  if ( !*(_DWORD *)(v14 + 40) )
  {
    v17 = -1073741823;
LABEL_54:
    for ( j = 0; j < *(_DWORD *)(v14 + 24); ++j )
    {
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
              WdfDriverGlobals,
              *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * j),
              off_14006AFE8);
      Endpoint_Disable(v29, 0LL);
    }
LABEL_56:
    if ( v62 == 1 )
    {
      for ( k = 0; k < *(_DWORD *)(v14 + 24); v3[*(unsigned int *)(v33 + 144) + 21] = v33 )
      {
        v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * k),
                off_14006AFE8);
        v33 = v31;
        v34 = v3[*(unsigned int *)(v31 + 144) + 21];
        if ( v34 && v34 != v31 )
        {
          LOBYTE(v32) = 1;
          Endpoint_Disable(v34, v32);
          v3[*(unsigned int *)(v33 + 144) + 21] = 0LL;
        }
        ++k;
      }
    }
    if ( v17 >= 0 )
    {
      v35 = 0;
      for ( m = *(unsigned int **)(v14 + 88); v35 < *(_DWORD *)(v14 + 84); m = (unsigned int *)((char *)m + *m) )
      {
        UsbDevice_GetEndpointOffloadInformation(v3, v14, m);
        ++v35;
      }
    }
    UsbDevice_SetConfigureRequestStatus((__int64)v3, v17);
    if ( v17 < 0 )
      v38 = 2;
    else
      v38 = 1;
    return UsbDevice_QueueConfigureEndpointEvent(v37, v38);
  }
  if ( !*(_DWORD *)(v14 + 24) || *v15 == 1 || v15[1] == 1 )
  {
    UsbDevice_SetConfigureRequestStatus((__int64)v3, -1073741823);
    Controller_HwVerifierBreakIfEnabled(
      v3[1],
      *v3,
      0,
      0x80000LL,
      "Configure Endpoints command failed when only disabling endpoints",
      (__int128 *)(a1 + 24),
      a3);
    return Controller_ReportFatalErrorEx(v3[1], 2, 4119, 0, 0LL, 0LL, 0LL, 0LL);
  }
  v15[1] = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v61) = HIDWORD(v64);
    WPP_RECORDER_SF_dqq(*(_QWORD *)(v3[1] + 72LL), *((unsigned __int8 *)v3 + 135), v13, 0x41u, v60);
  }
  for ( n = 0; n < *(_DWORD *)(v14 + 24); ++n )
  {
    v41 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL * n),
            off_14006AFE8);
    Endpoint_Disable(v41, 0LL);
  }
  v42 = v3 + 81;
  if ( !*((_BYTE *)v3 + 657) )
    v42 = v3 + 80;
  if ( *v42 )
    v43 = *(_DWORD **)(*v42 + 16LL);
  else
    v43 = 0LL;
  if ( (*(_DWORD *)(v65 + 104) & 4) != 0 )
  {
    memset(v43, 0, 0x840uLL);
    v44 = v43 + 16;
  }
  else
  {
    memset(v43, 0, 0x420uLL);
    v44 = v43 + 8;
  }
  v43[1] |= 1u;
  if ( *((_BYTE *)v3 + 136) )
  {
    v45 = *v44 | 0x4000000;
    *v44 = v45;
    *((_BYTE *)v44 + 7) = *((_BYTE *)v3 + 140);
    if ( *((_DWORD *)v3 + 5) == 2 )
    {
      if ( *((_DWORD *)v3 + 36) > 1u )
        *v44 = v45 | 0x2000000;
      v44[2] ^= (v44[2] ^ (*((_DWORD *)v3 + 37) << 16)) & 0x30000;
    }
  }
  result = Feature_UISCSF__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    v46 = v3[1];
    if ( (*(_QWORD *)(v46 + 744) & 0x20000000LL) != 0 )
    {
      v47 = *((_DWORD *)v3 + 5);
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            if ( v49 != 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v61) = *((_DWORD *)v3 + 5);
                return WPP_RECORDER_SF_dD(
                         *(_QWORD *)(v46 + 72),
                         2u,
                         0xCu,
                         0x42u,
                         (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
                         *((unsigned __int8 *)v3 + 135),
                         v61);
              }
              return result;
            }
            v50 = *v44 & 0xFF0FFFFF | 0x400000;
          }
          else
          {
            v50 = *v44 & 0xFF0FFFFF | 0x300000;
          }
        }
        else
        {
          v50 = *v44 & 0xFF0FFFFF | 0x100000;
        }
      }
      else
      {
        v50 = *v44 & 0xFF0FFFFF | 0x200000;
      }
      *v44 = v50;
    }
  }
  if ( _bittest64((const signed __int64 *)(v3[1] + 736LL), 0x3Du) )
  {
    if ( !*((_BYTE *)v3 + 136) )
    {
      v51 = v3[3];
      if ( v51 )
      {
        if ( *((int *)v3 + 5) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                           WdfDriverGlobals,
                           v51,
                           off_14006B128)
                       + 144) > 1u )
        {
          *v44 |= 0x2000000u;
        }
      }
    }
  }
  for ( ii = 0; ii < *(_DWORD *)(v14 + 40); *v43 |= 1 << *(_DWORD *)(v53 + 144) )
    v53 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(v14 + 48) + 8LL * ii++),
            off_14006AFE8);
  memset(v3 + 57, 0, 0x60uLL);
  v3[63] = v3;
  v3[62] = UsbDevice_EndpointsConfigureCompletion;
  *((_DWORD *)v3 + 123) = *((_DWORD *)v3 + 123) & 0xFFFF01FF | 0x3000;
  *((_BYTE *)v3 + 495) = *((_BYTE *)v3 + 135);
  v54 = v3 + 81;
  v55 = *((_BYTE *)v3 + 657);
  if ( !v55 )
    v54 = v3 + 80;
  v56 = *v54;
  if ( v56 )
    v57 = *(_QWORD *)(v56 + 24);
  else
    v57 = 0LL;
  v3[60] = v57;
  v58 = v3 + 81;
  v3[66] = v43;
  if ( !v55 )
    v58 = v3 + 80;
  if ( *v58 )
    v4 = *(_DWORD *)(*v58 + 44LL);
  v59 = v66;
  *((_DWORD *)v3 + 134) = v4;
  *((_DWORD *)v3 + 135) = 1;
  v3[68] = v3;
  return Command_SendCommand(v59, (__int64)(v3 + 57));
}
