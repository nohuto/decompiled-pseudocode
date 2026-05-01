/*
 * XREFs of ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z @ 0x180688BEC
 * Callers:
 *     ?SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z @ 0x180688760 (-SHGetNameAndFlagsW@@YAJPEFBU_ITEMIDLIST@@KPEAGIPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _GetAttributesFromFolderAndIDList(
        struct IShellFolder *a1,
        const struct _ITEMIDLIST *a2,
        struct IBindCtx *a3,
        int a4,
        unsigned int *a5)
{
  HRESULT v6; // edi
  void *v8; // [rsp+30h] [rbp-38h] BYREF
  LPCITEMIDLIST v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+40h] [rbp-28h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v6 = SHBindToFolderIDListParentEx(a1, a2, 0LL, &GUID_000214e6_0000_0000_c000_000000000046, &v8, &v9);
  if ( v6 >= 0 )
  {
    v10 = a4;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, LPCITEMIDLIST *, int *))(*(_QWORD *)v8 + 72LL))(v8, 1LL, &v9, &v10);
    if ( v6 >= 0 )
      *a5 = v10 & a4;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v6;
}
