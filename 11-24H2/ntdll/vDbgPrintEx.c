/*
 * XREFs of vDbgPrintEx @ 0x180136980
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EBA20 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintEx(int a1, int a2, int a3, __int64 a4)
{
  return vDbgPrintExWithPrefixInternal((int)&unk_180178AE6, a1, a2, a3, a4, 1);
}
