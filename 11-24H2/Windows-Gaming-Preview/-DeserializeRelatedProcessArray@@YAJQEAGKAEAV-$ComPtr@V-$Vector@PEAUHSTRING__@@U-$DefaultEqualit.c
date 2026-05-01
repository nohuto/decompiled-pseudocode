/*
 * XREFs of ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180014328
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037614 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18003A390 (-get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Make@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180016244 (-Make@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@F.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DeserializeRelatedProcessArray(const WCHAR *sourceString, unsigned int a2, _QWORD *a3)
{
  const WCHAR *v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  HRESULT v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+58h] [rbp+20h] BYREF

  v4 = sourceString;
  if ( a2 < 4 )
  {
    v5 = 464LL;
LABEL_3:
    v6 = -2147418113;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( *(_DWORD *)((char *)sourceString + a2 - 4) )
  {
    v5 = 468LL;
    goto LABEL_3;
  }
  v8 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v6 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Make(a3);
  if ( v6 < 0 )
  {
    v5 = 470LL;
    goto LABEL_4;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( v4[v9] );
  while ( 1 )
  {
    if ( !v9 )
      return 0LL;
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = WindowsCreateString(v4, v9, &string);
    v11 = v10;
    if ( v10 < 0 )
      break;
    v10 = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(*(_QWORD *)*a3 + 104LL))(*a3, string);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 478LL;
      goto LABEL_23;
    }
    v4 += v9 + 1;
    v9 = -1LL;
    do
      ++v9;
    while ( v4[v9] );
    WindowsDeleteString(string);
  }
  v12 = 477LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v10);
  WindowsDeleteString(string);
  return v11;
}
