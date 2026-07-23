/*
 * XREFs of PoStartDeviceBusy @ 0x1405CD490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoStartDeviceBusy(PULONG IdlePointer)
{
  _InterlockedIncrement((volatile signed __int32 *)IdlePointer + 1);
  _InterlockedIncrement((volatile signed __int32 *)IdlePointer + 2);
}
