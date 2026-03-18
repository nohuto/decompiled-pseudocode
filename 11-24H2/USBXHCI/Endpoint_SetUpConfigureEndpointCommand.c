/*
 * XREFs of Endpoint_SetUpConfigureEndpointCommand @ 0x14001C290
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14001CE2C (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048590 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     UsbDevice_GetDeviceSpeedEx @ 0x14004D9A0 (UsbDevice_GetDeviceSpeedEx.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Endpoint_SetUpConfigureEndpointCommand(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _QWORD *a7,
        void *a8)
{
  int v9; // ebp
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  _OWORD *v15; // rbx
  _OWORD *v16; // rdi
  _OWORD *DeviceContextBufferVA; // rax
  __int64 v18; // rdx
  _OWORD *v19; // rax
  unsigned int v20; // r8d
  unsigned int i; // ecx
  int v22; // r9d
  unsigned int v23; // eax
  int v24; // eax
  int v25; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v27; // rdx
  int DeviceSpeed; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  unsigned __int16 v37; // r9
  unsigned int v38; // eax
  int v39; // r8d
  unsigned int v40; // eax
  __int64 result; // rax
  int v42; // [rsp+28h] [rbp-40h]
  int v43; // [rsp+30h] [rbp-38h]

  v9 = *((_DWORD *)a1 + 38);
  v12 = *(_QWORD *)(a5 + 16);
  v13 = (unsigned int)(v9 - 1) + 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*a1 + 88LL) + 104LL) & 4) != 0 )
  {
    memset(*(void **)(a5 + 16), 0, 0x40uLL);
    v14 = a1[2];
    v15 = (_OWORD *)(v12 + 64);
    v16 = (_OWORD *)(v12 + (v13 << 6));
    if ( *(_BYTE *)(v14 + 666) )
    {
      DeviceContextBufferVA = (_OWORD *)XilCoreUsbDevice_GetDeviceContextBufferVA(v14 + (*(_BYTE *)(v14 + 665) != 0
                                                                                       ? 624LL
                                                                                       : 616LL));
      *v15 = *DeviceContextBufferVA;
      *(_OWORD *)(v12 + 80) = DeviceContextBufferVA[1];
      *(_OWORD *)(v12 + 96) = DeviceContextBufferVA[2];
      *(_OWORD *)(v12 + 112) = DeviceContextBufferVA[3];
    }
    else
    {
      memset((void *)(v12 + 64), 0, 0x40uLL);
    }
    if ( a6 )
    {
      *v16 = *a6;
      v16[1] = a6[1];
      v16[2] = a6[2];
      v16[3] = a6[3];
    }
  }
  else
  {
    *(_OWORD *)v12 = 0LL;
    v16 = (_OWORD *)(v12 + 32 * v13);
    v15 = (_OWORD *)(v12 + 32);
    *(_OWORD *)(v12 + 16) = 0LL;
    v18 = a1[2];
    if ( *(_BYTE *)(v18 + 666) )
    {
      v19 = (_OWORD *)XilCoreUsbDevice_GetDeviceContextBufferVA(v18 + (*(_BYTE *)(v18 + 665) != 0 ? 624LL : 616LL));
      *v15 = *v19;
      *(_OWORD *)(v12 + 48) = v19[1];
    }
    else
    {
      *v15 = 0LL;
      *(_OWORD *)(v12 + 48) = 0LL;
    }
    if ( a6 )
    {
      *v16 = *a6;
      v16[1] = a6[1];
    }
  }
  if ( a7 )
    *a7 = v16;
  v20 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v23 = i;
    v22 = *(_DWORD *)(a1[2] + 160LL);
    if ( !_bittest(&v22, i) )
      v23 = v20;
    v20 = v23;
  }
  *(_DWORD *)v15 = (v23 << 27) | *(_DWORD *)v15 & 0x7FFFFFF;
  v24 = *(_DWORD *)(v12 + 4) | 1;
  *(_DWORD *)(v12 + 4) = v24;
  switch ( a2 )
  {
    case 0:
      v25 = 1 << v9;
LABEL_24:
      *(_DWORD *)(v12 + 4) = v24 | v25;
      break;
    case 1:
      *(_DWORD *)v12 |= 1 << v9;
      break;
    case 2:
      v25 = 1 << v9;
      *(_DWORD *)v12 |= 1 << v9;
      goto LABEL_24;
  }
  if ( (*(_QWORD *)(*a1 + 744LL) & 0x20000000LL) == 0 )
    goto LABEL_51;
  IsEnabledDeviceUsageNoInline = Feature_UISCSF__private_IsEnabledDeviceUsageNoInline();
  v27 = a1[2];
  if ( IsEnabledDeviceUsageNoInline )
  {
    DeviceSpeed = UsbDevice_GetDeviceSpeedEx(a1[2]);
    if ( DeviceSpeed )
    {
      v30 = DeviceSpeed - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                if ( v34 != 1 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v35 = UsbDevice_GetDeviceSpeedEx(v29);
                    v37 = 72;
                    v43 = v35;
                    v42 = *(unsigned __int8 *)(v36 + 143);
LABEL_48:
                    WPP_RECORDER_SF_dD(
                      *(_QWORD *)(*a1 + 72LL),
                      2u,
                      0xCu,
                      v37,
                      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
                      v42,
                      v43);
                    goto LABEL_51;
                  }
                  goto LABEL_51;
                }
                v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x700000;
              }
              else
              {
                v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x600000;
              }
            }
            else
            {
              v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x500000;
            }
LABEL_50:
            *(_DWORD *)v15 = v38;
            goto LABEL_51;
          }
LABEL_39:
          v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x400000;
          goto LABEL_50;
        }
LABEL_40:
        v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x300000;
        goto LABEL_50;
      }
LABEL_41:
      v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x100000;
      goto LABEL_50;
    }
LABEL_49:
    v38 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x200000;
    goto LABEL_50;
  }
  v39 = *(_DWORD *)(v27 + 20);
  switch ( v39 )
  {
    case 0:
      goto LABEL_49;
    case 1:
      goto LABEL_41;
    case 2:
      goto LABEL_40;
    case 3:
      goto LABEL_39;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v37 = 73;
    v43 = *(_DWORD *)(v27 + 20);
    v42 = *(unsigned __int8 *)(v27 + 143);
    goto LABEL_48;
  }
LABEL_51:
  memset(a8, 0, 0x60uLL);
  *((_QWORD *)a8 + 5) = a3;
  v40 = *((_DWORD *)a8 + 9) & 0xFFFF31FF;
  *((_QWORD *)a8 + 6) = a4;
  *((_DWORD *)a8 + 9) = v40 | 0x3000;
  *((_BYTE *)a8 + 39) = *(_BYTE *)(a1[2] + 143LL);
  *((_QWORD *)a8 + 3) = *(_QWORD *)(a5 + 24);
  *((_QWORD *)a8 + 9) = v12;
  result = *(unsigned int *)(a5 + 44);
  *((_DWORD *)a8 + 20) = result;
  *((_DWORD *)a8 + 21) = 2;
  *((_QWORD *)a8 + 11) = a1;
  return result;
}
