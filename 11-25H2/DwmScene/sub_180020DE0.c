/*
 * XREFs of sub_180020DE0 @ 0x180020DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001908 @ 0x180001908 (sub_180001908.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 */

unsigned __int8 __fastcall sub_180020DE0(__int64 a1, int a2, void *a3)
{
  unsigned __int8 result; // al
  volatile signed __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-C8h] BYREF
  int v12; // [rsp+54h] [rbp-C4h] BYREF
  void *v13; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE *v15; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v16[144]; // [rsp+70h] [rbp-A8h] BYREF

  result = sub_180021D08(*(_QWORD *)(a1 + 112), a1 + 120);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v7 = *(volatile signed __int64 **)(a1 + 112);
      v14 = *(_QWORD *)(a1 + 8);
      v13 = a3;
      v11 = a2;
      v12 = 1;
      v15 = sub_18002086C(v16, v7);
      return sub_180001908(v8, byte_18019C842, v9, v10, (void **)&v15, (__int64)&v12, &v14, (__int64)&v11, &v13);
    }
  }
  return result;
}
