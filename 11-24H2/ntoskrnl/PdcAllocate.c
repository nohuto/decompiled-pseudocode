/*
 * XREFs of PdcAllocate @ 0x140A77870
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14078D95C (Pdcv2ActivationClientRegister.c)
 *     PdcTaskClientRegister @ 0x14078DE9C (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x14078DF44 (PdcPortOpenCommon.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PdcAllocate(char a1)
{
  return ExAllocatePool2(a1 != 0 ? 256LL : 64LL);
}
