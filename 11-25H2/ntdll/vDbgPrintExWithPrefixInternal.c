/*
 * XREFs of vDbgPrintExWithPrefixInternal @ 0x1800EC740
 * Callers:
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     LdrpLogDbgPrint @ 0x18011EFA4 (LdrpLogDbgPrint.c)
 *     DbgPrintReturnControlC @ 0x180138030 (DbgPrintReturnControlC.c)
 *     vDbgPrintEx @ 0x1801380F0 (vDbgPrintEx.c)
 *     vDbgPrintExWithPrefix @ 0x180138120 (vDbgPrintExWithPrefix.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800EC7EC (vDbgPrintExWithPrefixInternalHelper.c)
 */

__int64 __fastcall vDbgPrintExWithPrefixInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned int v6; // ebx
  bool v7; // cf
  __int64 result; // rax
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+38h] [rbp-20h]

  v6 = 128;
  v7 = 1;
  do
  {
    LOBYTE(v14) = v7;
    LOBYTE(v13) = a6;
    result = vDbgPrintExWithPrefixInternalHelper(a1, a2, a3, a4, a5, v13, v6, v14);
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
