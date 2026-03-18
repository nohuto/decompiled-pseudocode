/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1406A9B70
 * Callers:
 *     BiDeleteEfiVariable @ 0x1409C13D0 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
