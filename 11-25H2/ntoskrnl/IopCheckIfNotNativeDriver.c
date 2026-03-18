/*
 * XREFs of IopCheckIfNotNativeDriver @ 0x140705B94
 * Callers:
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140354A70 (RtlStringCbCopyNW.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     wcsstr @ 0x1404FDB30 (wcsstr.c)
 *     IopIsNotNativeDriverImage @ 0x1407064F4 (IopIsNotNativeDriverImage.c)
 */

char __fastcall IopCheckIfNotNativeDriver(int a1, __int64 a2)
{
  wchar_t *v2; // rbx

  v2 = *(wchar_t **)(a2 + 8);
  if ( a1 != -1073741772 )
    return IopIsNotNativeDriverImage(a2);
  while ( v2 )
  {
    if ( !wcsnicmp(v2, L"\\System32\\drivers\\", 0x12uLL) )
    {
      RtlStringCbCopyNW(
        v2 + 1,
        *(unsigned __int16 *)(a2 + 2) - (unsigned __int64)(unsigned __int16)((_WORD)v2 - *(_WORD *)(a2 + 8)),
        L"SysWow64",
        0x10uLL);
      v2[9] = 92;
      return IopIsNotNativeDriverImage(a2);
    }
    v2 = wcsstr(v2 + 1, L"\\");
  }
  return 0;
}
