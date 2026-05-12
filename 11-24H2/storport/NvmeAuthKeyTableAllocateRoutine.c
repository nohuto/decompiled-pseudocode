/*
 * XREFs of NvmeAuthKeyTableAllocateRoutine @ 0x14006EC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAuthKeyTableAllocateRoutine(struct _RTL_GENERIC_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePool2(64LL, ByteSize, 1095655762LL);
}
