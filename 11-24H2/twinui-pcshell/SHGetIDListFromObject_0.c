/*
 * XREFs of SHGetIDListFromObject_0 @ 0x1802D6963
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x1806C982C (SimpleToRealIDListWithContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall SHGetIDListFromObject_0(IUnknown *punk, LPITEMIDLIST *ppidl)
{
  return SHGetIDListFromObject(punk, ppidl);
}
