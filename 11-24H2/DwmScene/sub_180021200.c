/*
 * XREFs of sub_180021200 @ 0x180021200
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800029C0 @ 0x1800029C0 (sub_1800029C0.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 *     sub_180022BCC @ 0x180022BCC (sub_180022BCC.c)
 *     sub_1800232E0 @ 0x1800232E0 (sub_1800232E0.c)
 */

__int64 __fastcall sub_180021200(__int64 a1, __int64 *a2, __int64 *a3, void *a4, void *a5)
{
  volatile signed __int64 **v6; // rdi
  volatile signed __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  void *v17; // [rsp+70h] [rbp-98h] BYREF
  void *v18; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v22; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v23[144]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = (volatile signed __int64 **)(a1 + 112);
  sub_180021E68(*(_QWORD *)(a1 + 112), a1 + 249);
  if ( (unsigned int)CallbackContext > 5
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&CallbackContext,
         0x400000000000uLL) )
  {
    v10 = *v6;
    v17 = a5;
    v19 = *a3;
    v20 = *a2;
    v21 = *(_QWORD *)(a1 + 16);
    v18 = a4;
    LODWORD(v16) = 1;
    v22 = sub_1800209CC(v23, v10);
    sub_1800029C0(v11, byte_18019CDAA, v12, v13, (void **)&v22, (__int64)&v16, &v21, &v20, &v19, &v18, &v17);
  }
  v14 = sub_180022BCC((char *)(a1 + 120));
  return sub_1800232E0(v6, v14);
}
