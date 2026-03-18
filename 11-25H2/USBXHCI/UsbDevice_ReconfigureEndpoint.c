/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x14003ADB8
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140034F50 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140047F20 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14000F9E0 (UsbDevice_InitializeEndpointContext.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64),
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // r15
  __int64 *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  _DWORD *v17; // rbp
  char v18; // al
  char *v19; // rsi
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r11
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  unsigned int v27; // eax
  int v28; // r14d
  __int64 v29; // r8
  __int64 v30; // r8
  unsigned int i; // r8d
  int v32; // eax
  __int64 *v33; // rax
  char v34; // cl
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+40h] [rbp-48h]
  __int64 v43; // [rsp+90h] [rbp+8h]

  v6 = *(__int64 **)(a1 + 8);
  v8 = v6[11];
  v43 = v8;
  v42 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      v6[9],
      4u,
      0xCu,
      0x53u,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *(unsigned __int8 *)(a1 + 135),
      *(_DWORD *)(a2 + 144));
  v9 = 0;
  v10 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 44);
  else
    v11 = 0;
  v12 = a1 + 640;
  v13 = (__int64 *)(a1 + 648);
  if ( !*(_BYTE *)(a1 + 657) )
    v13 = (__int64 *)(a1 + 640);
  v14 = *v13;
  if ( v14 )
    v15 = *(void **)(v14 + 16);
  else
    v15 = 0LL;
  memset(v15, 0, v11);
  v16 = a1 + 640;
  if ( *(_BYTE *)(a1 + 657) )
    v16 = a1 + 648;
  if ( *(_QWORD *)v16 )
    v17 = *(_DWORD **)(*(_QWORD *)v16 + 16LL);
  else
    v17 = 0LL;
  v18 = -(*(_DWORD *)(v8 + 104) & 4);
  v17[1] |= 1u;
  v19 = (char *)v17 + (v18 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v20 = *(_DWORD *)v19 | 0x4000000;
    *(_DWORD *)v19 = v20;
    v19[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v19 = v20 | 0x2000000;
      *((_DWORD *)v19 + 2) ^= (*((_DWORD *)v19 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 8) + 736LL), 0x3Du) )
  {
    if ( !*(_BYTE *)(a1 + 136) )
    {
      v21 = *(_QWORD *)(a1 + 24);
      if ( v21 )
      {
        if ( *(int *)(a1 + 20) < 2
          && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                           WdfDriverGlobals,
                           v21,
                           off_14006B128)
                       + 144) > 1u )
        {
          *(_DWORD *)v19 |= 0x2000000u;
        }
      }
    }
  }
  if ( (unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline() )
  {
    v22 = *(_QWORD *)(a1 + 8);
    if ( (*(_QWORD *)(v22 + 744) & 0x20000000LL) != 0 )
    {
      v23 = *(_DWORD *)(a1 + 20);
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 != 1 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v41) = *(_DWORD *)(a1 + 20);
                LODWORD(v40) = *(unsigned __int8 *)(a1 + 135);
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(v22 + 72),
                  2u,
                  0xCu,
                  0x54u,
                  (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
                  v40,
                  v41);
              }
              *(_QWORD *)(a1 + 552) = 0LL;
              *(_QWORD *)(a1 + 560) = 0LL;
              return a3(a4, 3221225485LL);
            }
            v27 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x400000;
          }
          else
          {
            v27 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x300000;
          }
        }
        else
        {
          v27 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x100000;
        }
      }
      else
      {
        v27 = *(_DWORD *)v19 & 0xFF0FFFFF | 0x200000;
      }
      *(_DWORD *)v19 = v27;
    }
  }
  v28 = *(_DWORD *)(a2 + 144);
  v29 = (unsigned int)(v28 - 1) + 2LL;
  if ( (*(_DWORD *)(v43 + 104) & 4) != 0 )
    v30 = v29 << 6;
  else
    v30 = 32 * v29;
  UsbDevice_InitializeEndpointContext(a1, a2, (_DWORD *)((char *)v17 + v30));
  for ( i = 0; i < 0x20; ++i )
  {
    v32 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v32, i) )
      *(_DWORD *)v19 = (i << 27) | *(_DWORD *)v19 & 0x7FFFFFF;
  }
  v17[1] |= 1 << v28;
  *v17 |= 1 << v28;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 496) = UsbDevice_ConfigureEndpointCompletion;
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v33 = (__int64 *)(a1 + 640);
  v34 = *(_BYTE *)(a1 + 657);
  if ( v34 )
    v33 = (__int64 *)(a1 + 648);
  v35 = *v33;
  if ( v35 )
    v36 = *(_QWORD *)(v35 + 24);
  else
    v36 = 0LL;
  *(_QWORD *)(a1 + 480) = v36;
  v37 = (__int64 *)(a1 + 640);
  if ( v34 )
    v37 = (__int64 *)(a1 + 648);
  v38 = *v37;
  if ( v38 )
    v39 = *(_QWORD *)(v38 + 16);
  else
    v39 = 0LL;
  *(_QWORD *)(a1 + 528) = v39;
  if ( v34 )
    v12 = a1 + 648;
  if ( *(_QWORD *)v12 )
    v9 = *(_DWORD *)(*(_QWORD *)v12 + 44LL);
  *(_QWORD *)(a1 + 552) = a3;
  *(_QWORD *)(a1 + 560) = a4;
  *(_DWORD *)(a1 + 536) = v9;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  return Command_SendCommand(v42, a1 + 456);
}
