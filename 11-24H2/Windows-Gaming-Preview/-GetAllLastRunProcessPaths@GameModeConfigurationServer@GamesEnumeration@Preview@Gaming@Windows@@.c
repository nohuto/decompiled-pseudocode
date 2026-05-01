/*
 * XREFs of ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x1800368F4
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032520 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001087C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Make@?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x18001248C (-Make@-$AgileVector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collecti.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014A98 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v4; // rbx
  int StringPropertyFromGameConfigStore; // eax
  HSTRING v6; // rax
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int128 v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HSTRING string; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF

  v14 = 0LL;
  Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0>::Make(&v14);
  v4 = **(__int64 ***)(a1 + 80);
  while ( !*((_BYTE *)v4 + 25) )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v11 = *((_OWORD *)v4 + 2);
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                          *(__int64 **)(a1 + 64),
                                          &v11,
                                          23LL,
                                          &string);
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_7:
      v6 = string;
      goto LABEL_8;
    }
    v6 = string;
    if ( string )
    {
      (*(void (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v14 + 104LL))(v14, string);
      goto LABEL_7;
    }
LABEL_8:
    WindowsDeleteString(v6);
    v7 = (__int64 **)v4[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v4 = i;
      v4 = i;
    }
    else
    {
      v4 = (__int64 *)v4[2];
      for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v4 = j;
    }
  }
  *a2 = v14;
  return 0LL;
}
