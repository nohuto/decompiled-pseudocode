/*
 * XREFs of HUBPDO_EvtDeviceProcessQueryInterfaceRequest @ 0x1400160F0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UTSP__private_IsEnabledDeviceUsageNoInline @ 0x14000C908 (Feature_UTSP__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_q @ 0x14001DDC4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x14001E0AC (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceProcessQueryInterfaceRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  _QWORD *v6; // rbp
  __int64 *v7; // rdi
  unsigned int v8; // esi
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  LOBYTE(v5) = 2;
  v6 = (_QWORD *)v4;
  v7 = *(__int64 **)(v4 + 24);
  if ( (v7[204] & 2) != 0 )
  {
    *(_DWORD *)a3 = 66388112;
    *(_QWORD *)(a3 + 16) = HUBFDO_GetPortStatusForDebuggingComplete;
    v8 = 0;
    *(_QWORD *)(a3 + 8) = v4;
    *(_QWORD *)(a3 + 24) = HUBFDO_GetPortStatusForDebuggingComplete;
    v9 = *(_BYTE *)(*v7 + 240) + 1;
    *(_BYTE *)(a3 + 32) = v9;
    *(_BYTE *)(a3 + 52) = BYTE1(*((_DWORD *)v7 + 408)) & 1;
    v10 = *v7;
    *(_OWORD *)(a3 + 104) = *(_OWORD *)(*v7 + 312);
    *(_OWORD *)(a3 + 120) = *(_OWORD *)(v10 + 328);
    if ( v9 == 1 )
    {
      *(_WORD *)(a3 + 120) = *(_WORD *)(v7[1] + 200);
      if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
        *(_DWORD *)(a3 + 72) = *((_DWORD *)v7 + 681);
    }
    else if ( v9 > 1u )
    {
      *(_WORD *)(a3 + 2LL * v9 + 118) = *(_WORD *)(v7[1] + 200);
      if ( (unsigned int)Feature_UTSP__private_IsEnabledDeviceUsageNoInline() )
        *(_DWORD *)(a3 + 72) = *(_DWORD *)(*v7 + 280);
    }
    *(_DWORD *)(a3 + 48) = *((_DWORD *)v7 + 43);
    *(_BYTE *)(a3 + 53) = (v7[204] & 0x1000) != 0;
    *(_QWORD *)(a3 + 40) = v7[3];
    *(_QWORD *)(a3 + 64) = HUBPDO_ParentInterfaceWasDeviceProgrammingLostOnResume;
    *(_QWORD *)(a3 + 56) = HUBPDO_ParentInterfaceWasHubResetOnResume;
    *(_QWORD *)(a3 + 80) = v7[1] + 1368;
    *(_QWORD *)(a3 + 96) = &HUBPDO_GetHubSymbolicLinkName;
    v11 = v7[1];
    if ( (*(_DWORD *)(v11 + 204) & 0x10) != 0 )
    {
      *(_WORD *)(a3 + 88) = *(_WORD *)(v11 + 212);
      *(_WORD *)(a3 + 90) = *(_WORD *)(v7[1] + 214);
      if ( (*(_DWORD *)(v6[2] + 40LL) & 0x2000000) != 0 )
        *(_BYTE *)(a3 + 52) = 0;
    }
    v12 = *(_QWORD *)(a3 + 136);
    v6[8] = v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v6[3];
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_qq(
        *(_QWORD *)(v7[1] + 1432),
        v13,
        5,
        111,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v6[3],
        v12);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v7[1] + 1432),
        v5,
        5,
        110,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
        v4);
    return (unsigned int)-1073741823;
  }
  return v8;
}
