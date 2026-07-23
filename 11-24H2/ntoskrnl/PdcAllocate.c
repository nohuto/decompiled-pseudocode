/*
 * XREFs of PdcAllocate @ 0x140A71990
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D88C (Pdcv2ActivationClientRegister.c)
 *     PdcTaskClientRegister @ 0x14078DDCC (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x14078DE74 (PdcPortOpenCommon.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PdcAllocate(char a1, ULONG_PTR a2, ULONG a3)
{
  return ExAllocatePool2(a1 != 0 ? 256LL : 64LL, a2, a3);
}
