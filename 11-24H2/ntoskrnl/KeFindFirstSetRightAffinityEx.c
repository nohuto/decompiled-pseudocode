/*
 * XREFs of KeFindFirstSetRightAffinityEx @ 0x140202700
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x140200488 (PpmParkComputeUnparkMask.c)
 *     PpmCheckContinueExecution @ 0x140351834 (PpmCheckContinueExecution.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightAffinityEx(unsigned __int16 *a1)
{
  __int16 i; // dx
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rax

  for ( i = 0; i < (int)*a1; ++i )
  {
    v2 = *(_QWORD *)&a1[4 * i + 4];
    if ( v2 )
    {
      _BitScanForward64(&v3, v2);
      return *((unsigned int *)qword_140F21E78 + (unsigned int)(v3 + (i << 6)));
    }
  }
  return 0xFFFFFFFFLL;
}
