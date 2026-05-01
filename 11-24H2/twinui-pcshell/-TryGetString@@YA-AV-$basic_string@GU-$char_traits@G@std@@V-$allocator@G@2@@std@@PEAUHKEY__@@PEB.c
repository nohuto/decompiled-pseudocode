/*
 * XREFs of ?TryGetString@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180212F34
 * Callers:
 *     ?FromWinLogon@ImmersiveShellComponentsConfiguration@@SA?AU?$com_ptr@UImmersiveShellComponentsConfiguration@@@winrt@@XZ @ 0x180212E58 (-FromWinLogon@ImmersiveShellComponentsConfiguration@@SA-AU-$com_ptr@UImmersiveShellComponentsCon.c)
 *     ??R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z @ 0x1803E0050 (--R_lambda_10825b8ae890a1dc19d83ed8e1513741_@@QEBA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1801837A0 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18033BE5C (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
wchar_t *__fastcall TryGetString(wchar_t *pvData, HKEY hkey, LPCWSTR lpSubKey, LPCWSTR lpValue)
{
  wchar_t *v8; // rax
  unsigned int ValueW; // eax
  wchar_t *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int pdwType; // [rsp+20h] [rbp-48h]
  DWORD pcbData[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_OWORD *)pvData = 0LL;
  *((_QWORD *)pvData + 2) = 0LL;
  *((_QWORD *)pvData + 3) = 7LL;
  *pvData = 0;
  pcbData[1] = 1;
  pcbData[0] = 0;
  if ( !RegGetValueW(hkey, lpSubKey, lpValue, 2u, 0LL, 0LL, pcbData) )
  {
    std::wstring::resize(pvData, (unsigned __int64)pcbData[0] >> 1);
    v8 = pvData;
    if ( *((_QWORD *)pvData + 3) > 7uLL )
      v8 = *(wchar_t **)pvData;
    ValueW = RegGetValueW(hkey, lpSubKey, lpValue, 2u, 0LL, v8, pcbData);
    if ( ValueW )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0x3C,
        (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\RegistryHelpers.h",
        (const char *)ValueW,
        pdwType);
    v10 = pvData;
    if ( *((_QWORD *)pvData + 3) > 7uLL )
      v10 = *(wchar_t **)pvData;
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    std::wstring::resize(pvData, v11);
  }
  return pvData;
}
