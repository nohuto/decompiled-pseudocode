/*
 * XREFs of sub_180022060 @ 0x180022060
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180002270 @ 0x180002270 (sub_180002270.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 *     sub_180022BCC @ 0x180022BCC (sub_180022BCC.c)
 *     sub_1800232E0 @ 0x1800232E0 (sub_1800232E0.c)
 */

__int64 __fastcall sub_180022060(__int64 a1, __int64 *a2, __int64 a3, void *a4, __int64 a5, int *a6, int *a7)
{
  volatile signed __int64 **v8; // rdi
  char v11; // r14
  volatile signed __int64 *v12; // rdx
  const char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v19; // [rsp+D8h] [rbp-80h] BYREF
  int v20; // [rsp+DCh] [rbp-7Ch] BYREF
  int v21; // [rsp+E0h] [rbp-78h] BYREF
  int v22; // [rsp+E4h] [rbp-74h] BYREF
  int v23; // [rsp+E8h] [rbp-70h] BYREF
  int v24; // [rsp+ECh] [rbp-6Ch] BYREF
  int v25; // [rsp+F0h] [rbp-68h] BYREF
  int v26; // [rsp+F4h] [rbp-64h] BYREF
  int v27; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+100h] [rbp-58h] BYREF
  __int64 v29; // [rsp+108h] [rbp-50h] BYREF
  __int64 v30; // [rsp+110h] [rbp-48h] BYREF
  __int64 v31; // [rsp+118h] [rbp-40h] BYREF
  __int64 v32; // [rsp+120h] [rbp-38h] BYREF
  __int64 v33; // [rsp+128h] [rbp-30h] BYREF
  __int64 v34; // [rsp+130h] [rbp-28h] BYREF
  void *v35; // [rsp+138h] [rbp-20h] BYREF
  const char *v36; // [rsp+140h] [rbp-18h] BYREF
  __int64 v37; // [rsp+148h] [rbp-10h] BYREF
  __int64 v38; // [rsp+150h] [rbp-8h] BYREF
  _BYTE *v39; // [rsp+158h] [rbp+0h] BYREF
  _BYTE v40[144]; // [rsp+168h] [rbp+10h] BYREF

  v8 = (volatile signed __int64 **)(a1 + 112);
  v11 = a3;
  sub_180021E68(*(_QWORD *)(a1 + 112), a1 + 249, a3);
  if ( (unsigned int)CallbackContext > 5
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&CallbackContext,
         0x400000000000uLL) )
  {
    v12 = *v8;
    v35 = a4;
    v27 = 1;
    v19 = a7[7];
    v20 = a7[6];
    v21 = a7[4];
    v22 = *a7;
    v28 = *((_QWORD *)a6 + 7);
    v29 = *((_QWORD *)a6 + 6);
    v30 = *((_QWORD *)a6 + 5);
    v31 = *((_QWORD *)a6 + 4);
    v32 = *((_QWORD *)a6 + 3);
    v33 = *((_QWORD *)a6 + 2);
    v23 = a6[3];
    v24 = a6[2];
    v25 = a6[1];
    v26 = *a6;
    v34 = a5;
    v13 = "success";
    if ( !v11 )
      v13 = "fail";
    v36 = v13;
    v37 = *a2;
    v38 = *(_QWORD *)(a1 + 8);
    v39 = sub_1800209CC(v40, v12);
    sub_180002270(
      v14,
      byte_18019D64F,
      v15,
      v16,
      (void **)&v39,
      (__int64)&v27,
      &v38,
      &v37,
      (void **)&v36,
      &v35,
      (__int64)&v34,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  v17 = sub_180022BCC((char *)(a1 + 120));
  return sub_1800232E0(v8, v17);
}
