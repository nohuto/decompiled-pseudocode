/*
 * XREFs of Endpoint_SetUpConfigureEndpointCommand @ 0x14000DAE0
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14000D8E0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x14000DF14 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x140048280 (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140059AC0 (memset.c)
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
  __int64 v26; // r8
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 result; // rax

  v9 = *((_DWORD *)a1 + 36);
  v12 = *(_QWORD *)(a5 + 16);
  v13 = (unsigned int)(v9 - 1) + 2LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*a1 + 88LL) + 104LL) & 4) != 0 )
  {
    memset(*(void **)(a5 + 16), 0, 0x40uLL);
    v14 = a1[2];
    v15 = (_OWORD *)(v12 + 64);
    v16 = (_OWORD *)(v12 + (v13 << 6));
    if ( *(_BYTE *)(v14 + 658) )
    {
      DeviceContextBufferVA = (_OWORD *)XilCoreUsbDevice_GetDeviceContextBufferVA(v14 + (*(_BYTE *)(v14 + 657) != 0
                                                                                       ? 616LL
                                                                                       : 608LL));
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
    if ( *(_BYTE *)(v18 + 658) )
    {
      v19 = (_OWORD *)XilCoreUsbDevice_GetDeviceContextBufferVA(v18 + (*(_BYTE *)(v18 + 657) != 0 ? 616LL : 608LL));
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
    v22 = *(_DWORD *)(a1[2] + 152LL);
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
  if ( !(unsigned int)Feature_UISCSF__private_IsEnabledDeviceUsageNoInline()
    || (*(_QWORD *)(*a1 + 744LL) & 0x20000000LL) == 0 )
  {
    goto LABEL_38;
  }
  v26 = a1[2];
  v27 = *(_DWORD *)(v26 + 20);
  if ( !v27 )
  {
    v30 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x200000;
    goto LABEL_37;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    v30 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x100000;
    goto LABEL_37;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
    v30 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x300000;
    goto LABEL_37;
  }
  if ( v29 == 1 )
  {
    v30 = *(_DWORD *)v15 & 0xFF0FFFFF | 0x400000;
LABEL_37:
    *(_DWORD *)v15 = v30;
    goto LABEL_38;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*a1 + 72LL),
      2u,
      0xCu,
      0x46u,
      (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
      *(unsigned __int8 *)(v26 + 135),
      *(_DWORD *)(v26 + 20));
LABEL_38:
  memset(a8, 0, 0x60uLL);
  *((_QWORD *)a8 + 5) = a3;
  v31 = *((_DWORD *)a8 + 9) & 0xFFFF31FF;
  *((_QWORD *)a8 + 6) = a4;
  *((_DWORD *)a8 + 9) = v31 | 0x3000;
  *((_BYTE *)a8 + 39) = *(_BYTE *)(a1[2] + 135LL);
  *((_QWORD *)a8 + 3) = *(_QWORD *)(a5 + 24);
  *((_QWORD *)a8 + 9) = v12;
  result = *(unsigned int *)(a5 + 44);
  *((_DWORD *)a8 + 20) = result;
  *((_DWORD *)a8 + 21) = 2;
  *((_QWORD *)a8 + 11) = a1;
  return result;
}
