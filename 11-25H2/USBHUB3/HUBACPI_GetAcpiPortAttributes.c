/*
 * XREFs of HUBACPI_GetAcpiPortAttributes @ 0x14008EAD4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x14007B8E0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dDDDDD @ 0x140040338 (WPP_RECORDER_SF_dDDDDD.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBACPI_EnumChildren @ 0x14008D684 (HUBACPI_EnumChildren.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x14008DA90 (HUBACPI_EvalAcpiMethodEx.c)
 *     HUBACPI_EvaluateDSD @ 0x14008DEC8 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_EvaluateDsmMethod @ 0x14008E29C (HUBACPI_EvaluateDsmMethod.c)
 *     TUNNEL_RegisterUsb4HostForPort @ 0x140092ADC (TUNNEL_RegisterUsb4HostForPort.c)
 */

__int64 __fastcall HUBACPI_GetAcpiPortAttributes(__int64 a1)
{
  unsigned int v1; // edi
  unsigned __int64 v2; // rax
  char v4; // r14
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *); // rax
  int v6; // eax
  int v7; // esi
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  bool v17; // al
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 v22; // cx
  _QWORD *i; // rax
  _QWORD *v24; // r14
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int16 v27; // r9
  unsigned __int8 v28; // dl
  unsigned int v29; // r8d
  unsigned __int16 v30; // si
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int16 v33; // r9
  unsigned __int8 v34; // dl
  unsigned int v35; // r8d
  int v36; // ecx
  __int64 v37; // rcx
  unsigned __int16 v38; // r14
  const EVENT_DESCRIPTOR *v39; // rdx
  unsigned __int16 v40; // r9
  unsigned __int64 v41; // rdx
  unsigned int v42; // r8d
  unsigned int v43; // r9d
  __int64 v44; // rax
  int v45; // ecx
  unsigned __int16 v46; // r9
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // [rsp+20h] [rbp-B9h]
  __int64 v50; // [rsp+28h] [rbp-B1h]
  __int64 v51; // [rsp+28h] [rbp-B1h]
  __int64 v52; // [rsp+28h] [rbp-B1h]
  __int64 v53; // [rsp+28h] [rbp-B1h]
  __int64 v54; // [rsp+30h] [rbp-A9h]
  __int64 v55; // [rsp+30h] [rbp-A9h]
  __int64 v56; // [rsp+60h] [rbp-79h]
  __int64 v57; // [rsp+68h] [rbp-71h] BYREF
  __int64 v58; // [rsp+70h] [rbp-69h] BYREF
  __int64 v59; // [rsp+78h] [rbp-61h] BYREF
  __int128 v60; // [rsp+80h] [rbp-59h] BYREF
  __int64 v61; // [rsp+90h] [rbp-49h] BYREF
  __int64 v62; // [rsp+98h] [rbp-41h] BYREF
  __int64 v63; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-21h]
  __int64 v66; // [rsp+C0h] [rbp-19h]
  __int128 v67; // [rsp+C8h] [rbp-11h]
  __int64 v68; // [rsp+D8h] [rbp-1h]
  _QWORD v69[10]; // [rsp+E0h] [rbp+7h] BYREF
  bool v70; // [rsp+140h] [rbp+67h]
  unsigned __int16 v71; // [rsp+150h] [rbp+77h]
  int v72; // [rsp+158h] [rbp+7Fh]

  v1 = 0;
  v68 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v65 = 0LL;
  v69[0] = 0LL;
  v67 = v2;
  v64 = 0LL;
  v4 = 0;
  v61 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v62 = 0LL;
  v57 = 0LL;
  v63 = 0LL;
  LODWORD(v64) = 56;
  v66 = 0x100000001LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, _QWORD *))(WdfFunctions_01015 + 1536);
  v60 = 0LL;
  v6 = v5(WdfDriverGlobals, &v64, (unsigned int)ExDefaultNonPagedPoolType, 1748191317LL, 20LL, &v63, v69);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v50) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        0x2Au,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v50);
    }
    goto LABEL_4;
  }
  v9 = HUBACPI_EnumChildren(a1, v63);
  v7 = v9;
  if ( v9 == -1073741637 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v10, 3, 43, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    goto LABEL_4;
  }
  if ( v9 != -2147483643 )
    goto LABEL_4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v10, 3, 44, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
  }
  v11 = *(unsigned int *)(v69[0] + 4LL);
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0x100000001LL;
  v67 = *(unsigned __int64 *)(a1 + 16);
  v64 = 0LL;
  LODWORD(v64) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v64,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         v11,
         &v62,
         &v61);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_23:
      v4 = 0;
      goto LABEL_4;
    }
    v12 = 45;
