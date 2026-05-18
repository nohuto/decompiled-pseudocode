/*
 * XREFs of sub_180022420 @ 0x180022420
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x18000151C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180002658 @ 0x180002658 (sub_180002658.c)
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_1800218C0 @ 0x1800218C0 (sub_1800218C0.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 *     sub_180022BCC @ 0x180022BCC (sub_180022BCC.c)
 *     sub_1800232E0 @ 0x1800232E0 (sub_1800232E0.c)
 */

char __fastcall sub_180022420(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        void *a15,
        __int64 a16,
        int a17,
        int a18,
        __int64 a19,
        int *a20,
        __int64 a21)
{
  int v22; // xmm6_4
  int v23; // xmm7_4
  int v24; // xmm8_4
  double v25; // xmm0_8
  __int64 v26; // r8
  int *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  char result; // al
  double v31; // xmm0_8
  void *v32; // rax
  volatile signed __int64 *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // [rsp+118h] [rbp-80h] BYREF
  int v38; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v39; // [rsp+120h] [rbp-78h] BYREF
  int v40; // [rsp+124h] [rbp-74h] BYREF
  int v41; // [rsp+128h] [rbp-70h] BYREF
  int v42; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v43; // [rsp+130h] [rbp-68h] BYREF
  int v44; // [rsp+134h] [rbp-64h] BYREF
  int v45; // [rsp+138h] [rbp-60h] BYREF
  int v46; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v47; // [rsp+140h] [rbp-58h] BYREF
  int v48; // [rsp+144h] [rbp-54h] BYREF
  int v49; // [rsp+148h] [rbp-50h] BYREF
  float v50; // [rsp+14Ch] [rbp-4Ch] BYREF
  float v51; // [rsp+150h] [rbp-48h] BYREF
  float v52; // [rsp+154h] [rbp-44h] BYREF
  int v53; // [rsp+158h] [rbp-40h] BYREF
  void *v54; // [rsp+160h] [rbp-38h] BYREF
  __int64 v55; // [rsp+168h] [rbp-30h] BYREF
  __int64 v56; // [rsp+170h] [rbp-28h] BYREF
  void *v57; // [rsp+178h] [rbp-20h] BYREF
  __int64 v58; // [rsp+180h] [rbp-18h] BYREF
  __int64 v59; // [rsp+188h] [rbp-10h] BYREF
  __int64 v60; // [rsp+190h] [rbp-8h] BYREF
  __int64 v61; // [rsp+198h] [rbp+0h] BYREF
  __int64 v62; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v63; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 v64; // [rsp+1B0h] [rbp+18h] BYREF
  __int64 v65; // [rsp+1B8h] [rbp+20h] BYREF
  _BYTE *v66; // [rsp+1C0h] [rbp+28h] BYREF
  _BYTE v67[144]; // [rsp+1C8h] [rbp+30h] BYREF

  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_QWORD *)(a21 + 8) )
  {
    v25 = sub_1800218C0(**(_QWORD **)a21 + 40LL);
    v23 = *(_DWORD *)(v26 + 44);
    v22 = LODWORD(v25);
    v24 = *v27;
  }
  v28 = sub_180022BCC((char *)(a1 + 120));
  sub_1800232E0(a1 + 112, v28);
  result = sub_180021E68(*(_QWORD *)(a1 + 112), a1 + 120, v29);
  if ( (unsigned int)CallbackContext > 5 )
  {
    result = __vcrt_trace_logging_provider::_TlgKeywordOn(
               (__vcrt_trace_logging_provider *)&CallbackContext,
               0x400000000000uLL);
    if ( result )
    {
      v37 = *(_DWORD *)(a21 + 8);
      v38 = v23;
      v41 = a20[1];
      v42 = *a20;
      v39 = v24;
      v40 = v22;
      v31 = sub_1800218C0((__int64)a20);
      v43 = LODWORD(v31);
      v32 = (void *)sub_1800138F8(a1 + 80);
      v33 = *(volatile signed __int64 **)(a1 + 112);
      v54 = v32;
      v55 = a19;
      v44 = a18;
      v45 = a17;
      v56 = a16;
      v57 = a15;
      v58 = a14;
      v59 = a13;
      v60 = a12;
      v61 = a11;
      v62 = a10;
      v63 = a9;
      v46 = a8;
      v47 = a7;
      v48 = a6;
      v49 = a5;
      v64 = *(_QWORD *)(a1 + 24);
      v65 = *(_QWORD *)(a1 + 8);
      v50 = a4;
      v51 = a3;
      v52 = a2;
      v53 = 1;
      v66 = sub_1800209CC(v67, v33);
      return sub_180002658(
               v34,
               byte_18019D2D5,
               v35,
               v36,
               (void **)&v66,
               (__int64)&v53,
               &v65,
               &v64,
               (__int64)&v52,
               (__int64)&v51,
               (__int64)&v50,
               (__int64)&v49,
               (__int64)&v48,
               (__int64)&v47,
               (__int64)&v46,
               (__int64)&v63,
               (__int64)&v62,
               (__int64)&v61,
               (__int64)&v60,
               (__int64)&v59,
               (__int64)&v58,
               &v57,
               (__int64)&v56,
               (__int64)&v45,
               (__int64)&v44,
               (__int64)&v55,
               &v54,
               (__int64)&v43,
               (__int64)&v42,
               (__int64)&v41,
               (__int64)&v40,
               (__int64)&v39,
               (__int64)&v38,
               (__int64)&v37);
    }
  }
  return result;
}
