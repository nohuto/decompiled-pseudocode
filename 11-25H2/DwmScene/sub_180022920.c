/*
 * XREFs of sub_180022920 @ 0x180022920
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001B40 @ 0x180001B40 (sub_180001B40.c)
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_18002160C @ 0x18002160C (sub_18002160C.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 *     sub_180022A6C @ 0x180022A6C (sub_180022A6C.c)
 *     sub_180022CC0 @ 0x180022CC0 (sub_180022CC0.c)
 *     sub_180023180 @ 0x180023180 (sub_180023180.c)
 */

unsigned __int8 __fastcall sub_180022920(__int64 a1, __int64 *a2, void *a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  unsigned __int8 result; // al
  volatile signed __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // [rsp+50h] [rbp-E8h] BYREF
  void *v19; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE *v22; // [rsp+70h] [rbp-C8h] BYREF
  _BYTE v23[144]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = a1 + 120;
  v5 = (__int64 *)(a1 + 112);
  v8 = sub_180022A6C((char *)(a1 + 120));
  sub_180023180(v5, v8);
  sub_180021D08(*v5, v3, v9);
  v11 = sub_18002160C(v3, v10);
  sub_180023180(v5, v11);
  v12 = (void *)*v5;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v5 + 144), 0LL);
  result = sub_180022CC0(v12);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v14 = (volatile signed __int64 *)*v5;
      v20 = *a2;
      v21 = *(_QWORD *)(a1 + 8);
      v19 = a3;
      v18 = 1;
      v22 = sub_18002086C(v23, v14);
      return sub_180001B40(v15, byte_18019C5D5, v16, v17, (void **)&v22, (__int64)&v18, &v21, &v20, &v19);
    }
  }
  return result;
}
