/*
 * XREFs of sub_1800452CC @ 0x1800452CC
 * Callers:
 *     sub_180045668 @ 0x180045668 (sub_180045668.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180045B78 @ 0x180045B78 (sub_180045B78.c)
 *     sub_180045BE8 @ 0x180045BE8 (sub_180045BE8.c)
 *     sub_1800D39D8 @ 0x1800D39D8 (sub_1800D39D8.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800452CC(_DWORD *a1)
{
  __int64 result; // rax
  char v3; // bl
  BOOL v4; // r14d
  char v5; // r12
  __int64 *v6; // rax
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r13
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp-59h] BYREF
  __int64 v15; // [rsp+58h] [rbp-51h]
  __int128 v16; // [rsp+60h] [rbp-49h] BYREF
  __int128 v17; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v18[8]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v19; // [rsp+88h] [rbp-21h]
  _QWORD v20[14]; // [rsp+90h] [rbp-19h] BYREF

  result = (unsigned int)a1[75];
  v3 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v4 = result == 3;
    if ( a1[72] == 1 )
    {
      v5 = 1;
      v6 = (__int64 *)sub_180045B78(a1, v18, 0LL);
      v7 = *v6;
      v14 = *v6;
      v15 = v6[1];
      *v6 = 0LL;
      v6[1] = 0LL;
      v8 = &v14;
    }
    else
    {
      v5 = 0;
      v9 = (__int64 *)sub_180045B78(a1, &v17, 0LL);
      v7 = *v9;
      *((_QWORD *)&v16 + 1) = v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      v8 = (__int64 *)&v16;
      v3 = 12;
    }
    v10 = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    if ( (v3 & 8) != 0 )
    {
      v3 &= ~8u;
      if ( *((_QWORD *)&v16 + 1) )
        sub_18001060C(*((__int64 *)&v16 + 1));
    }
    if ( (v3 & 4) != 0 )
    {
      v3 &= ~4u;
      if ( *((_QWORD *)&v17 + 1) )
        sub_18001060C(*((__int64 *)&v17 + 1));
    }
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~2u;
      if ( v15 )
        sub_18001060C(v15);
    }
    if ( (v3 & 1) != 0 && v19 )
      sub_18001060C(v19);
    v16 = 0LL;
    v20[0] = &std::_Func_impl_no_alloc<_lambda_7334b5a9a3bbefa9324c75fdace13832_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v20[1] = a1;
    v20[7] = v20;
    v11 = a1[28];
    v14 = v7;
    v15 = v10;
    v17 = 0LL;
    v12 = a1[30];
    v13 = sub_180045BE8(a1, v18, 0LL);
    result = sub_1800D39D8(v13, v12, (unsigned int)&v14, v11, v5, v4, (__int64)v20);
    if ( *((_QWORD *)&v16 + 1) )
      return sub_18001060C(*((__int64 *)&v16 + 1));
  }
  return result;
}
