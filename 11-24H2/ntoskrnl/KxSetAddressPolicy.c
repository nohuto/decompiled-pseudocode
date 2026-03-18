/*
 * XREFs of KxSetAddressPolicy @ 0x1406AB3F0
 * Callers:
 *     KiSetAddressPolicy @ 0x140321A30 (KiSetAddressPolicy.c)
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
