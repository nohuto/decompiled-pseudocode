/*
 * XREFs of DifiDbgPrint @ 0x140617D64
 * Callers:
 *     CarHandleEtwEvent @ 0x14061456C (CarHandleEtwEvent.c)
 *     CarInitLogging @ 0x140614660 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x140618060 (CarInitiateBugcheck.c)
 *     CarLiveDump @ 0x1406180E0 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140275BC4 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DifiDbgPrint(const char *a1, ...)
{
  __int64 result; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
    return vDbgPrintExWithPrefixInternal((int)&File, 101, 0, (int)a1, va, 1);
  return result;
}
