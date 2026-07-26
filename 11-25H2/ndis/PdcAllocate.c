/*
 * XREFs of PdcAllocate @ 0x140159580
 * Callers:
 *     PdcTaskClientRegister @ 0x140159324 (PdcTaskClientRegister.c)
 *     PdcPortOpenCommon @ 0x1401595D4 (PdcPortOpenCommon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PdcAllocate(__int64 a1, __int64 a2, int a3)
{
  return ExAllocatePool2(256LL, a2, a3);
}
