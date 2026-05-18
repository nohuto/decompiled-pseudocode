/*
 * XREFs of sub_1800228E0 @ 0x1800228E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800020C4 @ 0x1800020C4 (sub_1800020C4.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 *     sub_180022BCC @ 0x180022BCC (sub_180022BCC.c)
 *     sub_1800232E0 @ 0x1800232E0 (sub_1800232E0.c)
 */

__int64 __fastcall sub_1800228E0(__int64 a1, __int64 *a2, __int64 a3, void *a4, __int64 a5, int *a6)
{
  volatile signed __int64 **v7; // rdi
  char v10; // r14
  volatile signed __int64 *v11; // rdx
  const char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v18; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+84h] [rbp-7Ch] BYREF
  int v20; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+8Ch] [rbp-74h] BYREF
  int v22; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  void *v24; // [rsp+A0h] [rbp-60h] BYREF
  const char *v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v28; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[144]; // [rsp+D0h] [rbp-30h] BYREF

  v7 = (volatile signed __int64 **)(a1 + 112);
  v10 = a3;
  sub_180021E68(*(_QWORD *)(a1 + 112), a1 + 249, a3);
  if ( (unsigned int)CallbackContext > 5
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&CallbackContext,
         0x400000000000uLL) )
  {
    v11 = *v7;
    v24 = a4;
    v22 = 1;
    v18 = a6[7];
    v19 = a6[6];
    v20 = a6[4];
    v21 = *a6;
    v23 = a5;
    v12 = "success";
    if ( !v10 )
      v12 = "fail";
    v25 = v12;
    v26 = *a2;
    v27 = *(_QWORD *)(a1 + 8);
    v28 = sub_1800209CC(v29, v11);
    sub_1800020C4(
      v13,
      byte_18019D185,
      v14,
      v15,
      (void **)&v28,
      (__int64)&v22,
      &v27,
      &v26,
      (void **)&v25,
      &v24,
      (__int64)&v23,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
  v16 = sub_180022BCC((char *)(a1 + 120));
  return sub_1800232E0(v7, v16);
}
