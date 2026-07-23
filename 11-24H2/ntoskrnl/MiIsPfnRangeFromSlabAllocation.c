/*
 * XREFs of MiIsPfnRangeFromSlabAllocation @ 0x14048421C
 * Callers:
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnRangeFromSlabAllocation(unsigned __int64 a1, __int64 a2)
{
  _BYTE *v2; // r9
  unsigned __int64 v3; // rcx

  if ( byte_140E3CC26 )
  {
    v2 = (_BYTE *)(qword_140E3D280 + 2 * (a1 >> 9));
    v3 = qword_140E3D280 + 2 * ((a2 + a1 - 1) >> 9);
    while ( (unsigned __int64)v2 <= v3 )
    {
      if ( *v2 )
        return 1LL;
      v2 += 2;
    }
  }
  return 0LL;
}
