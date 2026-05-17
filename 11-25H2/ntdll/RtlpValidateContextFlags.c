/*
 * XREFs of RtlpValidateContextFlags @ 0x1800CD090
 * Callers:
 *     RtlpCopyExtendedContext @ 0x180145130 (RtlpCopyExtendedContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v3; // r11d
  bool v4; // dl

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v3 = 1;
  v4 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v4 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( !v4 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v3 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
    return 3221225659LL;
  if ( a2 )
    *a2 = v3;
  return 0LL;
}
