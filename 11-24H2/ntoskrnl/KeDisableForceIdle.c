/*
 * XREFs of KeDisableForceIdle @ 0x1405C7350
 * Callers:
 *     KiInitializeForceIdle @ 0x140A7BC3C (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
