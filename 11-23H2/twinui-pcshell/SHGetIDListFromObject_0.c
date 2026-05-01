/*
 * XREFs of SHGetIDListFromObject_0 @ 0x1801CAA2A
 * Callers:
 *     SHFullIDListFromFolderAndRelativeItem @ 0x18079B668 (SHFullIDListFromFolderAndRelativeItem.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHGetIDListFromObject_0(IUnknown *punk, LPITEMIDLIST *ppidl)
{
  return SHGetIDListFromObject(punk, ppidl);
}
