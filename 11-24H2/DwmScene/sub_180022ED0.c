/*
 * XREFs of sub_180022ED0 @ 0x180022ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180001A04 @ 0x180001A04 (sub_180001A04.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 */

char __fastcall sub_180022ED0(__int64 a1, int a2, void *a3, void *a4)
{
  char result; // al
  volatile signed __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  void *v15; // [rsp+58h] [rbp-A8h] BYREF
  void *v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v18; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  result = sub_180021E68(*(_QWORD *)(a1 + 112), a1 + 120, (__int64)a3);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v9 = *(volatile signed __int64 **)(a1 + 112);
      v17 = *(_QWORD *)(a1 + 16);
      v15 = a4;
      v16 = a3;
      v13 = a2;
      v14 = 1;
      v18 = sub_1800209CC(v19, v9);
      return sub_180001A04(v10, byte_18019CE51, v11, v12, (void **)&v18, (__int64)&v14, &v17, (__int64)&v13, &v16, &v15);
    }
  }
  return result;
}
