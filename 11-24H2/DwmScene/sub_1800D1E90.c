/*
 * XREFs of sub_1800D1E90 @ 0x1800D1E90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_180024A88 @ 0x180024A88 (sub_180024A88.c)
 *     sub_180025F78 @ 0x180025F78 (sub_180025F78.c)
 *     sub_1800D18D4 @ 0x1800D18D4 (sub_1800D18D4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D1E90(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  char v5; // bp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  v15 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v13 = a1 + 8;
  sub_180011C30(a1 + 8);
  v12 = ++*(_DWORD *)(a1 + 40);
  v5 = *(_BYTE *)(a1 + 64);
  if ( !v5 )
  {
    v6 = (_QWORD *)sub_1800D18D4((__int64 *)(a1 + 48), (__int64)v14, &v12);
    v8 = *v6 + 40LL;
    if ( v8 != a2 )
    {
      sub_180012508(*v6 + 40LL, v7);
      sub_180025F78(v8, a2);
    }
  }
  Mtx_unlock(v4);
  if ( v5 )
    sub_180024A88(a2);
  v10 = v12;
  sub_180012508(a2, v9);
  return v10;
}