LABEL_22:
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), 2, 3, v12, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    goto LABEL_23;
  }
  v13 = HUBACPI_EnumChildren(a1, v62);
  v7 = v13;
  if ( v13 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v51) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        3u,
        0x2Eu,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v51);
    }
    goto LABEL_23;
  }
  v68 = 0LL;
  v65 = 0LL;
  v66 = 0x100000001LL;
  v67 = *(unsigned __int64 *)(a1 + 16);
  v64 = 0LL;
  LODWORD(v64) = 56;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, __int64 *))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v64,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         1044LL,
         &v57,
         &v58);
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v12 = 47;
    goto LABEL_22;
  }
  v70 = *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     WdfDriverGlobals->Driver,
                     off_14006C1E8)
                 + 104) >= 0x605u;
  v7 = HUBACPI_EvaluateDsmMethod(a1, 0LL, v14, v15, 7, 0, v57);
  if ( v7 >= 0 )
  {
    v18 = *(_DWORD *)(v58 + 16);
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v70 = 1;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2528),
            v16,
            3,
            51,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
        }
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = *(_DWORD *)(v58 + 16);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2528),
          2u,
          6u,
          0x34u,
          (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
          v52);
      }
      v17 = v70;
    }
    else
    {
      v17 = 0;
      v70 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 3;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v16, 3, 50, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
        goto LABEL_48;
      }
    }
  }
  else
  {
    if ( v7 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v52) = -1073741772;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2528),
          2u,
          3u,
          0x31u,
          (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
          v52);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), v16, 3, 48, (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids);
    }
    v17 = v70;
  }
  if ( v17 )
  {
LABEL_38:
    _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x200u);
    goto LABEL_49;
  }
LABEL_48:
  _InterlockedAnd((volatile signed __int32 *)(a1 + 44), 0xFFFFFDFF);
LABEL_49:
  v72 = 1;
  v19 = v61 + 8;
  if ( *(_DWORD *)(v61 + 4) <= 1u )
  {
    v4 = 0;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v19 += *(unsigned int *)(v19 + 4) + 8LL;
    v56 = v19;
    if ( (*(_BYTE *)v19 & 1) == 0 || !*(_DWORD *)(v19 + 4) )
      goto LABEL_160;
    *((_QWORD *)&v60 + 1) = v19 + 8;
    WORD1(v60) = *(_WORD *)(v19 + 4);
    LOWORD(v60) = WORD1(v60) - 1;
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v60, 1380204895, v57);
    if ( v7 < 0 )
      goto LABEL_53;
    if ( !*(_DWORD *)(v58 + 8) || *(_WORD *)(v58 + 12) )
      goto LABEL_159;
    v22 = *(_WORD *)(v58 + 16);
    v71 = v22;
    if ( v22 )
    {
      if ( v22 <= *(_WORD *)(a1 + 48) )
        break;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 53;
      LODWORD(v52) = *(unsigned __int16 *)(v58 + 16);
LABEL_158:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        6u,
        v40,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v52);
    }
LABEL_159:
    v19 = v56;
LABEL_160:
    if ( (unsigned int)++v72 >= *(_DWORD *)(v61 + 4) )
      goto LABEL_23;
  }
  for ( i = *(_QWORD **)(a1 + 2368); ; i = (_QWORD *)*i )
  {
    v24 = i - 31;
    if ( (_QWORD *)(a1 + 2368) == i )
      goto LABEL_159;
    if ( *((_WORD *)v24 + 100) == v22 )
      break;
  }
  if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v60, v20, v21, 2, v22, v57) < 0 )
    goto LABEL_73;
  if ( *(_WORD *)(v58 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = 54;
      v28 = 2;
      v29 = 6;
LABEL_67:
      v30 = v71;
      LODWORD(v53) = v71;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        v28,
        v29,
        v27,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v53);
      goto LABEL_74;
    }
    goto LABEL_73;
  }
  v31 = *(unsigned __int16 *)(v58 + 16);
  *((_DWORD *)v24 + 54) = v31;
  if ( !v31 )
    goto LABEL_73;
  if ( v31 == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v27 = 55;
LABEL_79:
    v29 = 3;
    v28 = 4;
    goto LABEL_67;
  }
  if ( v31 != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v53) = v31;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2528),
        2u,
        6u,
        0x39u,
        (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
        v53);
    }
    goto LABEL_73;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 56;
    goto LABEL_79;
  }
