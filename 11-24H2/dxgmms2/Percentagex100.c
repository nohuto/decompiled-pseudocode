/*
 * XREFs of Percentagex100 @ 0x14009E840
 * Callers:
 *     ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1400EB6B4 (-CurateVPR@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Percentagex100(__int64 a1, unsigned __int64 a2)
{
  if ( a2 )
    return 10000 * a1 / a2;
  else
    return 0LL;
}
