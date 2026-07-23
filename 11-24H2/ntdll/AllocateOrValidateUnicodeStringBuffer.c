/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x1800398E0
 * Callers:
 *     RtlOemStringToUnicodeString @ 0x1800CF450 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 */

__int64 __fastcall AllocateOrValidateUnicodeStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  __int16 v4; // di
  __int64 Atom; // rax

  v4 = a2;
  if ( a1 )
  {
    Atom = RtlpAllocateAtom(a2);
    *a3 = Atom;
    if ( Atom )
    {
      *a4 = v4;
      return 0LL;
    }
    *a4 = 0;
    return 3221225495LL;
  }
  else
  {
    if ( a2 <= (unsigned __int16)*a4 && *a3 )
      return 0LL;
    return 2147483653LL;
  }
}
