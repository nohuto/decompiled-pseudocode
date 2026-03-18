/*
 * XREFs of EtwTracePriQEnqueueWork @ 0x1404C9884
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePriQEnqueueWork(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  result = HIDWORD(xmmword_140FC5B10);
  if ( (BYTE12(xmmword_140FC5B10) & 8) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 1296);
    v6 = a2;
    v7 = v5;
    v9 = &v6;
    v11 = 0;
    v8 = a3;
    v10 = 16;
    return EtwTraceKernelEvent((int)&v9, 1, 0x21000000u, 1359, a4 != 0 ? 6299138 : 6292994);
  }
  return result;
}
