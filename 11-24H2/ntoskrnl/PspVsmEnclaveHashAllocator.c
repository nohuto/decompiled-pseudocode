/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x14077B80C
 * Callers:
 *     PsCreateVsmEnclave @ 0x140A7F734 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspVsmEnclaveHashAllocator(ULONG_PTR a1)
{
  return ExAllocatePool2(0x101uLL, a1, 0x48457350u);
}
