/*
 * XREFs of AlpcpAllocateBuffer @ 0x14093FEC0
 * Callers:
 *     AlpcpAllocateBlob @ 0x14093F8B0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x14093F9C0 (AlpcpAllocateMessage.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 AlpcpAllocateBuffer()
{
  return ExAllocatePool2(0x100uLL);
}
