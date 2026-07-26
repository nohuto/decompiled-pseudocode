/*
 * XREFs of PdcAllocate @ 0x14014E8B0
 * Callers:
 *     PdcTaskClientRegister @ 0x14014E654 (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x14014E904 (PdcPortOpenCommon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PdcAllocate(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(256LL, a2, a3);
}
