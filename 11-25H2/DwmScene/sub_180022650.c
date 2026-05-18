/*
 * XREFs of sub_180022650 @ 0x180022650
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001B40 @ 0x180001B40 (sub_180001B40.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 *     sub_180022A6C @ 0x180022A6C (sub_180022A6C.c)
 *     sub_180023180 @ 0x180023180 (sub_180023180.c)
 */

__int64 __fastcall sub_180022650(__int64 a1, __int64 *a2, void *a3)
{
  volatile signed __int64 **v4; // rdi
  volatile signed __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v13; // [rsp+50h] [rbp-D8h] BYREF
  void *v14; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-C0h] BYREF
  _BYTE *v17; // [rsp+70h] [rbp-B8h] BYREF
  _BYTE v18[144]; // [rsp+80h] [rbp-A8h] BYREF

  v4 = (volatile signed __int64 **)(a1 + 112);
  sub_180021D08(*(_QWORD *)(a1 + 112), a1 + 249, (__int64)a3);
  if ( (unsigned int)CallbackContext > 5
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&CallbackContext,
         0x400000000000uLL) )
  {
    v7 = *v4;
    v15 = *a2;
    v16 = *(_QWORD *)(a1 + 8);
    v14 = a3;
    v13 = 1;
    v17 = sub_18002086C(v18, v7);
    sub_180001B40(v8, byte_18019C104, v9, v10, (void **)&v17, (__int64)&v13, &v16, &v15, &v14);
  }
  v11 = sub_180022A6C((char *)(a1 + 120));
  return sub_180023180(v4, v11);
}
