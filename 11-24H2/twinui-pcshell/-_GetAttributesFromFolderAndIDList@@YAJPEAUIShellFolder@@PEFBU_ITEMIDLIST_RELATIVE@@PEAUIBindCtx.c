/*
 * XREFs of ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@KPEAK@Z @ 0x1806C9764
 * Callers:
 *     ?GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z @ 0x1806C90F0 (-GetRealIDL@@YAJPEAUIBindCtx@@PEAUIShellFolder@@PEFBU_ITEMID_CHILD@@PEAPEAU3@@Z.c)
 * Callees:
 *     SHBindToFolderIDListParentEx_0 @ 0x1802DA01F (SHBindToFolderIDListParentEx_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _GetAttributesFromFolderAndIDList(
        struct IShellFolder *a1,
        const ITEMIDLIST *a2,
        struct IBindCtx *a3,
        int a4,
        unsigned int *a5)
{
  HRESULT v5; // ebx
  LPCITEMIDLIST v7[3]; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v7[0] = 0LL;
  v8 = 0LL;
  v5 = SHBindToFolderIDListParentEx_0(a1, a2, 0LL, &GUID_000214e6_0000_0000_c000_000000000046, &v8, v7);
  if ( v5 >= 0 )
  {
    v9 = 0x40000000;
    v5 = (*(__int64 (__fastcall **)(void *, __int64, LPCITEMIDLIST *, int *))(*(_QWORD *)v8 + 72LL))(v8, 1LL, v7, &v9);
    if ( v5 >= 0 )
      *a5 = v9 & 0x40000000;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v5;
}
