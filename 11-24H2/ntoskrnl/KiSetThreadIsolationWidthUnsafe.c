/*
 * XREFs of KiSetThreadIsolationWidthUnsafe @ 0x1405C070C
 * Callers:
 *     KiAdjustCoreIsolationReasonThread @ 0x1405BF948 (KiAdjustCoreIsolationReasonThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetThreadIsolationWidthUnsafe(__int64 a1, int a2)
{
  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 1u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 1u);
}
