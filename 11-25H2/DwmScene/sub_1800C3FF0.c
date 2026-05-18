/*
 * XREFs of sub_1800C3FF0 @ 0x1800C3FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18000B2D4 @ 0x18000B2D4 (sub_18000B2D4.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 *     sub_1800BEC70 @ 0x1800BEC70 (sub_1800BEC70.c)
 *     sub_1800BF6A8 @ 0x1800BF6A8 (sub_1800BF6A8.c)
 *     sub_1800C2FB4 @ 0x1800C2FB4 (sub_1800C2FB4.c)
 *     sub_1800C300C @ 0x1800C300C (sub_1800C300C.c)
 *     sub_1800C30B0 @ 0x1800C30B0 (sub_1800C30B0.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C3FF0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 *v9; // rax
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rdi
  char v19; // cl
  char v20; // bl
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 *v23; // rax
  char v24; // di
  char v25; // di
  __int64 v26; // rbx
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int128 v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  char v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  _QWORD v43[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v44[8]; // [rsp+100h] [rbp+0h] BYREF

  v31 = a3;
  v4 = a1;
  v29 = a1;
  v5 = 0;
  LODWORD(v28) = 0;
  memset(v43, 0, sizeof(v43));
  sub_18000CBBC(
    (__int64)v44,
    8LL,
    8LL,
    (__int64 (__fastcall *)(__int64))__crt_deferred_errno_cache::__crt_deferred_errno_cache);
  v6 = v44;
  v7 = 0LL;
  v8 = 8LL;
  do
  {
    unknown_libname_81(&v36, a2);
    if ( v36 )
    {
      v9 = sub_1800C300C(v36, &v39, *(_DWORD *)(v4 + 88));
      v10 = v5 | 1;
      v11 = *v9;
    }
    else
    {
      v42 = 0LL;
      v9 = (__int64 *)&v41;
      v10 = v5 | 2;
      v11 = 0LL;
    }
    v34 = v11;
    v12 = v9[1];
    v35 = v12;
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( v42 )
        sub_18001050C(v42);
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v40 )
        sub_18001050C(v40);
    }
    v13 = _RTDynamicCast(
            v11,
            0LL,
            &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
            0);
    if ( v13 )
      sub_180014FA0(&v38, (__int64)&v34, v13);
    else
      v38 = 0LL;
    if ( (_QWORD)v38 )
    {
      v14 = sub_1800BF6A8(v38, &v32);
      v15 = 4;
    }
    else
    {
      v28 = 0LL;
      v14 = &v28;
      v15 = 8;
    }
    v5 = v15 | v10;
    sub_1800BEC70(v6, v14);
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      sub_18000E854(&v28);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      sub_18000E854((__int64 *)&v32);
    }
    v43[v7] = v44[v7];
    if ( *((_QWORD *)&v38 + 1) )
      sub_18001050C(*((__int64 *)&v38 + 1));
    if ( v12 )
      sub_18001050C(v12);
    if ( v37 )
      sub_18001050C(v37);
    a2 += 2;
    ++v6;
    ++v7;
    --v8;
    v4 = v29;
  }
  while ( v8 );
  if ( *v31 )
  {
    v16 = v29;
    v17 = sub_1800C2FB4(*v31, &v39, *(_DWORD *)(v29 + 88));
    v18 = *v17;
    v19 = 16;
  }
  else
  {
    v37 = 0LL;
    v17 = &v36;
    v18 = 0LL;
    v19 = 32;
    v16 = v29;
  }
  v20 = v19 | v5;
  v34 = v18;
  v21 = v17[1];
  v35 = v21;
  *v17 = 0LL;
  v17[1] = 0LL;
  if ( (v20 & 0x20) != 0 )
  {
    v20 &= ~0x20u;
    if ( v37 )
      sub_18001050C(v37);
  }
  if ( (v20 & 0x10) != 0 )
  {
    v20 &= ~0x10u;
    if ( v40 )
      sub_18001050C(v40);
  }
  v22 = _RTDynamicCast(
          v18,
          0LL,
          &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
          0);
  if ( v22 )
    sub_180014FA0(&v32, (__int64)&v34, v22);
  else
    v32 = 0LL;
  if ( (_QWORD)v32 )
  {
    v23 = sub_1800C30B0(v32, &v31);
    v24 = 64;
  }
  else
  {
    v33 = 0LL;
    v23 = &v33;
    v24 = 0x80;
  }
  v25 = v20 | v24;
  v26 = 0LL;
  v30 = 0LL;
  if ( &v30 != v23 )
  {
    v26 = *v23;
    v30 = *v23;
    *v23 = 0LL;
  }
  if ( v25 < 0 )
  {
    v25 &= ~0x80u;
    sub_18000E854(&v33);
  }
  if ( (v25 & 0x40) != 0 )
    sub_18000E854((__int64 *)&v31);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(v16 + 144) + 264LL))(
    *(_QWORD *)(v16 + 144),
    8LL,
    v43,
    v26);
  sub_18000E854(&v30);
  if ( *((_QWORD *)&v32 + 1) )
    sub_18001050C(*((__int64 *)&v32 + 1));
  if ( v21 )
    sub_18001050C(v21);
  return sub_18000B2D4((__int64)v44, 8LL, 8LL, (void (__fastcall *)(__int64))sub_18000D530);
}
