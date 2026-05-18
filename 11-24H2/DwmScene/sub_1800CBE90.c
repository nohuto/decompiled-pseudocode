/*
 * XREFs of sub_1800CBE90 @ 0x1800CBE90
 * Callers:
 *     sub_1800CBD20 @ 0x1800CBD20 (sub_1800CBD20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180010790 @ 0x180010790 (sub_180010790.c)
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     sub_180011524 @ 0x180011524 (sub_180011524.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 *     sub_180023570 @ 0x180023570 (sub_180023570.c)
 *     sub_180026870 @ 0x180026870 (sub_180026870.c)
 *     sub_18002AD24 @ 0x18002AD24 (sub_18002AD24.c)
 *     sub_180068748 @ 0x180068748 (sub_180068748.c)
 *     sub_1800691A8 @ 0x1800691A8 (sub_1800691A8.c)
 *     sub_1800B9B64 @ 0x1800B9B64 (sub_1800B9B64.c)
 *     sub_1800BD734 @ 0x1800BD734 (sub_1800BD734.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800BFDFC @ 0x1800BFDFC (sub_1800BFDFC.c)
 *     sub_1800C8054 @ 0x1800C8054 (sub_1800C8054.c)
 *     sub_1800C82B4 @ 0x1800C82B4 (sub_1800C82B4.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800CAEB4 @ 0x1800CAEB4 (sub_1800CAEB4.c)
 *     sub_1800CAF04 @ 0x1800CAF04 (sub_1800CAF04.c)
 *     sub_1800CBBA8 @ 0x1800CBBA8 (sub_1800CBBA8.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_1800CBE90(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  double v6; // xmm0_8
  char v7; // r12
  int v8; // eax
  ULONG_PTR v9; // rbx
  char v10; // si
  __int64 *v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  __int64 (__fastcall *v14)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v15; // rbx
  int v16; // eax
  ULONG_PTR v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v19; // rbx
  int v20; // eax
  ULONG_PTR v21; // rbx
  int v22; // eax
  ULONG_PTR v23; // rbx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, bool, __int64 *); // rsi
  int v26; // eax
  ULONG_PTR v27; // rbx
  __int64 v28; // r14
  __int64 (__fastcall *v29)(__int64, __int64, __int128 *, __int64); // rsi
  __int64 v30; // rbx
  int v31; // eax
  ULONG_PTR v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int128 *, _QWORD, __int64); // rsi
  __int64 v34; // rbx
  int v35; // eax
  ULONG_PTR v36; // rbx
  __int64 v37; // rbx
  unsigned int v38; // ecx
  __int64 (__fastcall *v39)(__int64, __int128 *, _QWORD, __int64); // rsi
  int v40; // eax
  ULONG_PTR v41; // rbx
  __int64 (__fastcall *v42)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v43; // rbx
  int v44; // eax
  ULONG_PTR v45; // rbx
  __int64 (__fastcall *v46)(__int64, _QWORD, _DWORD *, __int64); // rsi
  __int64 v47; // rbx
  int v48; // eax
  ULONG_PTR v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r14
  _QWORD *v52; // rbx
  int v53; // edi
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // r12
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  int v61; // esi
  __int64 v62; // rdi
  __int64 *v63; // r12
  _QWORD *v64; // rcx
  _QWORD *v65; // rax
  __int64 *v66; // r9
  _QWORD *v67; // rax
  __int64 (__fastcall ***v68)(_QWORD, void *, __int64 *); // rcx
  __int64 result; // rax
  char v70; // [rsp+48h] [rbp-C0h]
  char v71; // [rsp+49h] [rbp-BFh]
  char v72; // [rsp+4Ah] [rbp-BEh]
  __int64 v73; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v74[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v75; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v76)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v77; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v78; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v79[3]; // [rsp+88h] [rbp-80h] BYREF
  int v80; // [rsp+94h] [rbp-74h]
  int v81; // [rsp+98h] [rbp-70h]
  int v82; // [rsp+9Ch] [rbp-6Ch]
  __int64 v83; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v87; // [rsp+C0h] [rbp-48h]
  __int64 v88; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-30h]
  __int64 v91; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-20h]
  _QWORD *v93; // [rsp+F0h] [rbp-18h]
  __int64 v94; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v95; // [rsp+100h] [rbp-8h]
  __int64 v96; // [rsp+108h] [rbp+0h] BYREF
  __int64 v97; // [rsp+110h] [rbp+8h]
  __int64 v98; // [rsp+118h] [rbp+10h] BYREF
  __int64 v99; // [rsp+120h] [rbp+18h]
  __int128 v100; // [rsp+128h] [rbp+20h]
  __int128 v101; // [rsp+138h] [rbp+30h]
  __int64 v102; // [rsp+148h] [rbp+40h] BYREF
  __int64 v103; // [rsp+150h] [rbp+48h]
  _BYTE v104[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v105; // [rsp+160h] [rbp+58h]
  __int64 v106; // [rsp+168h] [rbp+60h] BYREF
  __int64 v107; // [rsp+178h] [rbp+70h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+188h] [rbp+80h] BYREF
  __int128 v109; // [rsp+228h] [rbp+120h] BYREF
  __int128 v110; // [rsp+238h] [rbp+130h]
  __int64 v111; // [rsp+248h] [rbp+140h]
  int v112; // [rsp+250h] [rbp+148h]
  __int128 v113; // [rsp+258h] [rbp+150h] BYREF
  __int128 v114; // [rsp+268h] [rbp+160h]
  __int64 v115; // [rsp+278h] [rbp+170h]
  int v116; // [rsp+280h] [rbp+178h]
  __int128 v117; // [rsp+288h] [rbp+180h] BYREF
  _BYTE v118[20]; // [rsp+298h] [rbp+190h]
  __int64 v119; // [rsp+2ACh] [rbp+1A4h]
  void *retaddr; // [rsp+310h] [rbp+208h]

  v77 = a2;
  sub_1800CBBA8((__int64)a1, &v102);
  sub_1800B9B64(v102, &v88);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a2 + 32LL))(
    *a2,
    &v76);
  v6 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  v72 = v7;
  *(_BYTE *)(*a3 + 1) = v7;
  v75 = 0LL;
  v8 = sub_1800CAEB4(&v76, (__int64 *)&v75);
  v9 = v8;
  if ( v8 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180011524(v75, "CameraBackBuffer");
  v71 = 0;
  v10 = 0;
  v70 = 0;
  v11 = (__int64 *)(*a3 + 8);
  v12 = v88;
  if ( (__int64 *)*v11 != v75 )
  {
    sub_1800BFDFC(v11, (__int64 *)&v75);
    v113 = 0LL;
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0;
    (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(*a3 + 8) + 80LL))(*(_QWORD *)(*a3 + 8), &v113);
    v13 = v114;
    v79[1] = (v7 != 0) + 4;
    v79[2] = 0;
    v81 = 1;
    v80 = 0;
    v79[0] = v114;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 72LL);
    v15 = *a3;
    sub_18000E954((__int64 *)(*a3 + 48));
    v16 = v14(v12, *(_QWORD *)(*a3 + 8), v79, v15 + 48);
    v17 = v16;
    if ( v16 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v17;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    if ( v7 )
    {
      v80 = 1;
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 72LL);
      v19 = *a3;
      sub_18000E954((__int64 *)(*a3 + 96));
      v20 = v18(v12, *(_QWORD *)(*a3 + 8), v79, v19 + 96);
      v21 = v20;
      if ( v20 < 0 )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v21;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
    }
    else
    {
      sub_1800C82B4((__int64 *)(*a3 + 96), (__int64 *)(*a3 + 48));
    }
    *(_QWORD *)&v100 = v13 | 0x100000000LL;
    DWORD2(v100) = LODWORD(v6);
    HIDWORD(v100) = LODWORD(v6);
    v101 = 3uLL;
    v109 = v100;
    v110 = 3uLL;
    v73 = 0LL;
    v22 = sub_1800CAF04(&v76, &v73);
    v23 = v22;
    if ( v22 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v23;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800BD734(v73, "DxgiBackBuffer");
    v74[0] = 0LL;
    v24 = v73;
    v25 = *(__int64 (__fastcall **)(__int64, bool, __int64 *))(*(_QWORD *)v73 + 96LL);
    sub_18000E954(v74);
    v26 = v25(v24, v7 != 0, v74);
    v27 = v26;
    if ( v26 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v27;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_1800BD734(v74[0], "DxgiSurface");
    v28 = a1[60];
    v29 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v28 + 496LL);
    v30 = *a3;
    sub_18000E954((__int64 *)(*a3 + 32));
    v31 = v29(v28, v74[0], &v109, v30 + 32);
    v32 = v31;
    if ( v31 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v32;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[60] + 592LL))(a1[60], *(_QWORD *)(*a3 + 32));
    *(_QWORD *)(*a3 + 40) = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD **))(*(_QWORD *)*v77 + 24LL))(
                                         *v77,
                                         &v78);
    v117 = v113;
    *(_OWORD *)v118 = v114;
    *(_QWORD *)&v118[12] = 3LL;
    v119 = 0x20000LL;
    HIDWORD(v117) = 1;
    sub_18000E954((__int64 *)(*a3 + 16));
    v33 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v12 + 40LL);
    v34 = *a3;
    sub_18000E954((__int64 *)(*a3 + 16));
    v35 = v33(v12, &v117, 0LL, v34 + 16);
    v36 = v35;
    if ( v35 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v36;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180011524(*(__int64 **)(*a3 + 16), "BackBufferStaging");
    sub_18000E954((__int64 *)(*a3 + 56));
    sub_18000E954((__int64 *)(*a3 + 104));
    v71 = 1;
    sub_18000E954(v74);
    sub_18000E954(&v73);
    v10 = 0;
  }
  v37 = *a3;
  if ( !*(_QWORD *)(*a3 + 56) || !*(_QWORD *)(v37 + 104) )
  {
    v38 = *(_DWORD *)(v37 + 44);
    LODWORD(v109) = *(_DWORD *)(v37 + 40);
    *(_QWORD *)((char *)&v109 + 4) = v38 | 0x100000000LL;
    HIDWORD(v109) = (v7 != 0) + 1;
    LODWORD(v110) = 55;
    *(_QWORD *)((char *)&v110 + 4) = 1LL;
    HIDWORD(v110) = 0;
    v111 = 64LL;
    v112 = 0;
    v39 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64))(*(_QWORD *)v12 + 40LL);
    sub_18000E954((__int64 *)(v37 + 24));
    v40 = v39(v12, &v109, 0LL, v37 + 24);
    v41 = v40;
    if ( v40 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v41;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180011524(*(__int64 **)(*a3 + 24), "BackBuffer_DepthStencilTexture");
    sub_1800C8054(v79, (v7 != 0) + 3);
    v82 = 1;
    v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 80LL);
    v43 = *a3;
    sub_18000E954((__int64 *)(*a3 + 56));
    v44 = v42(v12, *(_QWORD *)(*a3 + 24), v79, v43 + 56);
    v45 = v44;
    if ( v44 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v45;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    sub_180011524(*(__int64 **)(*a3 + 56), "BackBuffer_DepthStencilView_LeftEye");
    if ( v7 )
    {
      v81 = 1;
      v46 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v12 + 80LL);
      v47 = *a3;
      sub_18000E954((__int64 *)(*a3 + 104));
      v48 = v46(v12, *(_QWORD *)(*a3 + 24), v79, v47 + 104);
      v49 = v48;
      if ( v48 < 0 )
      {
        memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
        pExceptionRecord.ExceptionCode = -532265403;
        pExceptionRecord.ExceptionAddress = retaddr;
        pExceptionRecord.NumberParameters = 1;
        pExceptionRecord.ExceptionInformation[0] = v49;
        RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      }
      sub_180011524(*(__int64 **)(*a3 + 104), "BackBuffer_DepthStencilView_RightEye");
    }
    else
    {
      sub_1800C82B4((__int64 *)(*a3 + 104), (__int64 *)(*a3 + 56));
    }
    v10 = 1;
    v70 = 1;
  }
  v50 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v104);
  sub_180011C04(v50, &v91);
  if ( v105 )
    sub_180010644(v105);
  v51 = v91;
  v87 = *(__int64 **)(v91 + 3648);
  v52 = (_QWORD *)((v7 != 0) + 1LL);
  v78 = v52;
  if ( v71 )
  {
    v53 = 0;
    v54 = 0LL;
    v55 = (v7 != 0) + 1LL;
    v56 = v91;
    v57 = (__int64)v87;
    do
    {
      sub_180010790(v56, &v96);
      v93 = (_QWORD *)_RTDynamicCast(
                        v96,
                        0LL,
                        &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
                        1);
      v58 = *a3;
      LODWORD(v73) = *(_DWORD *)(*a3 + 44);
      LODWORD(v74[0]) = *(_DWORD *)(v58 + 40);
      v83 = *(_QWORD *)(v58 + 16);
      sub_1800115D0(&v83);
      v84 = *(_QWORD *)(*a3 + 8);
      sub_1800115D0(&v84);
      v59 = *(_QWORD *)(v54 + *a3 + 48);
      v86 = v59;
      if ( v59 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
      sub_1800BEE5C(v93, &v86, &v84, &v83, v74[0], v73);
      sub_1800108FC(v57, &v94);
      sub_180026870(v94, &v96);
      sub_18001254C((__int64 *)(*a3 + 64 + 48LL * v53), &v94);
      if ( v95 )
        sub_18001060C(v95);
      if ( v97 )
        sub_18001060C(v97);
      ++v53;
      v54 += 48LL;
      --v55;
    }
    while ( v55 );
    v52 = v78;
    if ( !v72 )
      sub_18001254C((__int64 *)(*a3 + 64), (_QWORD *)(*a3 + 112));
    (*(void (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
    LOBYTE(v60) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 360LL))(a1, v60);
    v51 = v91;
    v10 = v70;
  }
  if ( v10 )
  {
    v61 = 0;
    v62 = 0LL;
    v63 = v87;
    do
    {
      sub_180068748(v51, &v98);
      v78 = (_QWORD *)_RTDynamicCast(
                        v98,
                        0LL,
                        &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
                        &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
                        1);
      v85 = *(_QWORD *)(*a3 + 24);
      sub_1800115D0(&v85);
      v64 = *(_QWORD **)(v62 + *a3 + 56);
      v77 = v64;
      if ( v64 )
        (*(void (__fastcall **)(_QWORD *))(*v64 + 8LL))(v64);
      sub_1800C849C(v78, (__int64 *)&v77, &v85);
      sub_180023570(v63, &v89);
      v65 = unknown_libname_81(&v106, &v98);
      sub_1800691A8(v66, v65, 5);
      v67 = unknown_libname_81(&v107, &v89);
      sub_18002AD24((__int64)a1, v67);
      sub_18001254C((__int64 *)(*a3 + 80 + 48LL * v61), &v89);
      if ( v90 )
        sub_18001060C(v90);
      if ( v99 )
        sub_18001060C(v99);
      ++v61;
      v62 += 48LL;
      v52 = (_QWORD *)((char *)v52 - 1);
    }
    while ( v52 );
    if ( !v72 )
      sub_18001254C((__int64 *)(*a3 + 80), (_QWORD *)(*a3 + 128));
  }
  if ( v92 )
    sub_18001060C(v92);
  sub_18000E954((__int64 *)&v75);
  v68 = v76;
  if ( v76 )
  {
    v76 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v68)[2])(v68);
  }
  result = sub_18000E954(&v88);
  if ( v103 )
    return sub_18001060C(v103);
  return result;
}
