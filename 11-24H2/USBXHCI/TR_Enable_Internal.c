/*
 * XREFs of TR_Enable_Internal @ 0x140004C30
 * Callers:
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048230 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     TR_InitializeTransferRing @ 0x14000A7FC (TR_InitializeTransferRing.c)
 *     WPP_RECORDER_SF_DDqd @ 0x14002F21C (WPP_RECORDER_SF_DDqd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_Enable_Internal(_QWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rdx

  TR_InitializeTransferRing();
  v2 = (*(__int64 (__fastcall **)(_QWORD *))(a1[4] + 32LL))(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a1[7];
    v4 = *(_QWORD *)(v3 + 24);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_DDqd(
      *(_QWORD *)(a1[5] + 72LL),
      v4,
      *(unsigned __int8 *)(a1[6] + 143LL),
      18,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      *(_BYTE *)(a1[6] + 143LL),
      *(_DWORD *)(v3 + 152),
      *(_QWORD *)(v3 + 24),
      v2);
  }
  return v2;
}
