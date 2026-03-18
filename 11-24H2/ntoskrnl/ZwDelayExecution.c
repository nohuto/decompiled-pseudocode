/*
 * XREFs of ZwDelayExecution @ 0x1406A6A90
 * Callers:
 *     IovUnloadDrivers @ 0x140B8278C (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDelayExecution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
