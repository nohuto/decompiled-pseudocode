/*
 * XREFs of AllocateOrValidateCharStringBuffer @ 0x140441300
 * Callers:
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14076DEB0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408E7AB0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1408E87F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140A6AE40 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140AA4590 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AllocateOrValidateCharStringBuffer(char a1, unsigned int a2, __int64 *a3, _WORD *a4)
{
  __int16 v4; // bx
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
