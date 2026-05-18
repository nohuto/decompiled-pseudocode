/*
 * XREFs of sub_180045654 @ 0x180045654
 * Callers:
 *     sub_180045508 @ 0x180045508 (sub_180045508.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180045A18 @ 0x180045A18 (sub_180045A18.c)
 *     sub_180045A50 @ 0x180045A50 (sub_180045A50.c)
 *     sub_180045A88 @ 0x180045A88 (sub_180045A88.c)
 *     sub_180045AC0 @ 0x180045AC0 (sub_180045AC0.c)
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180045654(_DWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // bl
  BOOL v6; // r12d
  char v7; // r13
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  int v13; // r14d
  int v14; // esi
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h]
  _BYTE v25[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v27[16]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v28[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v29; // [rsp+110h] [rbp+10h]

  result = (unsigned int)a1[75];
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = result == 3;
    if ( a1[72] == 1 )
    {
      v7 = 1;
      v8 = (__int64 *)sub_180045A18(a1, &v23, 0LL);
      v9 = *v8;
      v20 = *v8;
      v21 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      v10 = &v20;
    }
    else
    {
      v7 = 0;
      v11 = (__int64 *)sub_180045A18(a1, &v22, 0LL);
      v9 = *v11;
      v19 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v10 = &v18;
      v5 = 12;
    }
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v19 )
        sub_18001050C(v19);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( *((_QWORD *)&v22 + 1) )
        sub_18001050C(*((__int64 *)&v22 + 1));
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v21 )
        sub_18001050C(v21);
    }
    if ( (v5 & 1) != 0 && v24 )
      sub_18001050C(v24);
    v22 = 0LL;
    v28[0] = &std::_Func_impl_no_alloc<_lambda_ab41f81ca63d3d4c36433f589e0aa9fa_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
    v28[1] = a1;
    v28[7] = v28;
    v13 = a1[28];
    v18 = v9;
    v19 = v12;
    v29 = 0LL;
    v14 = a1[30];
    v15 = sub_180045A50(a1, v25, 0LL);
    v23 = v26;
    v16 = sub_180045AC0(a1, v26, 0LL);
    v17 = sub_180045A88(a1, v27, 0LL);
    result = sub_1800D3B6C(v17, v16, v15, v14, (__int64)&v18, v13, v7, v6, a3, (__int64)v28);
    if ( *((_QWORD *)&v22 + 1) )
      return sub_18001050C(*((__int64 *)&v22 + 1));
  }
  return result;
}
