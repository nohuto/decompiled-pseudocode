/*
 * XREFs of IsInsideUserApiHook @ 0x1C013A35C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsInsideUserApiHook()
{
  return gihmodUserApiHook >= 0;
}
