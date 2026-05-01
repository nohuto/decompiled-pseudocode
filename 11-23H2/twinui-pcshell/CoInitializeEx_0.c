/*
 * XREFs of CoInitializeEx_0 @ 0x1801C7E18
 * Callers:
 *     ?ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z @ 0x18002E800 (-ThreadProc@WindowsXamlManagerThread@@SAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall CoInitializeEx_0(LPVOID pvReserved, DWORD dwCoInit)
{
  return CoInitializeEx(pvReserved, dwCoInit);
}
