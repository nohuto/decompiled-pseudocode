/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x140451590
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopFxHandleDirectedPowerTransition @ 0x1404515CC (PopFxHandleDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDirectedPowerTransitionWorker(ULONG_PTR a1)
{
  do
    PopFxHandleDirectedPowerTransition(a1);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 992), 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(a1, 4);
}
