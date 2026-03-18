/*
 * XREFs of UsbDevice_InitializeInputContextForAddEndpoints @ 0x14000F6F4
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14000F194 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_dqq @ 0x14000F084 (WPP_RECORDER_SF_dqq.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14000F9E0 (UsbDevice_InitializeEndpointContext.c)
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     WPP_RECORDER_SF_ddddd @ 0x140031B68 (WPP_RECORDER_SF_ddddd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddEndpoints(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rbp
  unsigned int i; // edi
  unsigned int v8; // eax
  __int64 v9; // rax
  int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  int v17; // eax
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+90h] [rbp+8h]
  _BYTE *v22; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v22 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 440),
                   off_14006AE88);
  v21 = 0;
  v5 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 16);
  else
    v6 = 0LL;
  for ( i = 0; ; ++i )
  {
    v8 = *(_DWORD *)(a2 + 24);
    if ( i >= v8 )
    {
      if ( v8 )
      {
        do
        {
          v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * v4),
                 off_14006AFE8);
          v10 = *(_DWORD *)(v9 + 144);
          v11 = (unsigned int)(v10 - 1) + 2LL;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 104LL) & 4) != 0 )
            v12 = v11 << 6;
          else
            v12 = 32 * v11;
          v13 = v6 + v12;
          UsbDevice_InitializeEndpointContext(a1, v9, v13);
          *(_DWORD *)(v6 + 4) |= 1 << v10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddddd(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              *(unsigned __int8 *)(v13 + 2),
              12,
              52,
              (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
              *(_BYTE *)(a1 + 135),
              v10,
              (*(_DWORD *)(v13 + 4) >> 3) & 7,
              *(_WORD *)(v13 + 6),
              *(_BYTE *)(v13 + 2));
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a2 + 24) );
      }
      return v21;
    }
    v15 = 8LL * i;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(a2 + 32) + v15),
            off_14006AFE8);
    v17 = Endpoint_Enable(v16);
    v21 = v17;
    if ( v17 < 0 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xCu,
      0x32u,
      (__int64)&WPP_222713be4b65397e827dad6cd239c0b0_Traceguids,
      *(unsigned __int8 *)(a1 + 135),
      *(_DWORD *)(v16 + 144),
      v17);
  for ( ; i; --i )
  {
    v15 -= 8LL;
    v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(a2 + 32) + v15),
            off_14006AFE8);
    Endpoint_Disable(v19, 0LL);
  }
  if ( *(_DWORD *)(a2 + 40) )
  {
    *v22 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), *(unsigned __int8 *)(a1 + 135), v18, 0x33u, v20);
  }
  return v21;
}
