/*
 * XREFs of AlpcpAllocateBuffer @ 0x140894500
 * Callers:
 *     AlpcpAllocateBlob @ 0x140893EF0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x140894000 (AlpcpAllocateMessage.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpAllocateBuffer(__int64 a1, ULONG_PTR a2, ULONG a3)
{
  return ExAllocatePool2(0x100uLL, a2, a3);
}
