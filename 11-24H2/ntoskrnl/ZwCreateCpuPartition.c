/*
 * XREFs of ZwCreateCpuPartition @ 0x1406A88B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCpuPartition(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
