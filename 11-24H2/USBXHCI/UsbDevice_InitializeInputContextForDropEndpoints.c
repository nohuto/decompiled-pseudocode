/*
 * XREFs of UsbDevice_InitializeInputContextForDropEndpoints @ 0x14002AC70
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14002A958 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140008E74 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dddddd @ 0x14002B558 (WPP_RECORDER_SF_dddddd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForDropEndpoints(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v6; // rax
  _DWORD *v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v13; // r11d
  __int64 v14; // r9
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-68h]

  v2 = a1 + 616;
  v3 = a1 + 624;
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
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
      *v7 |= 1 << *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                                WdfDriverGlobals,
                                *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v8),
                                off_14006AFE8)
                            + 152);
      if ( *(_BYTE *)(a1 + 665) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            0xCu,
            0x3Au,
            (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
        v9 = (__int64 *)(a1 + 8);
      }
      else
      {
        v10 = *v9;
        v11 = v2;
        if ( (*(_DWORD *)(*(_QWORD *)(*v9 + 88) + 104LL) & 4) != 0 )
        {
          if ( *(_BYTE *)(a1 + 665) )
            v11 = v3;
          DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v11);
          v14 = ((unsigned int)(v13 - 1) + 1LL) << 6;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 665) )
            v11 = v3;
          DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v11);
          v14 = 32 * ((unsigned int)(v13 - 1) + 1LL);
        }
        v15 = DeviceContextBufferVA + v14;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dddddd(
            *(_QWORD *)(v10 + 72),
            *(unsigned __int8 *)(v15 + 2),
            *(unsigned __int16 *)(v15 + 6),
            (*(_DWORD *)(v15 + 4) >> 3) & 7,
            v17,
            *(_BYTE *)(a1 + 143),
            v13,
            (*(_DWORD *)(v15 + 4) >> 3) & 7,
            *(_WORD *)(v15 + 6),
            *(_BYTE *)(v15 + 2),
            *(_BYTE *)v15 & 7);
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a2 + 40) );
  }
  return 0LL;
}
