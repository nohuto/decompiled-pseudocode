/*
 * XREFs of KxSetAddressPolicy @ 0x1406AC390
 * Callers:
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 * Callees:
 *     <none>
 */

struct _KPRCB *__fastcall KxSetAddressPolicy(char a1)
{
  struct _KPRCB *result; // rax

  result = KeGetCurrentPrcb();
  result->ShadowFlags |= 1u;
  result->ShadowFlags &= ~2u;
  if ( (a1 & 1) != 0 )
    result->ShadowFlags ^= 3u;
  return result;
}
