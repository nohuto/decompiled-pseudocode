/*
 * XREFs of SdbpCheckFromVersion @ 0x18009710C
 * Callers:
 *     SdbpCheckAttribute @ 0x180096D80 (SdbpCheckAttribute.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
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
