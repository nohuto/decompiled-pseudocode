/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___ @ 0x1800B6E5C
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800BFA30 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BYTE *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___(
        _BYTE *a1,
        __int64 **a2,
        __int64 **a3,
        char a4)
{
  __int64 **i; // r14
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 (__fastcall **v11)(); // [rsp+20h] [rbp-48h] BYREF
  char v12; // [rsp+28h] [rbp-40h]
  __int64 (__fastcall ***v13)(); // [rsp+58h] [rbp-10h]

  for ( i = a2; i != a3; ++i )
  {
    v8 = *i;
    v9 = **i;
    v11 = off_180170F18;
    v13 = &v11;
    v12 = a4;
    (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v9 + 368))(v8, &v11);
  }
  *a1 = a4;
  return a1;
}
