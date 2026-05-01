/*
 * XREFs of SHBindToFolderIDListParentEx_0 @ 0x1802DA01F
 * Callers:
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@KPEAK@Z @ 0x1806C9764 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHBindToFolderIDListParentEx_0(
        IShellFolder *psfRoot,
        LPCITEMIDLIST pidl,
        IBindCtx *ppbc,
        const IID *const riid,
        void **ppv,
        LPCITEMIDLIST *ppidlLast)
{
  return SHBindToFolderIDListParentEx(psfRoot, pidl, ppbc, riid, ppv, ppidlLast);
}
