/*
 * XREFs of SdbpCheckFromVersion @ 0x1408081C4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckAttribute @ 0x140807D34 (SdbpCheckAttribute.c)
 *     SdbpMatchOsVersion @ 0x140A04DE4 (SdbpMatchOsVersion.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SdbpCheckFromVersion(unsigned __int64 a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax
  int i; // ecx
  unsigned __int64 v5; // r8

  result = 1LL;
  for ( i = 48; i >= 0; i -= 16 )
  {
    v5 = a1 >> i;
    if ( (unsigned __int16)(a1 >> i) != (unsigned __int16)(a2 >> i) && (_WORD)v5 != 0xFFFF )
      return (unsigned __int16)v5 < (unsigned __int16)(a2 >> i);
  }
  return result;
}
