/*
 * XREFs of sub_180020BA0 @ 0x180020BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001B40 @ 0x180001B40 (sub_180001B40.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 */

unsigned __int8 __fastcall sub_180020BA0(_QWORD *a1, void *a2)
{
  unsigned __int8 result; // al
  volatile signed __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+50h] [rbp-D8h] BYREF
  void *v10; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v13; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v14[144]; // [rsp+80h] [rbp-A8h] BYREF

  result = sub_180021D08(a1[14], a1 + 15);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v5 = (volatile signed __int64 *)a1[14];
      v11 = a1[3];
      v12 = a1[1];
      v10 = a2;
      v9 = 1;
      v13 = sub_18002086C(v14, v5);
      return sub_180001B40(v6, byte_18019C264, v7, v8, (void **)&v13, (__int64)&v9, &v12, &v11, &v10);
    }
  }
  return result;
}
