/*
 * XREFs of sub_180022E80 @ 0x180022E80
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001764 @ 0x180001764 (sub_180001764.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 */

char __fastcall sub_180022E80(__int64 a1, char a2, void *a3, void *a4, void *a5)
{
  char result; // al
  void *v10; // rax
  volatile signed __int64 *v11; // rdx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  void *v17; // [rsp+68h] [rbp-98h] BYREF
  void *v18; // [rsp+70h] [rbp-90h] BYREF
  void *v19; // [rsp+78h] [rbp-88h] BYREF
  void *v20; // [rsp+80h] [rbp-80h] BYREF
  const char *v21; // [rsp+88h] [rbp-78h] BYREF
  __int64 v22; // [rsp+90h] [rbp-70h] BYREF
  _BYTE *v23; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v24[144]; // [rsp+A0h] [rbp-60h] BYREF

  result = sub_180021D08(*(_QWORD *)(a1 + 112), a1 + 120, (__int64)a3);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v17 = a5;
      v18 = a4;
      v10 = (void *)sub_1800137F8(a1 + 48);
      v11 = *(volatile signed __int64 **)(a1 + 112);
      v19 = v10;
      v12 = "fail";
      v20 = a3;
      if ( a2 )
        v12 = "success";
      v16 = 1;
      v21 = v12;
      v22 = *(_QWORD *)(a1 + 16);
      v23 = sub_18002086C(v24, v11);
      return sub_180001764(
               v13,
               byte_18019BEE9,
               v14,
               v15,
               (void **)&v23,
               (__int64)&v16,
               &v22,
               (void **)&v21,
               &v20,
               &v19,
               &v18,
               &v17);
    }
  }
  return result;
}
