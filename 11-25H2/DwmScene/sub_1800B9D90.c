/*
 * XREFs of sub_1800B9D90 @ 0x1800B9D90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_180011424 @ 0x180011424 (sub_180011424.c)
 *     sub_1800114D0 @ 0x1800114D0 (sub_1800114D0.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180013128 @ 0x180013128 (sub_180013128.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_180016F24 @ 0x180016F24 (sub_180016F24.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18001C99C @ 0x18001C99C (sub_18001C99C.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001D1B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     unknown_libname_84 @ 0x18001DFA8 (unknown_libname_84.c)
 *     sub_18001EFAC @ 0x18001EFAC (sub_18001EFAC.c)
 *     sub_1800231D4 @ 0x1800231D4 (sub_1800231D4.c)
 *     sub_180025690 @ 0x180025690 (sub_180025690.c)
 *     sub_180027470 @ 0x180027470 (sub_180027470.c)
 *     sub_180027C24 @ 0x180027C24 (sub_180027C24.c)
 *     sub_18002B960 @ 0x18002B960 (sub_18002B960.c)
 *     sub_18002B984 @ 0x18002B984 (sub_18002B984.c)
 *     sub_18002BF54 @ 0x18002BF54 (sub_18002BF54.c)
 *     sub_180030580 @ 0x180030580 (sub_180030580.c)
 *     sub_180040908 @ 0x180040908 (sub_180040908.c)
 *     sub_180054EDC @ 0x180054EDC (sub_180054EDC.c)
 *     sub_180055324 @ 0x180055324 (sub_180055324.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 *     sub_1800B5F4C @ 0x1800B5F4C (sub_1800B5F4C.c)
 *     sub_1800B5FA8 @ 0x1800B5FA8 (sub_1800B5FA8.c)
 *     sub_1800B608C @ 0x1800B608C (sub_1800B608C.c)
 *     sub_1800B60DC @ 0x1800B60DC (sub_1800B60DC.c)
 *     sub_1800B7F4C @ 0x1800B7F4C (sub_1800B7F4C.c)
 *     sub_1800B9884 @ 0x1800B9884 (sub_1800B9884.c)
 *     sub_1800BAC8C @ 0x1800BAC8C (sub_1800BAC8C.c)
 *     sub_1800BC0B0 @ 0x1800BC0B0 (sub_1800BC0B0.c)
 *     sub_1800CCFA0 @ 0x1800CCFA0 (sub_1800CCFA0.c)
 *     sub_1800CCFE0 @ 0x1800CCFE0 (sub_1800CCFE0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=19
char __fastcall sub_1800B9D90(_QWORD *a1)
{
  __int64 (__fastcall ***v2)(_QWORD, void *, __int64 *); // rbx
  _QWORD *v3; // r14
  void (__fastcall ***v4)(_QWORD, void *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, void *, __int64 *); // rbx
  __int64 **v6; // r15
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // rdi
  void (__fastcall *v8)(_QWORD, void *, __int64 *); // rbx
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)); // rdi
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64, const IID *, _QWORD *); // rbx
  _QWORD *v13; // r12
  int v14; // eax
  ULONG_PTR v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rbx
  int v20; // eax
  __int64 *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r14
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  ULONG_PTR v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  IDXGIAdapter **v36; // rax
  _DWORD *v37; // r12
  HRESULT Device; // ebx
  IDXGIAdapter **v39; // rax
  int v40; // r14d
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // r14
  _QWORD *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r9
  _QWORD *v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r9
  _QWORD *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r9
  _QWORD *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r9
  _QWORD *v63; // rbx
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r9
  __int64 *v67; // rax
  char result; // al
  __int64 v69; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v70)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v72)(_QWORD, void *, __int64 *); // [rsp+70h] [rbp-98h] BYREF
  __int64 *v73; // [rsp+78h] [rbp-90h] BYREF
  __int64 v74; // [rsp+80h] [rbp-88h] BYREF
  __int64 v75; // [rsp+88h] [rbp-80h] BYREF
  __int64 v76; // [rsp+90h] [rbp-78h]
  void (__fastcall ***v77)(_QWORD, void *, __int64 *); // [rsp+98h] [rbp-70h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v84[18]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v85; // [rsp+118h] [rbp+10h] BYREF
  __int64 v86; // [rsp+120h] [rbp+18h]
  __int64 v87; // [rsp+128h] [rbp+20h] BYREF
  __int64 v88; // [rsp+138h] [rbp+30h] BYREF
  __int64 v89; // [rsp+140h] [rbp+38h]
  _QWORD v90[4]; // [rsp+148h] [rbp+40h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+168h] [rbp+60h] BYREF
  EXCEPTION_RECORD v92; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v93[4]; // [rsp+2A8h] [rbp+1A0h] BYREF
  void *v94[4]; // [rsp+2C8h] [rbp+1C0h] BYREF
  void *v95[4]; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v96[32]; // [rsp+308h] [rbp+200h] BYREF
  _BYTE v97[32]; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v98[32]; // [rsp+348h] [rbp+240h] BYREF
  __int64 v99[40]; // [rsp+368h] [rbp+260h] BYREF
  __int128 v100; // [rsp+4A8h] [rbp+3A0h] BYREF
  _QWORD v101[90]; // [rsp+4B8h] [rbp+3B0h] BYREF
  __int64 v102[76]; // [rsp+788h] [rbp+680h] BYREF
  D3D_FEATURE_LEVEL pFeatureLevels[4]; // [rsp+9E8h] [rbp+8E0h] BYREF
  __m128i si128; // [rsp+9F8h] [rbp+8F0h]
  int v105; // [rsp+A08h] [rbp+900h]
  void *retaddr; // [rsp+A40h] [rbp+938h]

  v72 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))a1[37];
  v2 = v72;
  sub_1800114D0((__int64 *)&v72);
  v3 = a1 + 484;
  if ( v2 )
    sub_1800B608C(&v72, a1 + 484);
  sub_18000E854((__int64 *)&v72);
  v4 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
  if ( *v3 )
  {
    v71 = 0LL;
    v70 = 0LL;
    v5 = (*v4)[43];
    v6 = (__int64 **)(a1 + 485);
    sub_18000E854(a1 + 485);
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, __int64 *), _QWORD *))v5)(v4, a1 + 485);
    v7 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
    v8 = **(void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
    sub_18000E854(&v71);
    v8(v7, &unk_1800F7520, &v71);
    v9 = v71;
    v10 = *(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v71 + 56LL);
    sub_18000E854((__int64 *)&v70);
    v10(v9, &v70);
    sub_1800B60DC(&v70, a1 + 486);
    v11 = a1[486];
    v12 = *(void (__fastcall **)(__int64, const IID *, _QWORD *))(*(_QWORD *)v11 + 48LL);
    v13 = a1 + 487;
    sub_18000E854(a1 + 487);
    v12(v11, &stru_18018A450, a1 + 487);
    sub_18000E854((__int64 *)&v70);
    sub_18000E854(&v71);
  }
  else
  {
    *(_OWORD *)v99 = 0LL;
    v100 = 0LL;
    v14 = sub_1800CCFE0(
            (unsigned int)v99,
            (unsigned int)v99,
            (unsigned int)&v100,
            (unsigned int)&v100 + 8,
            (unsigned int)(*((_DWORD *)a1 + 72) - 3) <= 1,
            *((_DWORD *)a1 + 81),
            *((_DWORD *)a1 + 82),
            *((_DWORD *)a1 + 79),
            *((_DWORD *)a1 + 80),
            *((_DWORD *)a1 + 83));
    v15 = v14;
    if ( v14 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v15;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v16 = v100;
    if ( (_QWORD)v100 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v100 + 8LL))(v100);
    v78 = 0LL;
    v77 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*v3;
    *v3 = v16;
    sub_18000E854((__int64 *)&v77);
    sub_18000E854(&v78);
    v17 = *((_QWORD *)&v100 + 1);
    if ( *((_QWORD *)&v100 + 1) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v100 + 1) + 8LL))(*((_QWORD *)&v100 + 1));
    v6 = (__int64 **)(a1 + 485);
    v80 = 0LL;
    v79 = a1[485];
    a1[485] = v17;
    sub_18000E854(&v79);
    sub_18000E854(&v80);
    v18 = v99[0];
    if ( v99[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99[0] + 8LL))(v99[0]);
    v82 = 0LL;
    v81 = a1[486];
    a1[486] = v18;
    sub_18000E854(&v81);
    sub_18000E854(&v82);
    v19 = v99[1];
    if ( v99[1] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v99[1] + 8LL))(v99[1]);
    v13 = a1 + 487;
    v74 = 0LL;
    v83 = a1[487];
    a1[487] = v19;
    sub_18000E854(&v83);
    sub_18000E854(&v74);
    sub_18000E854(v99);
    sub_18000E854((__int64 *)&v100);
    sub_18000E854((__int64 *)&v100 + 1);
    sub_18000E854(&v99[1]);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 224LL))(a1, *((unsigned int *)a1 + 94));
    sub_1800CCFA0(v99);
  }
  if ( *v3 )
    *((_DWORD *)a1 + 966) = 0;
  if ( (a1[48] & 0xFFFFFFFD) == 0 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v13 + 64LL))(*v13, a1[49], 0LL);
  v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 296LL))(*v3);
  *((_DWORD *)a1 + 976) = v20;
  *((_DWORD *)a1 + 60) = v20;
  sub_180011424(*v6, "DefaultImmediateContext");
  sub_1800231D4((__int64)a1, &v85);
  v21 = unknown_libname_81(&v87, &v85);
  sub_180016F24(&v75, v21);
  v22 = std::string::string(v90, "Default");
  v23 = v75;
  sub_180027C24(v75, (__int64)v22);
  v24 = *v6;
  v73 = v24;
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
  if ( *(__int64 **)(v23 + 144) != v24 )
  {
    if ( v24 )
      (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
    v69 = *(_QWORD *)(v23 + 144);
    *(_QWORD *)(v23 + 144) = v24;
    sub_18000E854(&v69);
  }
  sub_18000E854((__int64 *)&v73);
  v25 = v76;
  if ( v76 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v76 + 8));
    v25 = v76;
    v23 = v75;
  }
  a1[34] = v23;
  v26 = a1[35];
  a1[35] = v25;
  if ( v26 )
    sub_18001050C(v26);
  v27 = sub_1800B9884((__int64)a1, &v72);
  v28 = (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v27 + 64LL))(*v27, a1 + 489);
  sub_18000E854((__int64 *)&v72);
  if ( (v28 & 0x80000000) != 0LL )
  {
    memset(&v92, 0, sizeof(v92));
    v92.ExceptionCode = -532265403;
    v92.ExceptionAddress = retaddr;
    v92.NumberParameters = 1;
    v92.ExceptionInformation[0] = v28;
    RaiseFailFastException(&v92, 0LL, 0);
  }
  v29 = std::wstring::wstring((__int64)v94, (_WORD *)a1 + 1956);
  unknown_libname_84(a1 + 527, v29);
  sub_180013128((__int64)v94);
  sub_180030580((__int64)(a1 + 10), (__int64)(a1 + 527));
  v30 = a1[523] >> 20;
  v74 = a1[524] >> 20;
  v69 = a1[525] >> 20;
  sub_1800BAC8C(a1);
  v31 = *((_DWORD *)a1 + 976) / 4096;
  sub_1800B7F4C((__int64)v94, *((_DWORD *)a1 + 976) / 256 % 16);
  sub_1800B7F4C((__int64)v95, v31);
  v33 = sub_1800B5F4C((__int64)v93, v32, v95);
  v34 = sub_18002B984((__int64)v98, v33, "_");
  v35 = sub_18002B960((__int64)v97, v34, (__int64)v94);
  unknown_libname_84((_OWORD *)a1 + 9, v35);
  sub_180013128((__int64)v97);
  sub_180013128((__int64)v98);
  sub_180013128((__int64)v93);
  sub_180013128((__int64)v95);
  sub_180013128((__int64)v94);
  *(__m128i *)pFeatureLevels = _mm_load_si128((const __m128i *)&xmmword_18018C4E0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18018C4D0);
  v105 = 37120;
  v36 = (IDXGIAdapter **)sub_1800B9884((__int64)a1, &v71);
  v37 = (_DWORD *)a1 + 977;
  Device = D3D11CreateDevice(
             *v36,
             D3D_DRIVER_TYPE_UNKNOWN,
             0LL,
             0,
             pFeatureLevels,
             9u,
             7u,
             0LL,
             (D3D_FEATURE_LEVEL *)a1 + 977,
             0LL);
  sub_18000E854(&v71);
  if ( Device == -2147024809 )
  {
    v39 = (IDXGIAdapter **)sub_1800B9884((__int64)a1, &v70);
    Device = D3D11CreateDevice(
               *v39,
               D3D_DRIVER_TYPE_UNKNOWN,
               0LL,
               0,
               &pFeatureLevels[3],
               6u,
               7u,
               0LL,
               (D3D_FEATURE_LEVEL *)a1 + 977,
               0LL);
    sub_18000E854((__int64 *)&v70);
  }
  if ( Device >= 0 )
  {
    v40 = *v37 / 4096;
    sub_1800B7F4C((__int64)v95, *v37 / 256 % 16);
    sub_1800B7F4C((__int64)v94, v40);
    v42 = sub_1800B5F4C((__int64)v97, v41, v94);
    v43 = sub_18002B984((__int64)v98, v42, "_");
    v44 = sub_18002B960((__int64)v93, v43, (__int64)v95);
    unknown_libname_84((_OWORD *)a1 + 11, v44);
    sub_180013128((__int64)v93);
    sub_180013128((__int64)v98);
    sub_180013128((__int64)v97);
    sub_180013128((__int64)v94);
    sub_180013128((__int64)v95);
  }
  sub_1800B7F4C((__int64)v94, *((_DWORD *)a1 + 1062));
  unknown_libname_84((_OWORD *)a1 + 13, (__int64)v94);
  sub_180013128((__int64)v94);
  sub_18002BF54((__int64)v96, (__int64)(a1 + 527));
  sub_1800137F8((__int64)v96);
  v45 = v69;
  v46 = v74;
  sub_18001C99C(&stru_1801B84C8, 3);
  if ( (unsigned __int8)sub_18001EFAC((_QWORD *)a1[68]) )
  {
    v47 = (_QWORD *)a1[68];
    v48 = sub_180016F54((__int64)v93, (__int64)v96);
    sub_1800B5FA8(v47, v49, 491, v50, (__int64)"MachineSpecs_AdapterName", v48);
    v51 = (_QWORD *)a1[68];
    v52 = sub_1800BC0B0(v93, v30);
    sub_1800B5FA8(v51, v53, 492, v54, (__int64)"MachineSpecs_AdapterVideoMemory", v52);
    v55 = (_QWORD *)a1[68];
    v56 = sub_1800BC0B0(v93, v46);
    sub_1800B5FA8(v55, v57, 493, v58, (__int64)"MachineSpecs_AdapterSystemMemory", v56);
    v59 = (_QWORD *)a1[68];
    v60 = sub_1800BC0B0(v93, v45);
    sub_1800B5FA8(v59, v61, 494, v62, (__int64)"MachineSpecs_AdapterSharedMemory", v60);
    v63 = (_QWORD *)a1[68];
    v64 = sub_180027470(v93, *((_DWORD *)a1 + 1062));
    sub_1800B5FA8(v63, v65, 495, v66, (__int64)"MachineSpecs_AdapterProfileLevel", (__int64)v64);
  }
  sub_180054EDC((__int64)v101);
  v67 = sub_180040908(a1[456], &v88);
  sub_180011010(v102, v67);
  if ( v89 )
    sub_18001050C(v89);
  memset(v84, 0, sizeof(v84));
  *(_QWORD *)&v84[1] = 2LL;
  v84[3] = 0;
  v84[4] = 0;
  v84[5] = 0;
  LOBYTE(v84[6]) = 0;
  memset(&v84[7], 0, 32);
  v84[15] = 65793;
  LOBYTE(v84[16]) = 1;
  v84[17] = 3;
  sub_18007EEC0(v102[0], (__int64)v84, (__int64)a1);
  (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[34] + 40LL))(a1[34], v101);
  if ( *((int *)a1 + 976) < 40960 )
    *((_DWORD *)a1 + 886) = 4;
  sub_180025690(a1);
  sub_180055324(v101);
  result = sub_180011A5C((__int64)v96);
  if ( v25 )
    result = sub_18001050C(v25);
  if ( v86 )
    return sub_18001050C(v86);
  return result;
}
