/*
 * XREFs of PopFxDirectedPowerTransitionWorker @ 0x14044FCC0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14044FCFC (PopFxHandleDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDirectedPowerTransitionWorker(ULONG_PTR a1)
{
  do
    PopFxHandleDirectedPowerTransition(a1);
  while ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 992), 0xFFFFFFFF) != 1 );
  return PopFxDereferenceDevice(a1, 4);
}
