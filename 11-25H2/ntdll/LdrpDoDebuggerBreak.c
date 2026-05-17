/*
 * XREFs of LdrpDoDebuggerBreak @ 0x180120E28
 * Callers:
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = ZwQueryInformationThread(-2LL, 17LL, &v1);
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
