/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x14003A6E4
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048230 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14002B144 (UsbDevice_InitializeEndpointContext.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0 (UsbDevice_GetDeviceSpeedEx.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // r15
  __int64 *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rsi
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rdx
  int v21; // r10d
  unsigned __int16 v22; // r9
  int DeviceSpeed; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v32; // eax
  int v33; // ebp
  __int64 v34; // r8
  __int64 v35; // r8
  unsigned int i; // r8d
  int v37; // eax
  __int64 *v38; // rax
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+28h] [rbp-60h]
  __int64 v46; // [rsp+30h] [rbp-58h]
  __int64 v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+90h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v7 = v6[11];
  v48 = v7;
  v47 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      v6[9],
      4u,
      0xCu,
      0x5Au,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 143),
      *(_DWORD *)(a2 + 152));
  v8 = 0;
  v9 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 656LL : 648LL) + a1);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 44);
  else
    v10 = 0;
  v11 = a1 + 648;
  v12 = (__int64 *)(a1 + 656);
  if ( !*(_BYTE *)(a1 + 665) )
    v12 = (__int64 *)(a1 + 648);
  v13 = *v12;
  if ( v13 )
    v14 = *(void **)(v13 + 16);
  else
    v14 = 0LL;
  memset(v14, 0, v10);
  v16 = a1 + 648;
  if ( *(_BYTE *)(a1 + 665) )
    v16 = a1 + 656;
  if ( *(_QWORD *)v16 )
    v17 = *(_DWORD **)(*(_QWORD *)v16 + 16LL);
  else
    v17 = 0LL;
  v18 = *(_DWORD *)(v7 + 104);
  v17[1] |= 1u;
  v19 = (v18 & 4) != 0 ? 0x20 : 0;
  if ( *(_BYTE *)(a1 + 144) )
  {
    v15 = *(unsigned int *)((char *)v17 + v19 + 32);
    LODWORD(v15) = v15 | 0x4000000;
    *(_DWORD *)((char *)v17 + v19 + 32) = v15;
    *((_BYTE *)v17 + v19 + 39) = *(_BYTE *)(a1 + 148);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 152) > 1u )
        *(_DWORD *)((char *)v17 + v19 + 32) = v15 | 0x2000000;
      v15 = *(_DWORD *)((char *)v17 + v19 + 40) ^ (*(_DWORD *)((char *)v17 + v19 + 40) ^ (*(_DWORD *)(a1 + 156) << 16)) & 0x30000u;
      *(_DWORD *)((char *)v17 + v19 + 40) = v15;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 736LL), 0x3Du) )
  {
    if ( !*(_BYTE *)(a1 + 144) )
    {
      v20 = *(_QWORD *)(a1 + 24);
      if ( v20 )
      {
        if ( *(int *)(a1 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                           WdfDriverGlobals,
                           v20,
                           off_14006B128)
                       + 152) > 1u )
        {
          *(_DWORD *)((char *)v17 + v19 + 32) |= 0x2000000u;
        }
      }
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 744LL) & 0x20000000LL) == 0 )
    goto LABEL_54;
  if ( (unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline(v15) )
  {
    DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1);
    if ( DeviceSpeed )
    {
      v25 = DeviceSpeed - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v30 = UsbDevice_GetDeviceSpeedEx(v24);
                    v22 = 91;
                    LODWORD(v46) = v30;
                    LODWORD(v45) = *(unsigned __int8 *)(a1 + 143);
                    goto LABEL_44;
                  }
LABEL_45:
                  *(_QWORD *)(a1 + 560) = 0LL;
                  *(_QWORD *)(a1 + 568) = 0LL;
                  return a3(a4, 3221225485LL);
                }
                v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x700000;
              }
              else
              {
                v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x600000;
              }
            }
            else
            {
              v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x500000;
            }
            goto LABEL_53;
          }
          goto LABEL_49;
        }
LABEL_50:
        v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x300000;
        goto LABEL_53;
      }
LABEL_51:
      v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x100000;
      goto LABEL_53;
    }
LABEL_52:
    v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x200000;
    goto LABEL_53;
  }
  v21 = *(_DWORD *)(a1 + 20);
  switch ( v21 )
  {
    case 0:
      goto LABEL_52;
    case 1:
      goto LABEL_51;
    case 2:
      goto LABEL_50;
  }
  if ( v21 != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 92;
      LODWORD(v46) = *(_DWORD *)(a1 + 20);
      LODWORD(v45) = *(unsigned __int8 *)(a1 + 143);
LABEL_44:
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xCu,
        v22,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v45,
        v46);
      goto LABEL_45;
    }
    goto LABEL_45;
  }
LABEL_49:
  v32 = *(_DWORD *)((char *)v17 + v19 + 32) & 0xFF0FFFFF | 0x400000;
LABEL_53:
  *(_DWORD *)((char *)v17 + v19 + 32) = v32;
LABEL_54:
  v33 = *(_DWORD *)(a2 + 152);
  v34 = (unsigned int)(v33 - 1) + 2LL;
  if ( (*(_DWORD *)(v48 + 104) & 4) != 0 )
    v35 = v34 << 6;
  else
    v35 = 32 * v34;
  UsbDevice_InitializeEndpointContext(a1, a2, (_DWORD *)((char *)v17 + v35));
  for ( i = 0; i < 0x20; ++i )
  {
    v37 = *(_DWORD *)(a1 + 160);
    if ( _bittest(&v37, i) )
      *(_DWORD *)((char *)v17 + v19 + 32) = (i << 27) | *(_DWORD *)((char *)v17 + v19 + 32) & 0x7FFFFFF;
  }
  v17[1] |= 1 << v33;
  *v17 |= 1 << v33;
  memset((void *)(a1 + 464), 0, 0x60uLL);
  *(_QWORD *)(a1 + 512) = a1;
  *(_QWORD *)(a1 + 504) = UsbDevice_ConfigureEndpointCompletion;
  *(_DWORD *)(a1 + 500) = *(_DWORD *)(a1 + 500) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 503) = *(_BYTE *)(a1 + 143);
  v38 = (__int64 *)(a1 + 648);
  v39 = *(_BYTE *)(a1 + 665);
  if ( v39 )
    v38 = (__int64 *)(a1 + 656);
  v40 = *v38;
  if ( v40 )
    v41 = *(_QWORD *)(v40 + 24);
  else
    v41 = 0LL;
  *(_QWORD *)(a1 + 488) = v41;
  v42 = (__int64 *)(a1 + 648);
  if ( v39 )
    v42 = (__int64 *)(a1 + 656);
  v43 = *v42;
  if ( v43 )
    v44 = *(_QWORD *)(v43 + 16);
  else
    v44 = 0LL;
  *(_QWORD *)(a1 + 536) = v44;
  if ( v39 )
    v11 = a1 + 656;
  if ( *(_QWORD *)v11 )
    v8 = *(_DWORD *)(*(_QWORD *)v11 + 44LL);
  *(_QWORD *)(a1 + 560) = a3;
  *(_QWORD *)(a1 + 568) = a4;
  *(_DWORD *)(a1 + 544) = v8;
  *(_DWORD *)(a1 + 548) = 1;
  *(_QWORD *)(a1 + 552) = a1;
  return Command_SendCommand(v47, a1 + 464);
}
