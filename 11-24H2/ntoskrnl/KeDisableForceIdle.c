/*
 * XREFs of KeDisableForceIdle @ 0x1405C4A80
 * Callers:
 *     KiInitializeForceIdle @ 0x140A75F3C (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
