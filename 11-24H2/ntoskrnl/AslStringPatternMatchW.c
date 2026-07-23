/*
 * XREFs of AslStringPatternMatchW @ 0x140946C54
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int64 a1, __int64 a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
