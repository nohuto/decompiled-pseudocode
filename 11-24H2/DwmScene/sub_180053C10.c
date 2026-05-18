/*
 * XREFs of sub_180053C10 @ 0x180053C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180053C10(__int64 a1)
{
  __int64 v2; // rbp
  struct _Mtx_internal_imp_t *v3; // rbx
  __int64 v4; // r14
  _BYTE *v5; // rsi
  char v6; // r12
  _Mtx_t v8[7]; // [rsp+20h] [rbp-38h] BYREF
  struct _Mtx_internal_imp_t *v9; // [rsp+60h] [rbp+8h]

  v2 = a1 + 128;
  v3 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v9 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v4 = a1 + 377;
  v5 = (_BYTE *)(a1 + 120);
  do
  {
    sub_180011C30((__int64)v3);
    v6 = sub_1800403F0(v4);
    if ( sub_1800403F0((__int64)v5) )
    {
      *v5 = 0;
      sub_180053688(a1);
      v3 = v9;
      Mtx_unlock(v9);
    }
    else
    {
      Mtx_unlock(v3);
      sub_180029840((__int64)v8, v2);
      while ( !sub_1800403F0((__int64)v5) && sub_1800403F0(v4) )
        Cnd_wait((_Cnd_t)(a1 + 160), v8[0]);
      sub_180029CE0((__int64)v8);
    }
  }
  while ( v6 );
  *(_BYTE *)(a1 + 378) = 1;
  return Cnd_signal((_Cnd_t)(a1 + 304));
}
