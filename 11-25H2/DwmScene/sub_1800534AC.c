/*
 * XREFs of sub_1800534AC @ 0x1800534AC
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_180034548 @ 0x180034548 (sub_180034548.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_1800534AC(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int result; // eax
  struct _Mtx_internal_imp_t *v4; // [rsp+30h] [rbp+8h]

  if ( *(_BYTE *)(a1 + 385) )
  {
    v2 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 128);
    sub_180011B30(a1 + 128);
    if ( *(_DWORD *)(a1 + 36) )
    {
      *(_BYTE *)(a1 + 120) = 1;
      Cnd_signal((_Cnd_t)(a1 + 160));
      v2 = v4;
    }
    else
    {
      sub_180053528(a1);
    }
    return Mtx_unlock(v2);
  }
  return result;
}
