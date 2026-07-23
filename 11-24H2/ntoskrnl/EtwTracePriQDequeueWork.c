/*
 * XREFs of EtwTracePriQDequeueWork @ 0x1404B8244
 * Callers:
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTracePriQDequeueWork(__int64 a1, __int64 a2)
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
  result = HIDWORD(xmmword_140FC6B50);
  if ( (BYTE12(xmmword_140FC6B50) & 8) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 1296);
    v9 = 0;
    v5 = v3;
    v4 = a2;
    v7 = &v4;
    v8 = 12;
    return EtwTraceKernelEvent((int)&v7, 1, 0x21000000u, 1361, 23076354);
  }
  return result;
}
