/*
 * XREFs of HUBPDO_EvtDeviceProcessQueryInterfaceRequest @ 0x140016140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14001DE04 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x14001E0EC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceProcessQueryInterfaceRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 *v6; // r8
  unsigned int v7; // edi
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  char v14; // [rsp+28h] [rbp-20h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  v5 = (_QWORD *)v4;
  v6 = *(__int64 **)(v4 + 24);
  if ( (v6[205] & 2) != 0 )
  {
    *(_DWORD *)a3 = 66388112;
    *(_QWORD *)(a3 + 16) = HUBFDO_GetPortStatusForDebuggingComplete;
    *(_QWORD *)(a3 + 8) = v4;
    *(_QWORD *)(a3 + 24) = HUBFDO_GetPortStatusForDebuggingComplete;
    v7 = 0;
    v8 = *(_BYTE *)(*v6 + 240) + 1;
    *(_BYTE *)(a3 + 32) = v8;
    *(_BYTE *)(a3 + 52) = BYTE1(*((_DWORD *)v6 + 410)) & 1;
    v9 = *v6;
    *(_OWORD *)(a3 + 104) = *(_OWORD *)(*v6 + 312);
    *(_OWORD *)(a3 + 120) = *(_OWORD *)(v9 + 328);
    if ( v8 == 1 )
    {
      *(_WORD *)(a3 + 120) = *(_WORD *)(v6[1] + 200);
      *(_DWORD *)(a3 + 72) = *((_DWORD *)v6 + 683);
    }
    else if ( v8 > 1u )
    {
      *(_WORD *)(a3 + 2LL * v8 + 118) = *(_WORD *)(v6[1] + 200);
      *(_DWORD *)(a3 + 72) = *(_DWORD *)(*v6 + 280);
    }
    *(_DWORD *)(a3 + 48) = *((_DWORD *)v6 + 43);
    *(_BYTE *)(a3 + 53) = (v6[205] & 0x1000) != 0;
    *(_QWORD *)(a3 + 40) = v6[3];
    *(_QWORD *)(a3 + 64) = HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume;
    *(_QWORD *)(a3 + 56) = HUBPDO_ParentInterfaceWasHubResetOnResume;
    *(_QWORD *)(a3 + 80) = v6[1] + 1368;
    *(_QWORD *)(a3 + 96) = &HUBPDO_GetHubSymbolicLinkName;
    v10 = v6[1];
    if ( (*(_DWORD *)(v10 + 204) & 0x10) != 0 )
    {
      *(_WORD *)(a3 + 88) = *(_WORD *)(v10 + 212);
      *(_WORD *)(a3 + 90) = *(_WORD *)(v6[1] + 214);
      if ( (*(_DWORD *)(v5[2] + 40LL) & 0x2000000) != 0 )
        *(_BYTE *)(a3 + 52) = 0;
    }
    v11 = *(_QWORD *)(a3 + 136);
    v5[8] = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v5[3];
      v14 = v12;
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(v6[1] + 1432),
        v12,
        5,
        106,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v14,
        v11);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v6[1] + 1432),
        (_DWORD)v5,
        5,
        105,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v4);
    }
    return (unsigned int)-1073741823;
  }
  return v7;
}
