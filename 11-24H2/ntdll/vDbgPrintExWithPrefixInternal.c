/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1800EBA20
 * Callers:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     LdrpLogDbgPrint @ 0x18011D6D4 (LdrpLogDbgPrint.c)
 *     DbgPrintReturnControlC @ 0x1801368C0 (DbgPrintReturnControlC.c)
 *     vDbgPrintEx @ 0x180136980 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x1801369B0 (vDbgPrintExWithPrefix.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EBACC (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  unsigned int v6; // ebx
  char v7; // cf
  __int64 result; // rax

  v6 = 128;
  v7 = 1;
  do
  {
    result = vDbgPrintExWithPrefixInternalHelper(a1, a2, a3, a4, a5, a6, v6, v7);
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
