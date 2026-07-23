/*
 * XREFs of DifUtilDbgPrint @ 0x140616120
 * Callers:
 *     DifCallPluginEntry @ 0x140616B50 (DifCallPluginEntry.c)
 *     DifRegisterKernelPlugins @ 0x140616FF0 (DifRegisterKernelPlugins.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140275BC4 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifUtilDbgPrint(int a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  if ( (VfRuleClasses & 0x400000) == 0 )
  {
    result = KeGetCurrentIrql();
    if ( !(_BYTE)result )
      return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, a1, va, 1);
  }
  return result;
}
