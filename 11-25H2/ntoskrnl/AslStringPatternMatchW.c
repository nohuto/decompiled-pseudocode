/*
 * XREFs of AslStringPatternMatchW @ 0x140824AD0
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x140825DC0 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int64 a1, __int64 a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
