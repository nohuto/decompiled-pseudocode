/*
 * XREFs of SdbpCheckVersion @ 0x1408083C8
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 *     SdbpMatchOsVersion @ 0x140A04DE4 (SdbpMatchOsVersion.c)
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
