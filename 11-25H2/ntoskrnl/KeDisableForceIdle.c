/*
 * XREFs of KeDisableForceIdle @ 0x1405C2FB0
 * Callers:
 *     KiInitializeForceIdle @ 0x140A79EA4 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
