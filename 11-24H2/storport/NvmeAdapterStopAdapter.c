/*
 * XREFs of NvmeAdapterStopAdapter @ 0x1400D9520
 * Callers:
 *     NvmeAdapterStop @ 0x1400D901C (NvmeAdapterStop.c)
 * Callees:
 *     NvmeCallMiniportAdapterControl @ 0x140071694 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x140071734 (NvmeIsAdapterControlSupported.c)
 *     NvmeAdapterAcquireInterruptLock @ 0x1400CC5B8 (NvmeAdapterAcquireInterruptLock.c)
 *     NvmeAdapterReleaseInterruptLock @ 0x1400D64FC (NvmeAdapterReleaseInterruptLock.c)
 */

__int64 __fastcall NvmeAdapterStopAdapter(__int64 a1)
{
  KIRQL v3; // bl
  int v4; // esi

  if ( (*(_BYTE *)(a1 + 144) & 2) == 0 )
    return 0LL;
  v3 = NvmeAdapterAcquireInterruptLock(a1);
  v4 = NvmeCallMiniportAdapterControl(a1 + 168);
  NvmeAdapterReleaseInterruptLock(a1, v3);
  if ( NvmeIsAdapterControlSupported(a1 + 168, 3) )
    NvmeCallMiniportAdapterControl(a1 + 168);
  if ( v4 >= 0 )
    *(_QWORD *)(a1 + 144) &= ~2uLL;
  return (unsigned int)v4;
}
