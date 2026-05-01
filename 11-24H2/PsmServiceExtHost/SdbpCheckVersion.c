/*
 * XREFs of SdbpCheckVersion @ 0x180097730
 * Callers:
 *     SdbpCheckAttribute @ 0x1800971E0 (SdbpCheckAttribute.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpCheckVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  int i; // ecx

  for ( i = 48; i >= 0; i -= 16 )
  {
    if ( (unsigned __int16)(a1 >> i) != (unsigned __int16)(a2 >> i) && (unsigned __int16)(a1 >> i) != 0xFFFF )
      return 0LL;
  }
  return 1LL;
}
