/*
 * XREFs of ZwTerminateThread @ 0x1406A6E70
 * Callers:
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
