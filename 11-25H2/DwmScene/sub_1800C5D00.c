/*
 * XREFs of sub_1800C5D00 @ 0x1800C5D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18007CC38 @ 0x18007CC38 (sub_18007CC38.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800C5D00(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  char *v7; // rax
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax
  char v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-30h]
  char v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+68h] [rbp-8h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF
  __int64 v22; // [rsp+98h] [rbp+28h] BYREF

  LODWORD(v21) = 0;
  v3 = *a2;
  if ( *a2 )
  {
    LODWORD(v21) = *(_DWORD *)(a1 + 88);
    sub_18007CC38((__int64 *)(v3 + 144), (__int64)&v22, &v21);
    v4 = v22;
    if ( v22 == *(_QWORD *)(v3 + 144) )
    {
      v15 = 0LL;
      v6 = 0LL;
    }
    else
    {
      v5 = *(_QWORD *)(v22 + 48);
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v15 = *(_QWORD *)(v4 + 48);
      v6 = *(_QWORD *)(v4 + 40);
    }
    v7 = &v14;
    v8 = 1;
  }
  else
  {
    v18 = 0LL;
    v7 = &v17;
    v8 = 2;
    v6 = 0LL;
  }
  v19 = v6;
  v9 = *((_QWORD *)v7 + 1);
  v20 = v9;
  *(_QWORD *)v7 = 0LL;
  *((_QWORD *)v7 + 1) = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v18 )
      sub_18001050C(v18);
  }
  if ( (v8 & 1) != 0 && v15 )
    sub_18001050C(v15);
  v10 = _RTDynamicCast(
          v6,
          0LL,
          &Spectre::Engine::DeviceVertexLayout `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::VertexLayoutD3D11 `RTTI Type Descriptor',
          0);
  if ( v10 )
  {
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = v20;
    }
    *(_QWORD *)&v16 = v10;
    v11 = v9;
    *((_QWORD *)&v16 + 1) = v9;
  }
  else
  {
    v16 = 0LL;
    v11 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v10 = 0LL;
  }
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 144);
    v21 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    sub_18000E854(&v21);
  }
  else
  {
    v12 = 0LL;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v12);
  if ( v11 )
    result = sub_18001050C(v11);
  if ( v9 )
    return sub_18001050C(v9);
  return result;
}
