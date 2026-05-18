/*
 * XREFs of sub_1800151E8 @ 0x1800151E8
 * Callers:
 *     sub_180015570 @ 0x180015570 (sub_180015570.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001565C @ 0x18001565C (sub_18001565C.c)
 *     sub_180015780 @ 0x180015780 (sub_180015780.c)
 *     sub_180017008 @ 0x180017008 (sub_180017008.c)
 *     unknown_libname_83 @ 0x180017548 (unknown_libname_83.c)
 *     sub_180017618 @ 0x180017618 (sub_180017618.c)
 *     sub_18001773C @ 0x18001773C (sub_18001773C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001EE20 @ 0x18001EE20 (sub_18001EE20.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 *     sub_180032B34 @ 0x180032B34 (sub_180032B34.c)
 *     sub_1800348C0 @ 0x1800348C0 (sub_1800348C0.c)
 *     sub_180035094 @ 0x180035094 (sub_180035094.c)
 *     sub_18005E6C0 @ 0x18005E6C0 (sub_18005E6C0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_1800151E8(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  char v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rax
  char v20; // si
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // r15
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *result; // rax
  __int64 v32; // rdi
  void (__fastcall *v33)(__int64, _QWORD, __int64, const char *); // rbx
  __int64 v34; // rax
  __int128 v35; // [rsp+38h] [rbp-1D0h] BYREF
  char v36[8]; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-1B8h]
  _QWORD *v38; // [rsp+58h] [rbp-1B0h]
  _QWORD *v39; // [rsp+60h] [rbp-1A8h]
  __int128 v40; // [rsp+68h] [rbp-1A0h]
  __int64 *v41; // [rsp+78h] [rbp-190h]
  _QWORD *v42; // [rsp+80h] [rbp-188h]
  _QWORD *v43; // [rsp+88h] [rbp-180h]
  Spectre::Utils::SpectreException *v44; // [rsp+90h] [rbp-178h] BYREF
  __int64 v45; // [rsp+98h] [rbp-170h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-150h] BYREF
  char v48[8]; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-138h]
  char v50[96]; // [rsp+D8h] [rbp-130h] BYREF
  char v51[104]; // [rsp+138h] [rbp-D0h] BYREF
  __int128 v52; // [rsp+1A0h] [rbp-68h] BYREF
  __int128 v53; // [rsp+1B0h] [rbp-58h]

  v41 = a1;
  v42 = a3;
  v43 = a4;
  v38 = a5;
  v39 = a5;
  v9 = 1;
  if ( !*a3 )
  {
    v10 = (__int64 *)sub_18001EE20(v36);
    v11 = *v10;
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    *a3 = v11;
    v13 = a3[1];
    a3[1] = v12;
    if ( v13 )
      sub_18001050C(v13);
    if ( v37 )
      sub_18001050C(v37);
  }
  v14 = sub_18001B098(1536LL);
  try
  {
    if ( v14 )
    {
      unknown_libname_81(&v45, a5);
      unknown_libname_81(&v46, a4);
      v15 = (unsigned int)unknown_libname_81(&v47, a3);
      v19 = sub_18005E6C0(v18, *(_DWORD *)(a2 + 20), v15, v17, v16);
    }
    else
    {
      v19 = 0LL;
    }
    *a1 = v19;
    v20 = 1;
    v21 = sub_18003279C(v19, &v52);
    unknown_libname_83(&unk_1801C3F18, v21);
    sub_180011A5C((__int64)&v52);
    v22 = *a1 + 528;
    *(_OWORD *)v22 = *(_OWORD *)a2;
    *(_OWORD *)(v22 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v22 + 32) = *(_QWORD *)(a2 + 32);
    sub_180017618(v22 + 40, a2 + 40);
    *(_OWORD *)(v22 + 136) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v22 + 152) = *(_OWORD *)(a2 + 152);
    v23 = (_QWORD *)*a1;
    v40 = *(_OWORD *)(a2 + 136);
    v35 = *(_OWORD *)(a2 + 152);
    v24 = sub_180017008(v50, a2 + 40);
    v52 = v40;
    v53 = v35;
    sub_180015780(v23, v48, v24, &v52);
    v25 = (_QWORD *)*a1;
    sub_1800284DC(*a1 + 8, &v35);
    v25[114] = *(_QWORD *)a2;
    v25[115] = *(_QWORD *)(a2 + 8);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v25 + 88LL))(v25, a2);
    sub_180010F44((__int64)&v35);
    if ( (unsigned __int8)sub_18001773C(
                            &Spectre::Engine::D3D11::RenderDeviceD3D11 `RTTI Type Descriptor',
                            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor') )
    {
      v26 = *a1;
      v35 = *(_OWORD *)(a2 + 136);
      v40 = *(_OWORD *)(a2 + 152);
      v27 = sub_180017008(v51, a2 + 40);
      v52 = v35;
      v53 = v40;
      sub_18001565C(v26, &v35, v27, &v52);
      if ( *((_QWORD *)&v35 + 1) )
        sub_18001050C(*((__int64 *)&v35 + 1));
    }
    sub_1800348C0(*a1);
    if ( !*(_BYTE *)(a2 + 28) || (v20 = 3, !*(_QWORD *)sub_180032B34(*a1, &v35)) )
      v9 = 0;
    if ( (v20 & 2) != 0 && *((_QWORD *)&v35 + 1) )
      sub_18001050C(*((__int64 *)&v35 + 1));
    if ( v9 )
      sub_180035094(*a1);
    if ( v49 )
      sub_18001050C(v49);
    v28 = a3[1];
    if ( v28 )
      sub_18001050C(v28);
    v29 = a4[1];
    if ( v29 )
      sub_18001050C(v29);
    v30 = v38[1];
    if ( v30 )
      sub_18001050C(v30);
    result = a1;
  }
  catch ( Spectre::Utils::SpectreException *v44 )
  {
    if ( *v39 )
    {
      v32 = *v39;
      v33 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)*v39 + 24LL);
      v34 = (*(__int64 (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v44 + 8LL))(v44);
      v33(v32, 0LL, v34, "2.7.0.2");
    }
    throw;
  }
  return result;
}
