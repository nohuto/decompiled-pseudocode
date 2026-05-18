/*
 * XREFs of copysignf @ 0x1800D4E34
 * Callers:
 *     sub_18003A0D8 @ 0x18003A0D8 (sub_18003A0D8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl copysignf(float Number, float Sign)
{
  return __imp_copysignf(Number, Sign);
}
