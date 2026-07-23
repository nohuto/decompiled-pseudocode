/*
 * XREFs of PiSwBusRelationsCompareInstancePath @ 0x14088C580
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PiSwBusRelationsCompareInstancePath(__int64 a1, PCWCH *a2, PCWCH *a3)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeStrings(
         a2[1],
         (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
         a3[1],
         (unsigned __int64)*(unsigned __int16 *)a3 >> 1,
         1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
