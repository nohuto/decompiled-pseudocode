/*
 * XREFs of sub_180020E00 @ 0x180020E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800015EC @ 0x1800015EC (sub_1800015EC.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 */

unsigned __int8 __fastcall sub_180020E00(__int64 a1, char a2, void *a3, void *a4)
{
  unsigned __int8 result; // al
  void *v9; // rax
  volatile signed __int64 *v10; // rdx
  const char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  void *v16; // [rsp+68h] [rbp-98h] BYREF
  void *v17; // [rsp+70h] [rbp-90h] BYREF
  void *v18; // [rsp+78h] [rbp-88h] BYREF
  const char *v19; // [rsp+80h] [rbp-80h] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v21; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v22[144]; // [rsp+A0h] [rbp-60h] BYREF

  result = sub_180021E68(*(_QWORD *)(a1 + 112), a1 + 120);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v16 = a4;
      v9 = (void *)sub_1800138F8(a1 + 48);
      v10 = *(volatile signed __int64 **)(a1 + 112);
      v17 = v9;
      v11 = "fail";
      v18 = a3;
      if ( a2 )
        v11 = "success";
      v15 = 1;
      v19 = v11;
      v20 = *(_QWORD *)(a1 + 8);
      v21 = sub_1800209CC(v22, v10);
      return sub_1800015EC(
               v12,
               byte_18019D7A6,
               v13,
               v14,
               (void **)&v21,
               (__int64)&v15,
               &v20,
               (void **)&v19,
               &v18,
               &v17,
               &v16);
    }
  }
  return result;
}
