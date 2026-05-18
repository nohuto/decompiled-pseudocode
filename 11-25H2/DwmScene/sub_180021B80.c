/*
 * XREFs of sub_180021B80 @ 0x180021B80
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001C40 @ 0x180001C40 (sub_180001C40.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_18002160C @ 0x18002160C (sub_18002160C.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 *     sub_180022A6C @ 0x180022A6C (sub_180022A6C.c)
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 *     sub_180023180 @ 0x180023180 (sub_180023180.c)
 */

unsigned __int8 __fastcall sub_180021B80(__int64 a1, __int64 *a2, void *a3, void *a4, void *a5, void *a6)
{
  __int64 v6; // rbx
  volatile signed __int64 **v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  volatile signed __int64 *v15; // rcx
  unsigned __int8 result; // al
  volatile signed __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  void *v22; // [rsp+68h] [rbp-98h] BYREF
  void *v23; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+78h] [rbp-88h] BYREF
  void *v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v28; // [rsp+98h] [rbp-68h] BYREF
  char v29[144]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = a1 + 120;
  v8 = (volatile signed __int64 **)(a1 + 112);
  v12 = sub_180022A6C((char *)(a1 + 120));
  sub_180023180(v8, v12);
  sub_180021D08(*v8, v6);
  v14 = sub_18002160C(v6, v13);
  sub_180023180(v8, v14);
  v15 = *v8;
  _InterlockedExchangeAdd64(*v8 + 18, 0LL);
  result = sub_180022CC0((void *)v15);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v17 = *v8;
      v22 = a6;
      v23 = a5;
      v26 = *a2;
      v27 = *(_QWORD *)(a1 + 16);
      v24 = a4;
      v25 = a3;
      v21 = 1;
      v28 = sub_18002086C(v29, v17);
      return sub_180001C40(
               v18,
               byte_18019C037,
               v19,
               v20,
               (void **)&v28,
               (__int64)&v21,
               &v27,
               &v26,
               &v25,
               &v24,
               &v23,
               &v22);
    }
  }
  return result;
}
