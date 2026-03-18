/*
 * XREFs of UsbDevice_InitializeInputContextForDropEndpoints @ 0x14000F4AC
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14000F194 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dddddd @ 0x14000E988 (WPP_RECORDER_SF_dddddd.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForDropEndpoints(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v6; // rax
  _DWORD *v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rdi
  int v10; // r11d
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // r9
  int v18; // r11d
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+30h] [rbp-58h]

  v2 = a1 + 608;
  v3 = a1 + 616;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v6 )
    v7 = *(_DWORD **)(v6 + 16);
  else
    v7 = 0LL;
  v8 = 0LL;
  if ( *(_DWORD *)(a2 + 40) )
  {
    v9 = (__int64 *)(a1 + 8);
    do
    {
      v10 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                          WdfDriverGlobals,
                          *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v8),
                          off_14006AFE8)
                      + 144);
      *v7 |= 1 << v10;
      if ( *(_BYTE *)(a1 + 657) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v21) = v10;
          LODWORD(v20) = *(unsigned __int8 *)(a1 + 135);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            0xCu,
            0x35u,
            (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
            v20,
            v21);
        }
        v9 = (__int64 *)(a1 + 8);
      }
      else
      {
        v11 = *v9;
        v12 = v2;
        if ( (*(_DWORD *)(*(_QWORD *)(*v9 + 88) + 104LL) & 4) != 0 )
        {
          if ( *(_BYTE *)(a1 + 657) )
            v12 = v3;
          DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v12);
          v15 = ((unsigned int)(v18 - 1) + 1LL) << 6;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 657) )
            v12 = v3;
          DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v12);
          v15 = 32 * ((unsigned int)(v14 - 1) + 1LL);
        }
        v16 = DeviceContextBufferVA + v15;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddddd(
            *(_QWORD *)(v11 + 72),
            *(unsigned __int8 *)(v16 + 2),
            *(unsigned __int16 *)(v16 + 6),
            (*(_DWORD *)(v16 + 4) >> 3) & 7,
            v19);
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a2 + 40) );
  }
  return 0LL;
}
