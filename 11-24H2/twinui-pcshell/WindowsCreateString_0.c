/*
 * XREFs of WindowsCreateString_0 @ 0x1802D2EEE
 * Callers:
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x180211BE8 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x1802DB03C (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsCreateString_0(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
