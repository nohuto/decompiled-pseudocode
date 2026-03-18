/*
 * XREFs of UsbDevice_SetAddress @ 0x14003AEC4
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x14002FC80 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x140030810 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dqq @ 0x140031444 (WPP_RECORDER_SF_dqq.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0 (UsbDevice_GetDeviceSpeedEx.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  char v3; // r8
  __int16 v5; // r13
  __int64 v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v10; // rsi
  __int64 *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r9
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rsi
  int v20; // ecx
  unsigned int *v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r10
  int v27; // edx
  unsigned __int16 v28; // r9
  unsigned int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // dl
  int DeviceSpeed; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int16 v48; // dx
  __int64 v49; // rcx
  char v50; // al
  int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rcx
  char v60; // r8
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // eax
  int v66; // [rsp+20h] [rbp-58h]
  int v67; // [rsp+28h] [rbp-50h]
  int v68; // [rsp+30h] [rbp-48h]
  __int64 v69; // [rsp+80h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 665);
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 88);
  v69 = *(_QWORD *)(v2 + 144);
  v7 = 0;
  v8 = *(_QWORD *)((v3 != 0 ? 656LL : 648LL) + a1);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 44);
  else
    v9 = 0;
  v10 = a1 + 648;
  v11 = (__int64 *)(a1 + 656);
  if ( !v3 )
    v11 = (__int64 *)(a1 + 648);
  v12 = *v11;
  if ( v12 )
    v13 = *(void **)(v12 + 16);
  else
    v13 = 0LL;
  memset(v13, 0, v9);
  if ( *(_BYTE *)(a1 + 665) )
    v10 = a1 + 656;
  if ( *(_QWORD *)v10 )
    v14 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
  else
    v14 = 0LL;
  v15 = 0LL;
  v16 = *(_DWORD *)(v6 + 104) & 4;
  v17 = *(_DWORD *)(v14 + 4) | 3;
  *(_DWORD *)(v14 + 4) = v17;
  *(_DWORD *)(a1 + 160) = v17;
  v18 = *(_DWORD *)(a1 + 36);
  v19 = v14 + (v16 != 0 ? 64LL : 32LL);
  if ( v18 > 1 )
  {
    v20 = 0;
    v21 = (unsigned int *)(a1 + 48);
    v22 = v18 - 1;
    do
    {
      v23 = *v21++;
      if ( v23 > 0xF )
        v23 = 15;
      v24 = v23 << v20;
      v20 += 4;
      v15 = v24 | (unsigned int)v15;
      --v22;
    }
    while ( v22 );
  }
  v25 = *(_DWORD *)v19 ^ ((unsigned int)v15 ^ *(_DWORD *)v19) & 0xFFFFF;
  *(_DWORD *)v19 = v25;
  v26 = *(_QWORD *)(a1 + 8);
  if ( (*(_QWORD *)(v26 + 744) & 0x20000000LL) == 0 )
  {
    v43 = *(_DWORD *)(a1 + 20);
    if ( v43 )
    {
      if ( v43 != 1 )
      {
        if ( v43 != 2 )
        {
          if ( v43 != 3 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return (unsigned int)-1073741811;
            v28 = 22;
            v42 = *(_QWORD *)(v26 + 72);
            v68 = *(_DWORD *)(a1 + 20);
            v67 = *(unsigned __int8 *)(a1 + 143);
            goto LABEL_54;
          }
          goto LABEL_28;
        }
LABEL_30:
        v29 = v25 & 0xFF0FFFFF | 0x300000;
        goto LABEL_35;
      }
LABEL_32:
      v29 = v25 & 0xFF0FFFFF | 0x100000;
      goto LABEL_35;
    }
LABEL_34:
    v29 = v25 & 0xFF0FFFFF | 0x200000;
    goto LABEL_35;
  }
  if ( !(unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline(v25) )
  {
    v27 = *(_DWORD *)(a1 + 20);
    if ( v27 )
    {
      if ( v27 != 1 )
      {
        if ( v27 != 2 )
        {
          if ( v27 != 3 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = 21;
              v68 = *(_DWORD *)(a1 + 20);
              v67 = *(unsigned __int8 *)(a1 + 143);
LABEL_53:
              v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
LABEL_54:
              WPP_RECORDER_SF_dD(
                v42,
                2u,
                0xCu,
                v28,
                (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
                v67,
                v68);
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741811;
          }
          goto LABEL_27;
        }
        goto LABEL_29;
      }
      goto LABEL_31;
    }
    goto LABEL_33;
  }
  DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1);
  if ( !DeviceSpeed )
  {
LABEL_33:
    LODWORD(v25) = *(_DWORD *)v19;
    goto LABEL_34;
  }
  v36 = DeviceSpeed - 1;
  if ( !v36 )
  {
LABEL_31:
    LODWORD(v25) = *(_DWORD *)v19;
    goto LABEL_32;
  }
  v37 = v36 - 1;
  if ( !v37 )
  {
LABEL_29:
    LODWORD(v25) = *(_DWORD *)v19;
    goto LABEL_30;
  }
  v38 = v37 - 1;
  if ( !v38 )
  {
LABEL_27:
    LODWORD(v25) = *(_DWORD *)v19;
LABEL_28:
    v29 = v25 & 0xFF0FFFFF | 0x400000;
    goto LABEL_35;
  }
  v39 = v38 - 1;
  if ( v39 )
  {
    v40 = v39 - 1;
    if ( v40 )
    {
      if ( v40 != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v41 = UsbDevice_GetDeviceSpeedEx(v35);
          v28 = 20;
          v68 = v41;
          v67 = *(unsigned __int8 *)(a1 + 143);
          goto LABEL_53;
        }
        return (unsigned int)-1073741811;
      }
      v29 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x700000;
    }
    else
    {
      v29 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x600000;
    }
  }
  else
  {
    v29 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x500000;
  }
LABEL_35:
  *(_DWORD *)v19 = v29 & 0x7FFFFFF | 0x8000000;
  *(_BYTE *)(v19 + 6) = *(_BYTE *)(a1 + 44);
  v30 = *(_QWORD *)(a1 + 24);
  if ( v30 )
  {
    v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            v30,
            off_14006B128);
    if ( *(_DWORD *)(v31 + 152) > 1u )
      *(_DWORD *)v19 |= 0x2000000u;
    *(_BYTE *)(v19 + 8) = *(_BYTE *)(v31 + 143);
    if ( !*(_BYTE *)(a1 + 144) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v31 + 152) )
      *(_BYTE *)(a1 + 145) = 1;
  }
  v32 = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)v32 )
    v33 = *(_BYTE *)(a1 + 4 * v32 + 44);
  else
    v33 = 0;
  *(_BYTE *)((v16 != 0 ? 0x20 : 0) + v14 + 41) = v33;
  v44 = v16 != 0 ? 0x40 : 0;
  v45 = *(unsigned int *)(v44 + v14 + 68);
  v46 = (unsigned int)v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(a1 + 184) + 128LL))) & 0x38;
  *(_DWORD *)(v44 + v14 + 68) = v46;
  v47 = *(_QWORD *)(a1 + 184);
  if ( !(unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline(v46, v45, v44, v15)
    || *(_WORD *)(v47 + 100)
    || !*(_BYTE *)(v47 + 39)
    || ((*(_DWORD *)(v47 + 128) - 1) & 0xFFFFFFFB) != 0 )
  {
    v48 = *(_WORD *)(v47 + 100) & 0x7FF;
  }
  else
  {
    v48 = *(_WORD *)(v47 + 105);
  }
  *(_WORD *)((v16 != 0 ? 0x40 : 0) + v14 + 70) = v48;
  v49 = *(_QWORD *)(a1 + 184);
  v50 = *(_BYTE *)(v49 + 99) & 3;
  if ( v50 == 1 )
  {
    v51 = 0;
  }
  else if ( (*(_QWORD *)(*(_QWORD *)v49 + 736LL) & 0x10000000000000LL) == 0
         || v50 != 3
         || *(char *)(v49 + 98) >= 0
         || (v52 = *(_QWORD *)(v49 + 16), *(_WORD *)(v52 + 132) != 1529)
         || *(_WORD *)(v52 + 134) != 4353
         || (v51 = 0, *(_DWORD *)(v52 + 36) <= 1u) )
  {
    v51 = 6;
  }
  *(_DWORD *)((v16 != 0 ? 0x40 : 0) + v14 + 68) = v51 | *(_DWORD *)((v16 != 0 ? 0x40 : 0) + v14 + 68) & 0xFFFFFFF9;
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 160LL) = *(unsigned __int16 *)((v16 != 0 ? 0x40 : 0) + v14 + 70);
  *(_QWORD *)((v16 != 0 ? 0x40 : 0) + v14 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 184), 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v54 = a1 + 656;
    if ( !*(_BYTE *)(a1 + 665) )
      v54 = a1 + 648;
    if ( *(_QWORD *)v54 )
      v55 = *(_QWORD *)(*(_QWORD *)v54 + 16LL);
    else
      v55 = 0LL;
    WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v55, v53, 0x17u, v66);
  }
  memset((void *)(a1 + 464), 0, 0x60uLL);
  v56 = *(_DWORD *)(a1 + 500);
  *(_QWORD *)(a1 + 504) = UsbDevice_SetAddressCompletion;
  v57 = a1 + 648;
  *(_QWORD *)(a1 + 512) = a1;
  v58 = (v56 & 0xFFFF03FF | 0x2C00) ^ ((v56 & 0x3FF | 0x2C00) ^ (unsigned __int16)(v5 << 9)) & 0x200;
  v59 = a1 + 656;
  *(_DWORD *)(a1 + 500) = v58;
  *(_BYTE *)(a1 + 503) = *(_BYTE *)(a1 + 143);
  v60 = *(_BYTE *)(a1 + 665);
  if ( !v60 )
    v59 = a1 + 648;
  if ( *(_QWORD *)v59 )
    v61 = *(_QWORD *)(*(_QWORD *)v59 + 24LL);
  else
    v61 = 0LL;
  *(_QWORD *)(a1 + 488) = v61;
  if ( v60 )
    v57 = a1 + 656;
  if ( *(_QWORD *)v57 )
    v62 = *(_QWORD *)(*(_QWORD *)v57 + 16LL);
  else
    v62 = 0LL;
  *(_QWORD *)(a1 + 536) = v62;
  v63 = a1 + 656;
  if ( !v60 )
    v63 = a1 + 648;
  if ( *(_QWORD *)v63 )
    v64 = *(_DWORD *)(*(_QWORD *)v63 + 44LL);
  else
    v64 = 0;
  *(_DWORD *)(a1 + 544) = v64;
  *(_DWORD *)(a1 + 548) = 1;
  *(_QWORD *)(a1 + 552) = a1;
  Command_SendCommand(v69, a1 + 464);
  return v7;
}
