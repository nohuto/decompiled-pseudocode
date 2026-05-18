/*
 * XREFs of sub_1800D1D30 @ 0x1800D1D30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_180024928 @ 0x180024928 (sub_180024928.c)
 *     sub_180025E18 @ 0x180025E18 (sub_180025E18.c)
 *     sub_1800D1774 @ 0x1800D1774 (sub_1800D1774.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D1D30(__int64 a1, __int64 a2)
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
  sub_180011B30(a1 + 8);
  v12 = ++*(_DWORD *)(a1 + 40);
  v5 = *(_BYTE *)(a1 + 64);
  if ( !v5 )
  {
    v6 = (_QWORD *)sub_1800D1774((__int64 *)(a1 + 48), (__int64)v14, &v12);
    v8 = *v6 + 40LL;
    if ( v8 != a2 )
    {
      sub_180012408(*v6 + 40LL, v7);
      sub_180025E18(v8, a2);
    }
  }
  Mtx_unlock(v4);
  if ( v5 )
    sub_180024928(a2);
  v10 = v12;
  sub_180012408(a2, v9);
  return v10;
}
