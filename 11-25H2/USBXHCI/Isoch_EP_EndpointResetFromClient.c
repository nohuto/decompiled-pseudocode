/*
 * XREFs of Isoch_EP_EndpointResetFromClient @ 0x14002A4E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 */

_UNKNOWN **__fastcall Isoch_EP_EndpointResetFromClient(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rcx
  int v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(_QWORD *)(a1 + 56);
    v5 = *(_DWORD *)(v3 + 144);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    result = (_UNKNOWN **)WPP_RECORDER_SF_dD(
                            *(_QWORD *)(v3 + 80),
                            4u,
                            0xEu,
                            0xEu,
                            (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
                            v4,
                            v5);
  }
  *(_BYTE *)(a1 + 342) = 1;
  return result;
}
