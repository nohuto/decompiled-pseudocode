/*
 * XREFs of sub_1800533FC @ 0x1800533FC
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 *     unknown_libname_6 @ 0x180038660 (unknown_libname_6.c)
 *     sub_180053E34 @ 0x180053E34 (sub_180053E34.c)
 */

int __fastcall sub_1800533FC(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // r8
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+28h] [rbp-10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011B30(a1 + 128);
  v5 = *(__int64 **)(a1 + 48);
  v6 = *(__int64 **)(a1 + 40);
  if ( v6 != v5 )
  {
    do
    {
      if ( *v6 == *a2 )
        break;
      v6 += 2;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      unknown_libname_6(v6 + 2, v5, v6);
      sub_180030AA0(*(_QWORD *)(a1 + 48) - 16LL);
      *(_QWORD *)(a1 + 48) -= 16LL;
      sub_180015174(&v8, a2);
      sub_180053E34(a1 + 88, &v8);
      if ( v9 )
        sub_180010544(v9);
    }
  }
  return Mtx_unlock(v2);
}
