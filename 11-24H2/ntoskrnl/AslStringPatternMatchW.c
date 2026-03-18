/*
 * XREFs of AslStringPatternMatchW @ 0x14095F194
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 * Callees:
 *     AslStringPatternMatchExW @ 0x140960540 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall AslStringPatternMatchW(__int64 a1, __int64 a2)
{
  return AslStringPatternMatchExW(a1, a2);
}
