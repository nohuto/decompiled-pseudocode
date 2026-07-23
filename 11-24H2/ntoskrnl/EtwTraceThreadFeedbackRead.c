/*
 * XREFs of EtwTraceThreadFeedbackRead @ 0x14064C740
 * Callers:
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceThreadFeedbackRead(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v4[0] = *(_DWORD *)(a1 + 1296);
  v4[1] = *(_DWORD *)(a2 + 36);
  v6 = v4;
  v8 = 0;
  v5 = a3;
  v7 = 16;
  return EtwTraceKernelEvent((int)&v6, 1, 0xA0000080, 3960, 514);
}
