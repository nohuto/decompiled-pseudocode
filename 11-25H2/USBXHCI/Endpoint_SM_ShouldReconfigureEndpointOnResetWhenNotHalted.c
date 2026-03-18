/*
 * XREFs of Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x14002D25C
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted @ 0x14002D240 (ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted.c)
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140021C28 (WPP_RECORDER_SF_ddq.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x14002F474 (WPP_RECORDER_SF_ddqqD.c)
 *     Endpoint_AreTransfersPending @ 0x140035E68 (Endpoint_AreTransfersPending.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted(__int64 a1)
{
  __int64 v1; // rsi
  __int16 v3; // ax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdi
  _OWORD v9[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+70h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 280);
  memset(v9, 0, sizeof(v9));
  v10 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v9[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v3 = -1;
  }
  else
  {
    v3 = 40;
  }
  LOWORD(v9[0]) = v3;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(WdfDriverGlobals, v1, v9);
  v7 = *((_QWORD *)&v9[0] + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddqqD(*(_QWORD *)(a1 + 80), v4, v5, v6);
  if ( (*(_DWORD *)(v7 + 32) & 1) != 0 || (*(_BYTE *)(a1 + 99) & 3u) < 2 )
    goto LABEL_16;
  if ( (unsigned __int8)Endpoint_AreTransfersPending(a1) )
  {
    if ( *(_BYTE *)(a1 + 37) )
    {
      *(_DWORD *)(a1 + 288) = -1073741823;
      return 21LL;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(a1 + 80),
        4u,
        0xDu,
        0x78u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL),
        *(_DWORD *)(a1 + 144),
        *(_QWORD *)(a1 + 88));
LABEL_16:
    *(_DWORD *)(a1 + 288) = 0;
    return 21LL;
  }
  return 33LL;
}
