/*
 * XREFs of AslStringPatternMatchExW @ 0x18009E3B8
 * Callers:
 *     SdbpCheckAttribute @ 0x180096D80 (SdbpCheckAttribute.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckMatchingRegistryValue @ 0x180099C90 (SdbpCheckMatchingRegistryValue.c)
 *     AslStringPatternMatchExW @ 0x18009E3B8 (AslStringPatternMatchExW.c)
 *     AslpProcessMatchRegNode @ 0x1800A5CF0 (AslpProcessMatchRegNode.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x18009E3B8 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchExW(WCHAR *a1, WCHAR *a2)
{
  WCHAR v2; // ax
  WCHAR *v4; // rsi
  unsigned int v5; // edi
  WCHAR v6; // bx
  WCHAR v7; // bx

  v2 = *a1;
  v4 = a1;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v2 )
      {
        if ( !*a2 )
          return 1;
LABEL_4:
        if ( v2 != *a2 )
        {
          v6 = RtlUpcaseUnicodeChar(*a2);
          if ( RtlUpcaseUnicodeChar(*v4) != v6 )
            return v5;
        }
LABEL_6:
        ++v4;
        goto LABEL_7;
      }
      if ( v2 == 63 )
        goto LABEL_6;
      if ( v2 != 42 )
        goto LABEL_4;
      v2 = v4[1];
      if ( v2 != 42 )
        break;
      ++v4;
    }
    if ( !v2 )
      return 1;
    if ( v2 == *a2 || (v7 = RtlUpcaseUnicodeChar(v2), v7 == RtlUpcaseUnicodeChar(*a2)) )
    {
      if ( (unsigned int)AslStringPatternMatchExW(v4 + 1, a2) )
        return 1;
    }
LABEL_7:
    if ( !*a2 )
      return v5;
    v2 = *v4;
    ++a2;
  }
}
