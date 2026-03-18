/*
 * XREFs of RaiseException @ 0x140502840
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x1405E88F0 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall RaiseException(int a1, char a2, unsigned int a3, const void *a4)
{
  unsigned int v4; // eax
  ULONG_PTR v6; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+28h] [rbp-B0h]
  void *v8; // [rsp+30h] [rbp-A8h]
  unsigned int v9; // [rsp+38h] [rbp-A0h]
  _OWORD v10[7]; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v11; // [rsp+ACh] [rbp-2Ch]
  int v12; // [rsp+B4h] [rbp-24h]

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v12 = 0;
  LODWORD(v6) = a1;
  HIDWORD(v6) = a2 & 1;
  v7 = 0LL;
  v8 = &RaiseException;
  if ( a4 )
  {
    v4 = 15;
    if ( a3 <= 0xF )
      v4 = a3;
    v9 = v4;
    if ( v4 )
      memmove((char *)v10 + 4, a4, 8LL * v4);
  }
  else
  {
    v9 = 0;
  }
  return RtlRaiseException((ULONG_PTR)&v6);
}
