/*
 * XREFs of sub_1800C4550 @ 0x1800C4550
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18004099C @ 0x18004099C (sub_18004099C.c)
 *     sub_180081298 @ 0x180081298 (sub_180081298.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800C4550(__int64 a1, __int64 *a2)
{
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int128 *v6; // rcx
  __int16 v7; // di
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int16 v12; // bx
  __int16 v13; // bx
  __int64 v14; // r13
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int16 v18; // di
  __int16 v19; // di
  __int64 v20; // r12
  _QWORD *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int16 v24; // bx
  __int16 v25; // bx
  __int64 v26; // r14
  _QWORD *v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int16 v30; // di
  __int16 v31; // di
  __int64 v32; // rbx
  _QWORD *v33; // rcx
  __int64 *v34; // rcx
  __int16 v35; // si
  __int16 v36; // si
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r15
  __int64 v44; // r13
  __int64 v45; // r12
  char v46; // al
  __int64 v47; // r14
  __int64 *v48; // rdi
  bool v49; // zf
  __int64 v50; // rax
  void (__fastcall *v51)(__int64 *, __int64, _QWORD, _QWORD); // r14
  __int64 v52; // rbx
  __int64 *v53; // rdi
  __int64 v54; // rax
  void (__fastcall *v55)(__int64 *, __int64, _QWORD, _QWORD); // r14
  __int64 v56; // rbx
  __int64 *v57; // rdi
  __int64 v58; // rax
  void (__fastcall *v59)(__int64 *, __int64, _QWORD, _QWORD); // r14
  __int64 v60; // rbx
  __int64 *v61; // rdi
  __int64 v62; // rax
  void (__fastcall *v63)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v64; // rbx
  __int64 *v65; // rdi
  __int64 v66; // rax
  void (__fastcall *v67)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v68; // rbx
  __int64 result; // rax
  __int64 v70; // [rsp+30h] [rbp-D0h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+38h] [rbp-C8h]
  __int64 v73; // [rsp+48h] [rbp-B8h]
  __int64 v74; // [rsp+58h] [rbp-A8h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  __int64 v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  __int128 v79; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v80; // [rsp+C0h] [rbp-40h]
  __int128 v81; // [rsp+D0h] [rbp-30h]
  __int128 v82; // [rsp+E0h] [rbp-20h]
  __int128 v83; // [rsp+F0h] [rbp-10h]
  char v84; // [rsp+100h] [rbp+0h] BYREF
  __int64 v85; // [rsp+108h] [rbp+8h]
  char v86; // [rsp+110h] [rbp+10h] BYREF
  __int64 v87; // [rsp+118h] [rbp+18h]
  char v88; // [rsp+120h] [rbp+20h] BYREF
  __int64 v89; // [rsp+128h] [rbp+28h]
  char v90; // [rsp+130h] [rbp+30h] BYREF
  __int64 v91; // [rsp+138h] [rbp+38h]
  char v92; // [rsp+140h] [rbp+40h] BYREF
  __int64 v93; // [rsp+148h] [rbp+48h]
  char v94; // [rsp+150h] [rbp+50h] BYREF
  __int64 v95; // [rsp+158h] [rbp+58h]
  _QWORD *v96; // [rsp+160h] [rbp+60h]
  __int64 v97; // [rsp+168h] [rbp+68h]
  __int64 v98; // [rsp+170h] [rbp+70h] BYREF
  __int64 v99; // [rsp+178h] [rbp+78h]
  __int64 v100; // [rsp+180h] [rbp+80h] BYREF
  __int64 v101; // [rsp+188h] [rbp+88h]
  __int64 v102; // [rsp+190h] [rbp+90h] BYREF
  __int64 v103; // [rsp+198h] [rbp+98h]
  __int64 v104; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v105; // [rsp+1A8h] [rbp+A8h]
  __int64 v106; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v107; // [rsp+1B8h] [rbp+B8h]
  __int64 v108; // [rsp+210h] [rbp+110h] BYREF
  __int64 v109; // [rsp+218h] [rbp+118h] BYREF
  int v110; // [rsp+220h] [rbp+120h] BYREF
  __int64 v111; // [rsp+228h] [rbp+128h]

  v108 = a1;
  LODWORD(v109) = 0;
  v3 = *(_DWORD *)(a1 + 88);
  LODWORD(v109) = v3;
  v4 = *a2;
  if ( *a2 )
  {
    v110 = v3;
    v5 = sub_18004099C(v4 + 480, (__int64)&v110);
    if ( v5 == *(_QWORD *)(v4 + 480) )
      v79 = 0LL;
    else
      unknown_libname_81(&v79, (_QWORD *)(v5 + 40));
    v6 = &v79;
    v7 = 1;
    v8 = (_QWORD *)v79;
  }
  else
  {
    v85 = 0LL;
    v6 = (__int128 *)&v84;
    v7 = 2;
    v8 = 0LL;
  }
  v96 = v8;
  v97 = *((_QWORD *)v6 + 1);
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v85 )
      sub_18001050C(v85);
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( *((_QWORD *)&v79 + 1) )
      sub_18001050C(*((__int64 *)&v79 + 1));
  }
  v83 = 0LL;
  v82 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( *a2 )
  {
    v9 = (_QWORD *)v8[12];
    if ( v9 )
    {
      v10 = sub_180081298(v9, &v98, v3);
      v11 = *v10;
      v12 = 4;
    }
    else
    {
      v87 = 0LL;
      v10 = (__int64 *)&v86;
      v11 = 0LL;
      v12 = 8;
    }
    v70 = v11;
    v13 = v7 | v12;
    v14 = v10[1];
    v111 = v14;
    v73 = v14;
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v13 & 8) != 0 )
    {
      v13 &= ~8u;
      if ( v87 )
        sub_18001050C(v87);
    }
    if ( (v13 & 4) != 0 )
    {
      v13 &= ~4u;
      if ( v99 )
        sub_18001050C(v99);
    }
    v15 = (_QWORD *)v8[14];
    if ( v15 )
    {
      v16 = sub_180081298(v15, &v100, v3);
      v17 = *v16;
      v18 = 16;
    }
    else
    {
      v89 = 0LL;
      v16 = (__int64 *)&v88;
      v17 = 0LL;
      v18 = 32;
    }
    v75 = v17;
    v19 = v13 | v18;
    v20 = v16[1];
    v72 = v20;
    v74 = v20;
    *v16 = 0LL;
    v16[1] = 0LL;
    if ( (v19 & 0x20) != 0 )
    {
      v19 &= ~0x20u;
      if ( v89 )
        sub_18001050C(v89);
    }
    if ( (v19 & 0x10) != 0 )
    {
      v19 &= ~0x10u;
      if ( v101 )
        sub_18001050C(v101);
    }
    v21 = (_QWORD *)v8[16];
    if ( v21 )
    {
      v22 = sub_180081298(v21, &v102, v109);
      v23 = *v22;
      v24 = 64;
    }
    else
    {
      v91 = 0LL;
      v22 = (__int64 *)&v90;
      v23 = 0LL;
      v24 = 128;
    }
    v76 = v23;
    v25 = v19 | v24;
    v26 = v22[1];
    *v22 = 0LL;
    v22[1] = 0LL;
    if ( (v25 & 0x80u) != 0 )
    {
      v25 &= ~0x80u;
      if ( v91 )
        sub_18001050C(v91);
    }
    if ( (v25 & 0x40) != 0 )
    {
      v25 &= ~0x40u;
      if ( v103 )
        sub_18001050C(v103);
    }
    v27 = (_QWORD *)v8[18];
    if ( v27 )
    {
      v28 = sub_180081298(v27, &v104, v109);
      v29 = *v28;
      v30 = 256;
    }
    else
    {
      v93 = 0LL;
      v28 = (__int64 *)&v92;
      v29 = 0LL;
      v30 = 512;
    }
    v77 = v29;
    v31 = v25 | v30;
    v32 = v28[1];
    *v28 = 0LL;
    v28[1] = 0LL;
    if ( (v31 & 0x200) != 0 )
    {
      v31 &= ~0x200u;
      if ( v93 )
        sub_18001050C(v93);
    }
    if ( (v31 & 0x100) != 0 )
    {
      v31 &= ~0x100u;
      if ( v105 )
        sub_18001050C(v105);
    }
    v33 = (_QWORD *)v8[20];
    if ( v33 )
    {
      v34 = sub_180081298(v33, &v106, v109);
      v109 = *v34;
      v35 = 1024;
    }
    else
    {
      v95 = 0LL;
      v34 = (__int64 *)&v94;
      v109 = 0LL;
      v35 = 2048;
    }
    v36 = v31 | v35;
    v78 = v34[1];
    *v34 = 0LL;
    v34[1] = 0LL;
    if ( (v36 & 0x800) != 0 )
    {
      v36 &= ~0x800u;
      if ( v95 )
        sub_18001050C(v95);
    }
    if ( (v36 & 0x400) != 0 && v107 )
      sub_18001050C(v107);
    v37 = _RTDynamicCast(
            v70,
            0LL,
            &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::VertexShaderD3D11 `RTTI Type Descriptor',
            0);
    v71 = v37;
    if ( v37 )
    {
      if ( v14 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
        v111 = v14;
        v72 = v20;
      }
    }
    else
    {
      v14 = 0LL;
      v37 = 0LL;
      v71 = 0LL;
    }
    *(_QWORD *)&v83 = v37;
    *((_QWORD *)&v83 + 1) = v14;
    v38 = _RTDynamicCast(
            v75,
            0LL,
            &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::PixelShaderD3D11 `RTTI Type Descriptor',
            0);
    if ( v38 )
    {
      if ( v20 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
        v111 = v73;
        v72 = v20;
      }
    }
    else
    {
      v20 = 0LL;
      v38 = 0LL;
    }
    *(_QWORD *)&v81 = v38;
    *((_QWORD *)&v81 + 1) = v20;
    v39 = _RTDynamicCast(
            v76,
            0LL,
            &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::HullShaderD3D11 `RTTI Type Descriptor',
            0);
    if ( v39 )
    {
      if ( v26 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
        v111 = v73;
        v40 = v74;
      }
      else
      {
        v40 = v72;
      }
      v41 = v26;
    }
    else
    {
      v41 = 0LL;
      v39 = 0LL;
      v40 = v72;
    }
    *(_QWORD *)&v82 = v39;
    *((_QWORD *)&v82 + 1) = v41;
    v42 = _RTDynamicCast(
            v77,
            0LL,
            &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::DomainShaderD3D11 `RTTI Type Descriptor',
            0);
    if ( v42 )
    {
      if ( v32 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
        v111 = v73;
        v40 = v74;
      }
      v43 = v32;
    }
    else
    {
      v43 = 0LL;
      v42 = 0LL;
    }
    v44 = _RTDynamicCast(
            v109,
            0LL,
            &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::GeometryShaderD3D11 `RTTI Type Descriptor',
            0);
    if ( v44 )
    {
      if ( v78 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
        v111 = v73;
        v40 = v74;
      }
      v45 = v78;
    }
    else
    {
      v45 = 0LL;
      v44 = 0LL;
    }
    *(_QWORD *)&v80 = v44;
    *((_QWORD *)&v80 + 1) = v45;
    if ( v78 )
      sub_18001050C(v78);
    if ( v32 )
      sub_18001050C(v32);
    if ( v26 )
      sub_18001050C(v26);
    if ( v40 )
      sub_18001050C(v40);
    if ( v111 )
      sub_18001050C(v111);
    if ( v71 )
    {
      v46 = 1;
      goto LABEL_97;
    }
  }
  else
  {
    v43 = 0LL;
    v42 = 0LL;
    v45 = *((_QWORD *)&v80 + 1);
    v44 = v80;
  }
  v46 = 0;
LABEL_97:
  v47 = v108;
  v48 = *(__int64 **)(v108 + 144);
  v49 = v46 == 0;
  v50 = *v48;
  if ( v49 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v50 + 88))(*(_QWORD *)(v108 + 144), 0LL, 0LL, 0LL);
  }
  else
  {
    v51 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v50 + 88);
    v52 = *(_QWORD *)(v83 + 104);
    v109 = v52;
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
    v51(v48, v52, 0LL, 0LL);
    sub_18000E854(&v109);
    v47 = v108;
  }
  v53 = *(__int64 **)(v47 + 144);
  v54 = *v53;
  if ( (_QWORD)v82 )
  {
    v55 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v54 + 480);
    v56 = *(_QWORD *)(v82 + 104);
    v109 = v56;
    if ( v56 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 8LL))(v56);
    v55(v53, v56, 0LL, 0LL);
    sub_18000E854(&v109);
    v47 = v108;
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v54 + 480))(v53, 0LL, 0LL, 0LL);
  }
  v57 = *(__int64 **)(v47 + 144);
  v58 = *v57;
  if ( v42 )
  {
    v59 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v58 + 512);
    v60 = *(_QWORD *)(v42 + 104);
    v109 = v60;
    if ( v60 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 8LL))(v60);
    v59(v57, v60, 0LL, 0LL);
    sub_18000E854(&v109);
    v47 = v108;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v58 + 512))(*(_QWORD *)(v47 + 144), 0LL, 0LL, 0LL);
  }
  v61 = *(__int64 **)(v47 + 144);
  v62 = *v61;
  if ( v44 )
  {
    v63 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v62 + 184);
    v64 = *(_QWORD *)(v44 + 104);
    v108 = v64;
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
    v63(v61, v64, 0LL, 0LL);
    sub_18000E854(&v108);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v62 + 184))(*(_QWORD *)(v47 + 144), 0LL, 0LL, 0LL);
  }
  v65 = *(__int64 **)(v47 + 144);
  v66 = *v65;
  if ( (_QWORD)v81 )
  {
    v67 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v66 + 72);
    v68 = *(_QWORD *)(v81 + 104);
    v108 = v68;
    if ( v68 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 8LL))(v68);
    v67(v65, v68, 0LL, 0LL);
    result = sub_18000E854(&v108);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v66 + 72))(v65, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)&v81 + 1) )
    result = sub_18001050C(*((__int64 *)&v81 + 1));
  if ( v45 )
    result = sub_18001050C(v45);
  if ( v43 )
    result = sub_18001050C(v43);
  if ( *((_QWORD *)&v82 + 1) )
    result = sub_18001050C(*((__int64 *)&v82 + 1));
  if ( *((_QWORD *)&v83 + 1) )
    result = sub_18001050C(*((__int64 *)&v83 + 1));
  if ( v97 )
    return sub_18001050C(v97);
  return result;
}