LABEL_73:
  v30 = v71;
LABEL_74:
  v59 = 0LL;
  if ( *((_DWORD *)v24 + 52) != 768 )
    goto LABEL_85;
  v32 = *(_QWORD *)(a1 + 2768);
  if ( v32 )
  {
    v59 = *(_QWORD *)(a1 + 2768);
  }
  else
  {
    if ( (int)HUBACPI_EvaluateDSD(a1, (unsigned __int16 *)&v60, v25, v26, v57, v30, (__int64)&v59) < 0 )
      goto LABEL_85;
    v32 = v59;
  }
  v7 = TUNNEL_RegisterUsb4HostForPort(a1, v32, v24);
  if ( v7 >= 0 )
  {
LABEL_85:
    if ( (int)HUBACPI_EvaluateDsmMethod(a1, (unsigned __int16 *)&v60, v25, v26, 5, v71, v57) < 0 )
      goto LABEL_97;
    if ( *(_WORD *)(v58 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v33 = 59;
      v34 = 2;
      v35 = 6;
    }
    else
    {
      v36 = *(_DWORD *)(v58 + 16);
      if ( !v36 )
        goto LABEL_97;
      if ( v36 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_97;
        v33 = 61;
        LODWORD(v52) = *(_DWORD *)(v58 + 16);
        v34 = 2;
        v35 = 6;
        goto LABEL_96;
      }
      *((_DWORD *)v24 + 51) |= 0x400u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v33 = 60;
      v34 = 4;
      v35 = 3;
    }
    LODWORD(v52) = v71;
LABEL_96:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2528),
      v34,
      v35,
      v33,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v52);
LABEL_97:
    v7 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v60, 1129338207, v57);
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_100:
        v38 = v71;
      }
      else
      {
        v38 = v71;
        LODWORD(v52) = v71;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2528),
          4u,
          3u,
          0x3Eu,
          (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
          v52);
      }
LABEL_101:
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        v39 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_103:
        LODWORD(v52) = v7;
        LODWORD(v49) = v38;
        McTemplateK0pqq_EtwWriteTransfer(v37, v39, 0LL, *(_QWORD *)(a1 + 16), v49, v52);
      }
LABEL_53:
      v7 = 0;
      goto LABEL_159;
    }
    v37 = v58;
    if ( !*(_DWORD *)(v58 + 8) )
    {
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
      {
        LODWORD(v52) = -1072431093;
        LODWORD(v49) = v71;
        McTemplateK0pqq_EtwWriteTransfer(
          v58,
          &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE,
          0LL,
          *(_QWORD *)(a1 + 16),
          v49,
          v52);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_159;
      v40 = 63;
      LODWORD(v52) = v71;
      goto LABEL_158;
    }
    v41 = v58 + 12;
    v42 = 0;
    if ( v58 + 12 < v58 + (unsigned __int64)*(unsigned int *)(v58 + 4) )
    {
      while ( 1 )
      {
        if ( v42 >= *(_DWORD *)(v37 + 8) )
          goto LABEL_120;
        if ( v42 >= 4 )
        {
          v7 = -1072431093;
          goto LABEL_125;
        }
        if ( *(_WORD *)v41 )
          break;
        v37 = acpiUpcPackageFields[2 * v42];
        v43 = acpiUpcPackageFields[2 * v42 + 1];
        if ( v43 == 1 )
        {
          *((_BYTE *)v24 + v37 + 1340) = *(_BYTE *)(v41 + 4);
        }
        else
        {
          if ( v43 != 4 )
          {
            v7 = -1072431089;
LABEL_125:
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_100;
            v38 = v71;
            LODWORD(v55) = v7;
            LODWORD(v52) = v71;
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1 + 2528),
              2u,
              6u,
              0x40u,
              (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
              v52,
              v55);
            goto LABEL_101;
          }
          *(_DWORD *)((char *)v24 + v37 + 1340) = *(_DWORD *)(v41 + 4);
        }
        v44 = *(unsigned __int16 *)(v41 + 2);
        if ( (unsigned __int16)v44 < 4u )
          v44 = 4LL;
        v37 = v58;
        v41 += v44 + 4;
        ++v42;
        if ( v41 >= v58 + (unsigned __int64)*(unsigned int *)(v58 + 4) )
          goto LABEL_120;
      }
      v7 = -1072431096;
      goto LABEL_125;
    }
