/*
 * XREFs of DifiDbgPrint @ 0x1406197A4
 * Callers:
 *     CarHandleEtwEvent @ 0x140615FAC (CarHandleEtwEvent.c)
 *     CarInitLogging @ 0x1406160A0 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x140618BD0 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x140619AA0 (CarInitiateBugcheck.c)
 *     CarLiveDump @ 0x140619B20 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402CB374 (vDbgPrintExWithPrefixInternal.c)
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
