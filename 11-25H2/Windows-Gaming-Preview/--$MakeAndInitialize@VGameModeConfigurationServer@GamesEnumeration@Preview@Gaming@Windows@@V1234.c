/*
 * XREFs of ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180024128
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E878 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002FF38 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E7D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x1800250CC (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180025FB4 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x18003641C (--$emplace@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_Tr.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037464 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
        volatile signed __int64 **a1,
        __m128i *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v8; // rax
  volatile signed __int64 *v10; // rbx
  __m128i v11; // xmm0
  int PropertyValues; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  signed __int64 v16; // rcx
  bool v17; // zf
  signed __int64 v18; // rax
  signed __int32 v19; // eax
  int v20[4]; // [rsp+20h] [rbp-48h] BYREF
  volatile signed __int64 *v21; // [rsp+30h] [rbp-38h]
  _BYTE v22[24]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  v8 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                    0xD0uLL,
                                                                                    (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v20 = v8;
  if ( !v8 )
    return 2147942414LL;
  v10 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v8);
  v21 = v10;
  v11 = *a2;
  *(__m128i *)v20 = v11;
  if ( !v11.m128i_i64[0] && !_mm_srli_si128(v11, 8).m128i_u64[0] || !*a3 || !*a4 )
  {
    v13 = -2147024809;
    v14 = 2147942487LL;
    v15 = 27LL;
    goto LABEL_21;
  }
  ((void (__fastcall *)(volatile signed __int64 *, _BYTE *, int *, _QWORD *))std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::emplace<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>)(
    v10 + 10,
    v22,
    v20,
    a3);
  std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=(v10 + 8, a4);
  PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)v10);
  v13 = PropertyValues;
  if ( PropertyValues < 0 )
  {
    v14 = (unsigned int)PropertyValues;
    v15 = 32LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)v14);
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v10);
    return v13;
  }
  if ( v10 )
  {
    v16 = *((_QWORD *)v10 + 7);
    while ( v16 >= 0 )
    {
      if ( (_DWORD)v16 != 0x7FFFFFFF )
      {
        v18 = _InterlockedCompareExchange64(v10 + 7, v16 + 1, v16);
        v17 = v16 == v18;
        v16 = v18;
        if ( !v17 )
          continue;
      }
      goto LABEL_17;
    }
    do
      v19 = *(_DWORD *)(2 * v16 + 0x10);
    while ( v19 != 0x7FFFFFFF
         && v19 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v16 + 16), v19 + 1, v19) );
  }
LABEL_17:
  *a1 = v10;
  if ( v10 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v10);
  return 0LL;
}
