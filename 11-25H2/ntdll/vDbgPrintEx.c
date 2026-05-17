/*
 * XREFs of vDbgPrintEx @ 0x1801380F0
 * Callers:
 *     <none>
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 __fastcall vDbgPrintEx(int a1, int a2, int a3, __int64 a4)
{
  return vDbgPrintExWithPrefixInternal((int)&unk_18017BF30, a1, a2, a3, a4, 1);
}
