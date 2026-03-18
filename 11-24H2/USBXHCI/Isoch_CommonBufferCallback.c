/*
 * XREFs of Isoch_CommonBufferCallback @ 0x140034DD0
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
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
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(_DWORD *)(a1 + 108));
  return Isoch_MapTransfers(a1);
}
