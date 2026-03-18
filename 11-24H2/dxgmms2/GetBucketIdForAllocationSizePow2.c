/*
 * XREFs of GetBucketIdForAllocationSizePow2 @ 0x1400D5958
 * Callers:
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D5D58 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmEndOperation @ 0x1400F137C (VidMmEndOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBucketIdForAllocationSizePow2(unsigned __int64 a1)
{
  int v2; // eax

  if ( a1 > 0x100000000LL )
    return 21LL;
  if ( !_BitScanReverse((unsigned int *)&v2, a1 >> 12) )
    return 0LL;
  else
    return (unsigned int)(v2 + 1);
}
