/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180027480
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E7D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x1800250CC (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180025FB4 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002FF38 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034A30 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036540 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 ***a2,
        _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  volatile signed __int64 *v10; // rcx
  bool v11; // r15
  __int64 *j; // rbx
  int v13; // ebp
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *v16; // rcx
  __int64 v17; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v18; // rax
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v19; // rbx
  int PropertyValues; // eax
  signed __int64 v21; // rcx
  bool v22; // zf
  signed __int64 v23; // rax
  signed __int32 v24; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a2[1] )
  {
    v6 = -2147024809;
    v7 = 821LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 822LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v10 = *(volatile signed __int64 **)(a1 + 248);
  if ( v10 )
  {
    if ( *(_QWORD *)(a1 + 256) )
    {
      v11 = 1;
      j = **a2;
      while ( !*((_BYTE *)j + 25) )
      {
        v13 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
        if ( v13 < 0 )
        {
          v17 = 848LL;
          goto LABEL_29;
        }
        v14 = (__int64 **)j[2];
        if ( *((_BYTE *)v14 + 25) )
        {
          for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
            j = i;
          j = i;
        }
        else
        {
          v16 = *v14;
          for ( j = (__int64 *)j[2]; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
            j = v16;
        }
      }
LABEL_43:
      Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
        (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
        v11);
      if ( v9 )
        LeaveCriticalSection(v9);
      return 0LL;
    }
    *(_QWORD *)(a1 + 248) = 0LL;
    v11 = 0;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v10);
  }
  else
  {
    v11 = 0;
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  v18 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                     0xD0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( v18 )
  {
    v19 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v18);
    std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
      (char *)v19 + 80,
      a2);
    std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((_QWORD *)v19 + 8, a3);
    PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(v19);
    v13 = PropertyValues;
    if ( PropertyValues >= 0 )
    {
      if ( v19 )
      {
        v21 = *((_QWORD *)v19 + 7);
        while ( v21 >= 0 )
        {
          if ( (_DWORD)v21 != 0x7FFFFFFF )
          {
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 7, v21 + 1, v21);
            v22 = v21 == v23;
            v21 = v23;
            if ( !v22 )
              continue;
          }
          *(_QWORD *)(a1 + 248) = v19;
          goto LABEL_41;
        }
        do
          v24 = *(_DWORD *)(2 * v21 + 0x10);
        while ( v24 != 0x7FFFFFFF
             && v24 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v21 + 16), v24 + 1, v24) );
      }
      *(_QWORD *)(a1 + 248) = v19;
      if ( v19 )
LABEL_41:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v19);
      std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((_QWORD *)(a1 + 256), a3);
      goto LABEL_43;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)PropertyValues);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v19);
  }
  else
  {
    v13 = -2147024882;
  }
  v17 = 836LL;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v13);
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v13;
}
