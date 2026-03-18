/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x14077B95C
 * Callers:
 *     PsCreateVsmEnclave @ 0x140A84BF4 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PspVsmEnclaveHashAllocator()
{
  return ExAllocatePool2(0x101uLL);
}
