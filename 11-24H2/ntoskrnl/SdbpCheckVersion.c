/*
 * XREFs of SdbpCheckVersion @ 0x140807C88
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x1408075F4 (SdbpCheckAttribute.c)
 *     SdbpMatchOsVersion @ 0x140A088B4 (SdbpMatchOsVersion.c)
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
