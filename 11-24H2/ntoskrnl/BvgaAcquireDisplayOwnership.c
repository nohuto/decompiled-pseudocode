/*
 * XREFs of BvgaAcquireDisplayOwnership @ 0x140590460
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x1405906C0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BvgaAcquireDisplayOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = BvgaResetDisplayParameters;
  if ( BvgaResetDisplayParameters && BvgaDisplayState == 2 )
    result = guard_dispatch_icall_no_overrides(80LL, 50LL, a3, a4);
  BvgaDisplayState = 0;
  return result;
}
