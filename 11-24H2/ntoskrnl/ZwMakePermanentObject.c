/*
 * XREFs of ZwMakePermanentObject @ 0x1406A8710
 * Callers:
 *     NtCreateCpuPartition @ 0x1407757E0 (NtCreateCpuPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMakePermanentObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
