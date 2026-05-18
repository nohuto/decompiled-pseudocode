/*
 * XREFs of sub_180045484 @ 0x180045484
 * Callers:
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180045B78 @ 0x180045B78 (sub_180045B78.c)
 *     sub_180045BE8 @ 0x180045BE8 (sub_180045BE8.c)
 *     sub_180045C20 @ 0x180045C20 (sub_180045C20.c)
 *     sub_1800D4140 @ 0x1800D4140 (sub_1800D4140.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180045484(_DWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // bl
  BOOL v6; // r15d
  char v7; // r12
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r13
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h]
  _BYTE v24[16]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v25[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v26; // [rsp+F0h] [rbp-10h]

  result = (unsigned int)a1[75];
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = result == 3;
    if ( a1[72] == 1 )
    {
      v7 = 1;
      v8 = (__int64 *)sub_180045B78(a1, v22, 0LL);
      v9 = *v8;
      v19 = *v8;
      v20 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      v10 = &v19;
    }
    else
    {
      v7 = 0;
      v11 = (__int64 *)sub_180045B78(a1, &v21, 0LL);
      v9 = *v11;
      v18 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v10 = &v17;
      v5 = 12;
    }
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v18 )
        sub_18001060C(v18);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( *((_QWORD *)&v21 + 1) )
        sub_18001060C(*((__int64 *)&v21 + 1));
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v20 )
        sub_18001060C(v20);
    }
    if ( (v5 & 1) != 0 && v23 )
      sub_18001060C(v23);
    v21 = 0LL;
    v25[0] = &std::_Func_impl_no_alloc<_lambda_0c82bcc1497f3afd643663d7c3bef72a_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v25[1] = a1;
    v25[7] = v25;
    v13 = a1[28];
    v17 = v9;
    v18 = v12;
    v26 = 0LL;
    v14 = a1[30];
    v15 = sub_180045C20(a1, v22, 0LL);
    v16 = sub_180045BE8(a1, v24, 0LL);
    result = sub_1800D4140(v16, v15, v14, (unsigned int)&v17, v13, v7, v6, a3, (__int64)v25);
    if ( *((_QWORD *)&v21 + 1) )
      return sub_18001060C(*((__int64 *)&v21 + 1));
  }
  return result;
}
