/*
 * XREFs of EtwTracePriQEnqueueFailed @ 0x14064DCC0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x140323D10 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePriQEnqueueFailed(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v6 = 0;
  result = HIDWORD(xmmword_140FC5B10);
  if ( (BYTE12(xmmword_140FC5B10) & 8) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 1296);
    v4 = a2;
    v5 = v3;
    v7 = &v4;
    v9 = 0;
    v8 = 12;
    return EtwTraceKernelEvent((int)&v7, 1, 0x21000000u, 1360, 6292994);
  }
  return result;
}
