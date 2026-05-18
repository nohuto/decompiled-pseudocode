/*
 * XREFs of sub_180064748 @ 0x180064748
 * Callers:
 *     sub_180061FF0 @ 0x180061FF0 (sub_180061FF0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_18002CDF4 @ 0x18002CDF4 (sub_18002CDF4.c)
 *     sub_1800321B0 @ 0x1800321B0 (sub_1800321B0.c)
 *     sub_1800323A0 @ 0x1800323A0 (sub_1800323A0.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18004974C @ 0x18004974C (sub_18004974C.c)
 *     sub_1800587E4 @ 0x1800587E4 (sub_1800587E4.c)
 *     sub_18005899C @ 0x18005899C (sub_18005899C.c)
 *     sub_1800589F0 @ 0x1800589F0 (sub_1800589F0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180064748(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r13
  __int64 v8; // r8
  char v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // r8
  char v23; // al
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 *v28; // rdi
  __int64 v29; // rdi
  char v30; // al
  __int64 v31; // rdi
  char v32; // al
  __int64 v33; // rdi
  char v34; // al
  __int64 v35; // rdi
  char v36; // al
  __int64 v37; // rdi
  char v38; // al
  __int64 v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  char v42; // al
  __int64 v43; // rdi
  char v44; // al
  __int64 v45; // rdi
  char v46; // al
  __int64 v47; // rbx
  char v48; // al
  char v49; // di
  __int64 v50; // r8
  char v51; // si
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 result; // rax
  __int64 v57; // [rsp+30h] [rbp-69h] BYREF
  volatile signed __int32 *v58; // [rsp+38h] [rbp-61h]
  __int64 v59; // [rsp+50h] [rbp-49h] BYREF
  __int64 v60; // [rsp+58h] [rbp-41h]
  __int64 v61; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v62[32]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v63[96]; // [rsp+90h] [rbp-9h] BYREF

  v3 = a1;
  v4 = sub_1800323A0(a1, *(_DWORD *)(*a2 + 112));
  v5 = unknown_libname_81(&v61, a2);
  sub_1800321B0(v3, &v59, v6, v5);
  LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4388, 0LL);
  v7 = v59;
  sub_1800589F0(v59, 0, v3);
  if ( (_BYTE)v3 )
    *(_DWORD *)(v7 + 168) = 0;
  LOBYTE(v8) = 1;
  v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C43A8, v8);
  v10 = sub_180016F54((__int64)&v57, (__int64)&unk_1801C7988);
  v11 = sub_180016F54((__int64)v62, (__int64)&unk_1801C7A08);
  v12 = sub_180016F54((__int64)v63, (__int64)&unk_1801C79E8);
  sub_1800587E4(v7, v9 != 0, v13, v12, v11, v10);
  sub_18005899C(v7, 1, v9);
  LOBYTE(v14) = 1;
  v15 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C43C8, v14);
  sub_1800589F0(v7, 1, v15);
  LOBYTE(v16) = 1;
  v17 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C43E8, v16);
  sub_1800589F0(v7, 2, v17);
  LOBYTE(v18) = 1;
  v19 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4408, v18);
  sub_1800589F0(v7, 3, v19);
  LOBYTE(v20) = 1;
  v21 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4348, v20);
  sub_18004974C(0, v21);
  LOBYTE(v22) = 1;
  v23 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4368, v22);
  sub_18004974C(1, v23);
  v24 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C47A8, 0LL);
  sub_18005899C(v7, 0x4000000, v24);
  sub_180015174(&v57, a2);
  v26 = sub_18002CDF4(v25 + 728, (__int64)&v57);
  if ( v58 )
    sub_180010544(v58);
  v28 = *(__int64 **)(v26 + 48);
  if ( v28 != *(__int64 **)(v26 + 56) )
  {
    v29 = *v28;
    v30 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4488, 0LL);
    sub_18005899C(v29, 0x10000, v30);
    v31 = **(_QWORD **)(v26 + 48);
    v32 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C44A8, 0LL);
    sub_18005899C(v31, 0x20000, v32);
    v33 = **(_QWORD **)(v26 + 48);
    v34 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C44C8, 0LL);
    sub_18005899C(v33, 0x40000, v34);
    v35 = **(_QWORD **)(v26 + 48);
    v36 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C44E8, 0LL);
    sub_18005899C(v35, 0x80000, v36);
    v37 = **(_QWORD **)(v26 + 48);
    v38 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4508, 0LL);
    sub_18005899C(v37, 0x100000, v38);
    v39 = **(_QWORD **)(v26 + 48);
    v40 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4528, 0LL);
    sub_18005899C(v39, 0x200000, v40);
    v41 = **(_QWORD **)(v26 + 48);
    v42 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4548, 0LL);
    sub_18005899C(v41, 0x400000, v42);
    v43 = **(_QWORD **)(v26 + 48);
    v44 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4568, 0LL);
    sub_18005899C(v43, 0x800000, v44);
    v45 = **(_QWORD **)(v26 + 48);
    v46 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C4588, 0LL);
    sub_18005899C(v45, 0x10000000, v46);
    v47 = **(_QWORD **)(v26 + 48);
    v48 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C45A8, 0LL);
    sub_18005899C(v47, 0x20000000, v48);
  }
  LOBYTE(v27) = 1;
  v49 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C48C8, v27);
  LOBYTE(v50) = 1;
  v51 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v4 + 64LL))(v4, &unk_1801C48E8, v50);
  v52 = *a2;
  v53 = sub_180012344((__int64)v63, (__int64)&unk_1801C3FC8);
  *(_BYTE *)(*sub_18003E8CC(v52, &v57, v53) + 80LL) = v49;
  if ( v58 )
    sub_18001050C((__int64)v58);
  v54 = *a2;
  v55 = sub_180012344((__int64)v63, (__int64)&unk_1801C3FA8);
  result = (__int64)sub_18003E8CC(v54, &v57, v55);
  *(_BYTE *)(*(_QWORD *)result + 80LL) = v51;
  if ( v58 )
    result = sub_18001050C((__int64)v58);
  if ( v60 )
    return sub_18001050C(v60);
  return result;
}
