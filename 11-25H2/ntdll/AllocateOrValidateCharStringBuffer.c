/*
 * XREFs of AllocateOrValidateCharStringBuffer @ 0x18004AD30
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180069370 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1800D75B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x18013D9C0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x18013DAD0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013DBC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 */

__int64 __fastcall AllocateOrValidateCharStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  __int16 v4; // bx
  __int64 Atom; // rax

  v4 = a2;
  if ( !a1 )
  {
    if ( a2 > (unsigned __int16)*a4 || !*a3 )
      return 2147483653LL;
    return 0LL;
  }
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
