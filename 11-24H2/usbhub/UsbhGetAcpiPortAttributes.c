/*
 * XREFs of UsbhGetAcpiPortAttributes @ 0x14003AF44
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x14003BB6C (UsbhGetExtendedHubInformation.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcpiEnumChildren @ 0x140039F00 (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x14003A090 (UsbhAcpiEvalAcpiMethodEx.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003DB54 (WPP_RECORDER_SF_dD.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhGetAcpiPortAttributes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v7; // r13
  int v8; // ebx
  __int64 v9; // rsi
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // eax
  const EVENT_DESCRIPTOR *v15; // r9
  unsigned int v16; // r9d
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned __int64 v19; // r10
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  _DWORD *v24; // rdi
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r10d
  unsigned int v29; // ecx
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // [rsp+20h] [rbp-79h]
  __int64 v34; // [rsp+28h] [rbp-71h]
  _DWORD *v35; // [rsp+40h] [rbp-59h]
  int v36; // [rsp+48h] [rbp-51h]
  __int128 v37; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v38; // [rsp+60h] [rbp-39h]
  __int64 v39; // [rsp+68h] [rbp-31h]
  int v40; // [rsp+70h] [rbp-29h]
  __int128 v41; // [rsp+78h] [rbp-21h] BYREF
  int v42; // [rsp+88h] [rbp-11h]
  int v43; // [rsp+90h] [rbp-9h]
  _DWORD v44[7]; // [rsp+94h] [rbp-5h]

  v44[5] = 8;
  v43 = 0;
  v42 = 0;
  v39 = 0LL;
  v40 = 0;
  v44[0] = 1;
  v44[1] = 1;
  v44[2] = 1;
  v44[3] = 4;
  v44[4] = 4;
  v44[6] = 4;
  v41 = 0LL;
  v37 = 0LL;
  v38 = FdoExt(a1);
  result = UsbhAcpiEnumChildren(a1, &v41, 0x14u);
  if ( (_DWORD)result == -2147483643 )
  {
    v5 = DWORD1(v41);
    if ( DWORD1(v41) < 0x14 )
      return 3222536207LL;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, DWORD1(v41), 1112885333LL);
    v7 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v8 = UsbhAcpiEnumChildren(a1, Pool2, v5);
    if ( v8 < 0 )
      goto LABEL_31;
    v9 = ExAllocatePool2(64LL, 1044LL, 1112885333LL);
    if ( !v9 )
    {
      v8 = -1073741670;
LABEL_31:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    if ( !*((_QWORD *)v38 + 378) )
    {
      v10 = FdoExt(a1);
      *((_QWORD *)v38 + 378) = ExAllocatePool2(64LL, 28 * (*((unsigned __int8 *)v10 + 2938) + 1LL), 1112885333LL);
    }
    v11 = v7 + 2;
    v36 = 1;
    if ( v7[1] <= 1u )
    {
LABEL_30:
      ExFreePoolWithTag((PVOID)v9, 0);
      goto LABEL_31;
    }
    while ( 1 )
    {
      v11 = (_DWORD *)((char *)v11 + (unsigned int)v11[1] + 8);
      v35 = v11;
      if ( (*(_BYTE *)v11 & 1) == 0 || !v11[1] )
        goto LABEL_29;
      *((_QWORD *)&v37 + 1) = v11 + 2;
      WORD1(v37) = *((_WORD *)v11 + 2);
      LOWORD(v37) = WORD1(v37) - 1;
      v8 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v37, 1380204895, (_DWORD *)v9);
      if ( v8 >= 0 )
        break;
      v8 = 0;
LABEL_28:
      v11 = v35;
LABEL_29:
      if ( (unsigned int)++v36 >= v7[1] )
        goto LABEL_30;
    }
    if ( !*(_DWORD *)(v9 + 8) )
      goto LABEL_28;
    v12 = v9 + 12;
    if ( *(_WORD *)(v9 + 12) )
      goto LABEL_28;
    v13 = *(unsigned __int16 *)(v9 + 16);
    if ( !(_WORD)v13 || (unsigned __int16)v13 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_28;
    v14 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v37, 1129338207, (_DWORD *)v9);
    v8 = v14;
    if ( v14 < 0 )
    {
      LODWORD(v34) = v14;
LABEL_22:
      v15 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE;
LABEL_23:
      LODWORD(v33) = v13;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v15, v33, v34);
      v8 = 0;
      goto LABEL_28;
    }
    v16 = *(_DWORD *)(v9 + 8);
    if ( !v16 )
    {
      LODWORD(v34) = -1072431093;
      LODWORD(v33) = v13;
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_FAILURE, v33, v34);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v34) = v13;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            38,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v34);
        }
      }
      goto LABEL_28;
    }
    v17 = *(unsigned int *)(v9 + 4);
    v39 = 0LL;
    v18 = 0;
    v40 = 0;
    v19 = v9 + v17;
    while ( v12 < v19 && v18 < v16 )
    {
      if ( v18 >= 4 )
      {
        v23 = -1072431093;
        goto LABEL_48;
      }
      if ( *(_WORD *)v12 )
      {
        v23 = -1072431096;
        goto LABEL_48;
      }
      v20 = v44[2 * v18];
      v21 = (unsigned int)v44[2 * v18 - 1];
      if ( v20 == 1 )
      {
        *((_BYTE *)&v39 + v21) = *(_BYTE *)(v12 + 4);
      }
      else
      {
        if ( v20 != 4 )
        {
          v23 = -1072431089;
LABEL_48:
          LODWORD(v34) = v23;
          goto LABEL_22;
        }
        *(_DWORD *)((char *)&v39 + v21) = *(_DWORD *)(v12 + 4);
      }
      v22 = *(unsigned __int16 *)(v12 + 2);
      if ( (unsigned __int16)v22 < 4u )
        v22 = 4LL;
      v12 += v22 + 4;
      ++v18;
    }
    v24 = v38;
    v25 = *((_QWORD *)v38 + 378);
    if ( v25 )
    {
      v26 = v40;
      v27 = 28 * v13;
      *(_QWORD *)(v27 + v25) = v39;
      *(_DWORD *)(v27 + v25 + 8) = v26;
      *(_DWORD *)(a2 + 4 * v13) |= 0x20u;
    }
    if ( !(_BYTE)v39 )
    {
      *(_DWORD *)(a2 + 4 * v13) = *(_DWORD *)(a2 + 4 * v13) & 0xFFFFFFE0 | 0x11;
      goto LABEL_28;
    }
    v28 = BYTE1(v39);
    v29 = *(_DWORD *)(a2 + 4 * v13) & 0xFFFFFFE0;
    *(_DWORD *)(a2 + 4 * v13) = v29;
    if ( v28 )
    {
      switch ( v28 )
      {
        case 1:
          v30 = v29 | 4;
          break;
        case 2:
          v30 = v29 | 2;
          break;
        case 255:
          v30 = v29 | 8;
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dD(
              WPP_GLOBAL_Control->DeviceExtension,
              v28 - 2,
              v25,
              39,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              v13,
              v28);
          }
          goto LABEL_63;
      }
      *(_DWORD *)(a2 + 4 * v13) = v30;
    }
LABEL_63:
    v31 = UsbhAcpiEvalAcpiMethodEx(a1, (unsigned __int16 *)&v37, 1145851999, (_DWORD *)v9);
    v8 = v31;
    if ( v31 >= 0 )
    {
      if ( *(_DWORD *)(v9 + 8) && *(_WORD *)(v9 + 12) == 2 && *(_WORD *)(v9 + 14) >= 0x10u )
      {
        v32 = *((_QWORD *)v24 + 378);
        if ( v32 )
        {
          *(_OWORD *)(28 * v13 + v32 + 12) = *(_OWORD *)(v9 + 16);
          *(_DWORD *)(a2 + 4 * v13) |= 0x40u;
        }
        if ( (*(_BYTE *)(v9 + 24) & 1) == 0 )
          *(_DWORD *)(a2 + 4 * v13) |= 0x10u;
        v24[641] |= 1u;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v34) = v13;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            40,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            v34);
        }
        LODWORD(v34) = v8;
        LODWORD(v33) = v13;
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE, v33, v34);
      }
      goto LABEL_28;
    }
    LODWORD(v34) = v31;
    v15 = &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_FAILURE;
    goto LABEL_23;
  }
  return result;
}
