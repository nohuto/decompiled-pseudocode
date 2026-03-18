/*
 * XREFs of AllocateOrValidateCharStringBuffer @ 0x1404412E0
 * Callers:
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14077D1A0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1408B0260 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1408B0F30 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140A6D650 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x140AA95F0 (RtlUnicodeStringToOemString.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
