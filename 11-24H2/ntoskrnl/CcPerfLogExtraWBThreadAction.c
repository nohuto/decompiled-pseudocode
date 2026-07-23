/*
 * XREFs of CcPerfLogExtraWBThreadAction @ 0x1404C6950
 * Callers:
 *     CcLogExtraWBThreadAction @ 0x1404C68AC (CcLogExtraWBThreadAction.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogExtraWBThreadAction(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _DWORD *v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+3Ch] [rbp-3Ch]
  _DWORD v9[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  if ( a1 == 2 )
  {
    v9[0] = 1;
  }
  else
  {
    if ( a1 != 3 )
      return result;
    v9[0] = 2;
  }
  v8 = 0;
  v12 = a5;
  v9[1] = a2;
  v10 = a3;
  v11 = a4;
  v6 = v9;
  v7 = 32;
  return EtwTraceKernelEvent((int)&v6, 1, 0x80020000, 5646, 5249282);
}
