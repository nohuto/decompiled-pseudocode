/*
 * XREFs of ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014A98
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F554 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x1800262C8 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030D2C (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031F78 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800349E4 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180035990 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListEntryLaunchableState@2345@@Z @ 0x180035BB0 (-get_LaunchableState@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4Game.c)
 *     ?GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@Collections@Foundation@5@@Z @ 0x1800368F4 (-GetAllLastRunProcessPaths@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037614 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180013F5C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetStringPropertyFromGameConfigStore(__int64 *a1, __int128 *a2, __int64 a3, HSTRING *a4)
{
  unsigned int v5; // r15d
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rbx
  const char *v13; // r9
  __int64 v14; // rax
  WCHAR *v15; // rdi
  HRESULT String; // esi
  __int64 v17; // rdx
  const struct std::nothrow_t *v18; // rdx
  WCHAR *v19; // rcx
  const struct std::nothrow_t *v20; // rbx
  WCHAR *v21; // rax
  const struct std::nothrow_t *v22; // rbx
  WCHAR *v23; // rax
  unsigned int v24; // [rsp+30h] [rbp-58h]
  __int128 v25; // [rsp+40h] [rbp-48h] BYREF
  PCNZWCH sourceString[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v27; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v29; // [rsp+90h] [rbp+8h] BYREF

  v5 = a3;
  if ( !a1 )
  {
    v8 = 203LL;
LABEL_3:
    v9 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 204LL;
    goto LABEL_3;
  }
  v29 = 0;
  v11 = *a1;
  v25 = *a2;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD, int *))(v11 + 64))(a1, &v25, a3, 0LL, &v29);
  if ( (_WORD)v9 == 2 )
    return 0LL;
  if ( v9 < 0 )
  {
    v8 = 218LL;
    goto LABEL_4;
  }
  *(_OWORD *)sourceString = 0LL;
  v12 = 0LL;
  v27 = 0LL;
  if ( v29 )
  {
    try
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(
        (const void **)sourceString,
        (unsigned int)v29);
      v12 = v27;
    }
    catch ( ... )
    {
      v24 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xE3,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
              v13);
      v19 = (WCHAR *)sourceString[0];
      if ( !sourceString[0] )
        return v24;
      v18 = (const struct std::nothrow_t *)(v27 - (unsigned __int64)sourceString[0]);
      if ( v27 - (unsigned __int64)sourceString[0] >= 0x1000 )
      {
        v18 = (const struct std::nothrow_t *)((char *)v18 + 39);
        v19 = (WCHAR *)*((_QWORD *)sourceString[0] - 1);
        if ( (unsigned __int64)((char *)sourceString[0] - (char *)v19 - 8) > 0x1F )
          goto LABEL_28;
      }
LABEL_29:
      operator delete(v19, v18);
      return v24;
    }
  }
  v14 = *a1;
  v25 = *a2;
  v15 = (WCHAR *)sourceString[0];
  String = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, PCNZWCH, int *))(v14 + 64))(
             a1,
             &v25,
             v5,
             sourceString[0],
             &v29);
  if ( String >= 0 )
  {
    String = WindowsCreateString(v15, (unsigned int)v29 >> 1, a4);
    if ( String >= 0 )
    {
      if ( v15 )
      {
        v22 = (const struct std::nothrow_t *)(v12 - (_QWORD)v15);
        v23 = v15;
        if ( (unsigned __int64)v22 >= 0x1000 )
        {
          v22 = (const struct std::nothrow_t *)((char *)v22 + 39);
          v15 = (WCHAR *)*((_QWORD *)v15 - 1);
          if ( (unsigned __int64)((char *)v23 - (char *)v15 - 8) > 0x1F )
          {
LABEL_28:
            _o__invalid_parameter_noinfo_noreturn(v19, v18);
            __debugbreak();
            goto LABEL_29;
          }
        }
        operator delete(v15, v22);
      }
      return 0LL;
    }
    v17 = 232LL;
  }
  else
  {
    v17 = 229LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)String);
  if ( !v15 )
    return (unsigned int)String;
  v20 = (const struct std::nothrow_t *)(v12 - (_QWORD)v15);
  v21 = v15;
  if ( (unsigned __int64)v20 < 0x1000
    || (v20 = (const struct std::nothrow_t *)((char *)v20 + 39),
        v15 = (WCHAR *)*((_QWORD *)v15 - 1),
        (unsigned __int64)((char *)v21 - (char *)v15 - 8) <= 0x1F) )
  {
    operator delete(v15, v20);
    return (unsigned int)String;
  }
  goto LABEL_28;
}
