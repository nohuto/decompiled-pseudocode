/*
 * XREFs of sub_180033D14 @ 0x180033D14
 * Callers:
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180010AA8 @ 0x180010AA8 (sub_180010AA8.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_18002C098 @ 0x18002C098 (sub_18002C098.c)
 *     sub_18002C978 @ 0x18002C978 (sub_18002C978.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033D14(__int64 a1)
{
  __int64 v1; // rsi
  char *v2; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  char *v14; // [rsp+40h] [rbp-10h]

  v1 = a1 + 288;
  sub_18002851C(a1 + 312, (__int64)v12);
  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = *(_QWORD **)(v1 + 8);
  v4 = *(_QWORD **)v1;
  v5 = 0LL;
  while ( v4 != v3 )
  {
    v6 = v4[1];
    if ( v6 && *(_DWORD *)(v6 + 8) )
    {
      if ( v5 == v2 )
      {
        sub_18002C978((__int64 *)&v13, (__int64)v5, (__int64)v4);
        v2 = v14;
        v5 = (char *)*((_QWORD *)&v13 + 1);
      }
      else
      {
        sub_18002C098(v5, v4);
        v5 = (char *)(v7 + 16);
        *((_QWORD *)&v13 + 1) = v5;
      }
    }
    v4 += 2;
  }
  if ( (__int128 *)v1 == &v13 )
  {
    v8 = (_QWORD *)v13;
  }
  else
  {
    v8 = *(_QWORD **)v1;
    *(_QWORD *)v1 = v13;
    v9 = *(char **)(v1 + 8);
    *(_QWORD *)(v1 + 8) = v5;
    v5 = v9;
    v10 = *(char **)(v1 + 16);
    *(_QWORD *)(v1 + 16) = v2;
    v2 = v10;
  }
  if ( v8 )
  {
    sub_180010AA8((__int64)v8, (__int64)v5);
    sub_180010134(v8, (v2 - (char *)v8) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return sub_180010F44((__int64)v12);
}
