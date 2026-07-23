/*
 * XREFs of KeFindFirstSetRightAffinityEx @ 0x14032ADF0
 * Callers:
 *     PpmCheckContinueExecution @ 0x1402B065C (PpmCheckContinueExecution.c)
 *     PpmParkComputeUnparkMask @ 0x140328B7C (PpmParkComputeUnparkMask.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
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
      return *((unsigned int *)qword_140F22998 + (unsigned int)(v3 + (i << 6)));
    }
  }
  return 0xFFFFFFFFLL;
}
