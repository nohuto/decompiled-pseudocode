/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1404DE3D0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1406ADB20 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1403AE864 (IoProcessPassiveInterrupts.c)
 *     KiForceIdleInterruptNotify @ 0x140404948 (KiForceIdleInterruptNotify.c)
 */

__int64 __fastcall KiDispatchPassiveInterrupts(__int64 a1)
{
  if ( (KiVelocityFlags & 0x10000000) != 0 && (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F )
    KiForceIdleInterruptNotify();
  return IoProcessPassiveInterrupts();
}
