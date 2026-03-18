/*
 * XREFs of AllocateOrValidateUnicodeStringBuffer @ 0x140434530
 * Callers:
 *     RtlUpcaseUnicodeString @ 0x140827CF0 (RtlUpcaseUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1408E8AF0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x1408E8D40 (RtlOemStringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1409C2E30 (RtlDowncaseUnicodeString.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AllocateOrValidateUnicodeStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  __int16 v4; // di
  __int64 Pool2; // rax

  v4 = a2;
  if ( a1 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *a3 = Pool2;
    if ( Pool2 )
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
