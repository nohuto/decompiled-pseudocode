/*
 * XREFs of TR_Enable_Internal @ 0x140011210
 * Callers:
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140034F50 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140047F20 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x14000FE1C (WPP_RECORDER_SF_DDqd.c)
 *     TR_InitializeTransferRing @ 0x1400104C4 (TR_InitializeTransferRing.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+40h] [rbp-18h]

  TR_InitializeTransferRing((__int64)a1);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a1[7];
    v7 = v2;
    v6 = *(_DWORD *)(v3 + 144);
    v5 = *(unsigned __int8 *)(a1[6] + 135LL);
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(a1[5] + 72LL),
      4u,
      *(unsigned __int8 *)(a1[6] + 135LL),
      0x12u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v5,
      v6,
      *(_QWORD *)(v3 + 24),
      v7);
  }
  return v2;
}
