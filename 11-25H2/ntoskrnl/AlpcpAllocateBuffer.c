/*
 * XREFs of AlpcpAllocateBuffer @ 0x1408AE890
 * Callers:
 *     AlpcpAllocateBlob @ 0x1408AF0C0 (AlpcpAllocateBlob.c)
 *     AlpcpAllocateMessage @ 0x1408B07D0 (AlpcpAllocateMessage.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 AlpcpAllocateBuffer()
{
  return ExAllocatePool2(0x100uLL);
}
