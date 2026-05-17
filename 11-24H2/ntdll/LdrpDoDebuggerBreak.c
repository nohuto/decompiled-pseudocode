/*
 * XREFs of LdrpDoDebuggerBreak @ 0x18011F558
 * Callers:
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 */

__int64 LdrpDoDebuggerBreak()
{
  __int64 result; // rax
  char v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  result = ZwQueryInformationThread(-2LL, 17LL, &v1, 1LL, 0LL);
  if ( (int)result >= 0 && !v1 )
    __debugbreak();
  return result;
}
