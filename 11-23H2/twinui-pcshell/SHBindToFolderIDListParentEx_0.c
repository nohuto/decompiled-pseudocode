/*
 * XREFs of SHBindToFolderIDListParentEx_0 @ 0x1801CAB2D
 * Callers:
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@KPEAK@Z @ 0x18079B270 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx.c)
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
