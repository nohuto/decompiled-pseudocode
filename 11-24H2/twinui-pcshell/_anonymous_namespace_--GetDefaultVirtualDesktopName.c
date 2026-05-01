/*
 * XREFs of _anonymous_namespace_::GetDefaultVirtualDesktopName @ 0x1801E538C
 * Callers:
 *     ?get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802AFDD0 (-get_DefaultName@VirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E5480 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall anonymous_namespace_::GetDefaultVirtualDesktopName(HSTRING *string, __int64 a2)
{
  int v3; // eax
  WCHAR *v4; // rbx
  __int64 v5; // rdx
  HRESULT v6; // eax
  PCNZWCH sourceString; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  sourceString = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
         &sourceString,
         &_ImageBase,
         1001LL,
         a2 + 1);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAC,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v3,
      0);
  *string = 0LL;
  v4 = (WCHAR *)sourceString;
  v5 = v9;
  if ( v9 == -1 )
  {
    if ( sourceString )
    {
      do
        ++v5;
      while ( sourceString[v5] );
    }
    else
    {
      v5 = 0LL;
    }
    v9 = v5;
  }
  v6 = WindowsCreateString(sourceString, v5, string);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAF,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v6,
      1);
  if ( v4 )
    CoTaskMemFree(v4);
  return string;
}
