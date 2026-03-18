/*
 * XREFs of DifiDbgPrint @ 0x14060D7E4
 * Callers:
 *     CarHandleEtwEvent @ 0x140609FEC (CarHandleEtwEvent.c)
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 *     DifRegisterPlugin @ 0x14060CC10 (DifRegisterPlugin.c)
 *     CarInitiateBugcheck @ 0x14060DAE0 (CarInitiateBugcheck.c)
 *     CarLiveDump @ 0x14060DB60 (CarLiveDump.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403A9714 (vDbgPrintExWithPrefixInternal.c)
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
