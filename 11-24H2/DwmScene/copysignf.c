/*
 * XREFs of copysignf @ 0x1800D4F94
 * Callers:
 *     sub_18003A238 @ 0x18003A238 (sub_18003A238.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl copysignf(float Number, float Sign)
{
  return __imp_copysignf(Number, Sign);
}
