/*
 * XREFs of sub_18005355C @ 0x18005355C
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 *     unknown_libname_6 @ 0x1800387C0 (unknown_libname_6.c)
 *     sub_180053F94 @ 0x180053F94 (sub_180053F94.c)
 */

int __fastcall sub_18005355C(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  __int64 *v5; // rdx
  __int64 *v6; // r8
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v9; // [rsp+28h] [rbp-10h]

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011C30(a1 + 128);
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
      sub_180030C00(*(_QWORD *)(a1 + 48) - 16LL);
      *(_QWORD *)(a1 + 48) -= 16LL;
      sub_180015274(&v8, a2);
      sub_180053F94(a1 + 88, &v8);
      if ( v9 )
        sub_180010644(v9);
    }
  }
  return Mtx_unlock(v2);
}
