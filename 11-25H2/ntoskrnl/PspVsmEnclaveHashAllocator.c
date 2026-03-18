/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x14076BDBC
 * Callers:
 *     PsCreateVsmEnclave @ 0x140A8051C (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 PspVsmEnclaveHashAllocator()
{
  return ExAllocatePool2(0x101uLL);
}
