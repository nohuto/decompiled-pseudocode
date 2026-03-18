/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1402CB374
 * Callers:
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     vDbgPrintExWithPrefix @ 0x1402CB150 (vDbgPrintExWithPrefix.c)
 *     PopPrintEx @ 0x1402CB174 (PopPrintEx.c)
 *     IopDebugPrint @ 0x1405A58A4 (IopDebugPrint.c)
 *     DbgPrintReturnControlC @ 0x1405E7620 (DbgPrintReturnControlC.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     DifUtilDbgPrint @ 0x140617B60 (DifUtilDbgPrint.c)
 *     DifiDbgPrint @ 0x1406197A4 (DifiDbgPrint.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1402CB420 (vDbgPrintExWithPrefixInternalHelper.c)
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
