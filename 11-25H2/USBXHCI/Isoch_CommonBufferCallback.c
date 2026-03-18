/*
 * XREFs of Isoch_CommonBufferCallback @ 0x140036580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Isoch_MapTransfers @ 0x14001CB10 (Isoch_MapTransfers.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  *(_DWORD *)(a1 + 344) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4,
      14,
      12,
      (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
      *(_DWORD *)(a1 + 108));
  return Isoch_MapTransfers(a1);
}
