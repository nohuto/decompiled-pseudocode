/*
 * XREFs of BvgaAcquireDisplayOwnership @ 0x14058D480
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x14058D6E0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 BvgaAcquireDisplayOwnership()
{
  __int64 result; // rax

  result = BvgaResetDisplayParameters;
  if ( BvgaResetDisplayParameters && BvgaDisplayState == 2 )
    result = guard_dispatch_icall_no_overrides(80LL, 50LL);
  BvgaDisplayState = 0;
  return result;
}