LABEL_120:
    _InterlockedOr((volatile signed __int32 *)v24 + 51, 2u);
    if ( *((_BYTE *)v24 + 1340) )
      _InterlockedOr((volatile signed __int32 *)v24 + 51, 1u);
    else
      _InterlockedAnd((volatile signed __int32 *)v24 + 51, 0xFFFFFFFE);
    if ( (unsigned __int8)(*((_BYTE *)v24 + 1341) - 8) <= 2u )
    {
      _InterlockedOr((volatile signed __int32 *)v24 + 51, 0x1000u);
      if ( *((_BYTE *)v24 + 1341) == 10 )
        _InterlockedOr((volatile signed __int32 *)v24 + 51, 0x200u);
      if ( v70 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dDDDDD(
            *(_QWORD *)(a1 + 2528),
            (*((_DWORD *)v24 + 336) >> 5) & 1,
            (*((_DWORD *)v24 + 336) >> 3) & 1,
            v24[168] & 3,
            v49);
        goto LABEL_141;
      }
      v45 = *((_DWORD *)v24 + 336);
      if ( !v45 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_141:
        v47 = HUBACPI_EvalAcpiMethodEx(a1, (unsigned __int16 *)&v60, 1145851999, v57);
        v7 = v47;
        if ( v47 >= 0 )
        {
          v48 = v58;
          if ( *(_DWORD *)(v58 + 8) && *(_WORD *)(v58 + 12) == 2 && *(_WORD *)(v58 + 14) >= 0x10u )
          {
            *(_OWORD *)(v24 + 169) = *(_OWORD *)(v58 + 16);
            _InterlockedOr((volatile signed __int32 *)v24 + 51, 4u);
            if ( (*(_BYTE *)(v48 + 24) & 1) == 0 )
              _InterlockedAnd((volatile signed __int32 *)v24 + 51, 0xFFFFFFFE);
            _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000u);
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v52) = v71;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(a1 + 2528),
                2u,
                6u,
                0x45u,
                (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
                v52);
            }
            if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
            {
              LODWORD(v52) = v7;
              LODWORD(v49) = v71;
              McTemplateK0pqq_EtwWriteTransfer(
                v37,
                &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE,
                0LL,
                *(_QWORD *)(a1 + 16),
                v49,
                v52);
            }
          }
          goto LABEL_159;
        }
        v38 = v71;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = v47;
          LODWORD(v52) = v71;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1 + 2528),
            4u,
            3u,
            0x44u,
            (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
            v52,
            v55);
        }
        if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        {
          v39 = &USBHUB3_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
          goto LABEL_103;
        }
        goto LABEL_53;
      }
      v46 = 66;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)v24 + 51, 0xFFFFEFFF);
      v45 = *((_DWORD *)v24 + 336);
      if ( !v45 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_141;
      v46 = 67;
    }
    LODWORD(v55) = v45;
    LODWORD(v52) = v71;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 2528),
      2u,
      6u,
      v46,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v52,
      v55);
    goto LABEL_141;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v54) = v7;
    LODWORD(v53) = *((unsigned __int16 *)v24 + 100);
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1 + 2528),
      2u,
      3u,
      0x3Au,
      (__int64)&WPP_87abda6c49cb3f06b0a228f67f220255_Traceguids,
      v53,
      v54);
  }
  v4 = 1;
LABEL_4:
  if ( v62 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v57 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v63 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v4 == 1 )
    return (unsigned int)v7;
  return v1;
}
