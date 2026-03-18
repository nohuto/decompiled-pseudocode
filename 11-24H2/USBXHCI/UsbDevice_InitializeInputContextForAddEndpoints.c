/*
 * XREFs of UsbDevice_InitializeInputContextForAddEndpoints @ 0x14002AE58
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x14002A958 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14002B144 (UsbDevice_InitializeEndpointContext.c)
 *     WPP_RECORDER_SF_ddddd @ 0x140030D18 (WPP_RECORDER_SF_ddddd.c)
 *     WPP_RECORDER_SF_dqq @ 0x140031444 (WPP_RECORDER_SF_dqq.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
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
  int v17; // r8d
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+90h] [rbp+8h]
  _BYTE *v21; // [rsp+98h] [rbp+10h]

  v4 = 0;
  v21 = (_BYTE *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   *(_QWORD *)(a1 + 448),
                   off_14006AE88);
  v20 = 0;
  v5 = *(_QWORD *)((*(_BYTE *)(a1 + 665) != 0 ? 8 : 0) + a1 + 648);
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
          v10 = *(_DWORD *)(v9 + 152);
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
              57,
              (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
              *(_BYTE *)(a1 + 143),
              v10,
              (*(_DWORD *)(v13 + 4) >> 3) & 7,
              *(_WORD *)(v13 + 6),
              *(_BYTE *)(v13 + 2));
          ++v4;
        }
        while ( v4 < *(_DWORD *)(a2 + 24) );
      }
      return (unsigned int)v20;
    }
    v15 = 8LL * i;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(a2 + 32) + v15),
            off_14006AFE8);
    v20 = Endpoint_Enable(v16);
    if ( v20 < 0 )
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xCu,
      0x37u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
  for ( ; i; --i )
  {
    v15 -= 8LL;
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)(a2 + 32) + v15),
            off_14006AFE8);
    Endpoint_Disable(v18, 0LL);
  }
  if ( *(_DWORD *)(a2 + 40) )
  {
    *v21 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqq(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 143),
        v17,
        56,
        v19,
        *(_BYTE *)(a1 + 143),
        *(_QWORD *)(a1 + 432),
        *(_QWORD *)a1);
  }
  return (unsigned int)v20;
}
