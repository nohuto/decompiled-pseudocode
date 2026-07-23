/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x140275BC4
 * Callers:
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x1404A16A0 (vDbgPrintExWithPrefix.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     IopDebugPrint @ 0x1405A27E4 (IopDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x1405E4C10 (DbgPrintReturnControlC.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     DifUtilDbgPrint @ 0x140616120 (DifUtilDbgPrint.c)
 *     DifiDbgPrint @ 0x140617D64 (DifiDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x140275C70 (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(int a1, int a2, int a3, int a4, va_list Args, char a6)
{
  unsigned int v6; // ebx
  char v7; // cf
  __int64 result; // rax

  v6 = 128;
  v7 = 1;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper(a1, a2, a3, a4, Args, a6, v6, v7);
    if ( (_DWORD)result != -2147483643 )
      break;
    if ( v6 >= 0x200 )
      break;
    v6 += 128;
    v7 = v6 < 0x200;
  }
  while ( v6 <= 0x200 );
  return result;
}
