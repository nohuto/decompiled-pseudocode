/*
 * XREFs of sub_18005360C @ 0x18005360C
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18005360C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int result; // eax
  struct _Mtx_internal_imp_t *v4; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 385) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    sub_180011C30(a1 + 128);
    if ( *(_DWORD *)(a1 + 36) )
    {
      *(_BYTE *)(a1 + 120) = 1;
      Cnd_signal((_Cnd_t)(a1 + 160));
      v2 = v4;
    }
    else
    {
      sub_180053688(a1);
    }
    return Mtx_unlock(v2);
  }
  return result;
}
