/*
 * XREFs of PdcAllocate @ 0x140A75538
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x14077E6A8 (Pdcv2ActivationClientRegister.c)
 *     PdcTaskClientRegister @ 0x14077EBDC (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x14077EC84 (PdcPortOpenCommon.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PdcAllocate(char a1)
{
  return ExAllocatePool2(a1 != 0 ? 256LL : 64LL);
}
