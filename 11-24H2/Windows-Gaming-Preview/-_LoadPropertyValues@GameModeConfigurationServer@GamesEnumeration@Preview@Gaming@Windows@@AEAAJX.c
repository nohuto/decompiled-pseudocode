/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037614
 * Callers:
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800242A8 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180027610 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180014328 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x1800146C8 (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014A98 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?Make@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180016244 (-Make@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@F.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180036B8C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180036CE0 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180037018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x180037C80 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180038B4C (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // rbx
  __int64 v3; // r9
  int v4; // r8d
  __int64 *v5; // rcx
  __int64 v6; // rax
  HSTRING v7; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 *v13; // r12
  struct _GUID v14; // xmm6
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v19; // rdx
  WCHAR *v20; // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  const struct std::nothrow_t *v24; // rdx
  const struct std::nothrow_t *v25; // rdx
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v29)(_QWORD, GUID *, char *); // rsi
  __int64 v30; // rcx
  int v31; // eax
  int NullableInt; // ebx
  __int64 (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v34)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  unsigned int v51; // esi
  unsigned int v52; // r14d
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct _GUID v56; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  unsigned int v58; // [rsp+A0h] [rbp+48h] BYREF
  __int64 (__fastcall ***length)(_QWORD, GUID *, char *); // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v60; // [rsp+B0h] [rbp+58h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+60h] BYREF

  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      (__int64)this,
                      0);
  v4 = *(_DWORD *)(*(_QWORD *)(FirstGameConfig + 16) + 32LL);
  *((_BYTE *)this + 96) = (v4 & 0x80) != 0;
  if ( (v4 & 0x80) == 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportUsage(
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
      1u,
      v4,
      v3);
    v58 = 0;
    v5 = (__int64 *)*((_QWORD *)this + 8);
    v6 = *v5;
    v56 = *(struct _GUID *)FirstGameConfig;
    if ( (*(int (__fastcall **)(__int64 *, struct _GUID *, __int64, unsigned int *))(v6 + 112))(v5, &v56, 17LL, &v58) >= 0
      && !v58 )
    {
      string = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      v56 = *(struct _GUID *)FirstGameConfig;
      if ( (int)GetStringPropertyFromGameConfigStore(*((__int64 **)this + 8), (__int128 *)&v56, 15LL, &string) >= 0 )
      {
        v7 = string;
        if ( !string )
        {
LABEL_13:
          WindowsDeleteString(v7);
          goto LABEL_14;
        }
        LODWORD(length) = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
        if ( StringRawBuffer )
        {
          if ( (_DWORD)length )
          {
            v9 = wcstoul(StringRawBuffer, 0LL, 10);
            if ( v9 - 1 <= 0xFFFFFFFD )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                (__int64)&v56);
              if ( v9 == *(_DWORD *)&v56.Data2
                && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl) == 1 )
              {
                *((_BYTE *)this + 96) = 1;
              }
            }
          }
        }
      }
      v7 = string;
      goto LABEL_13;
    }
  }
LABEL_14:
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig((__int64)this, 0);
  *((_BYTE *)this + 160) = (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 32LL) & 0x100) == 0;
  v11 = (__int64 *)((char *)this + 104);
  v12 = *((_QWORD *)this + 13);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  length = 0LL;
  v13 = (__int64 *)*((_QWORD *)this + 8);
  v14 = *(struct _GUID *)v10;
  v58 = 0;
  v15 = *v13;
  v56 = v14;
  v16 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64))(v15 + 64))(v13, &v56, 22LL);
  v17 = v16;
  if ( (_WORD)v16 != 2 )
  {
    if ( v16 < 0 )
    {
      v19 = 504LL;
      goto LABEL_21;
    }
    v20 = (WCHAR *)operator new[](v58 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
    string = (HSTRING)v20;
    if ( !v20 )
    {
      v17 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_31;
    }
    v21 = *v13;
    v56 = v14;
    v22 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, WCHAR *, unsigned int *))(v21 + 64))(
            v13,
            &v56,
            22LL,
            v20,
            &v58);
    v17 = v22;
    if ( v22 >= 0 )
    {
      v22 = DeserializeRelatedProcessArray(v20, v58, &length);
      v17 = v22;
      if ( v22 >= 0 )
      {
        operator delete(v20, v24);
        goto LABEL_35;
      }
      v23 = 512LL;
    }
    else
    {
      v23 = 511LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v22);
    operator delete(v20, v25);
    goto LABEL_31;
  }
  v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
  if ( length )
  {
    length = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v18)[2])(v18);
  }
  v16 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Make(&length);
  v17 = v16;
  if ( v16 >= 0 )
  {
LABEL_35:
    v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
    v29 = **length;
    v30 = *v11;
    if ( *v11 )
    {
      *v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v29(v28, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, (char *)this + 104);
    NullableInt = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)v31);
      v33 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
      if ( length )
      {
        length = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v33)[2])(v33);
      }
      return (unsigned int)NullableInt;
    }
    v34 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
    if ( length )
    {
      length = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v34)[2])(v34);
    }
    v35 = (__int64 *)*((_QWORD *)this + 8);
    v58 = 0;
    LODWORD(length) = 4;
    v36 = *v35;
    v56 = *(struct _GUID *)v10;
    v37 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, unsigned int *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(v36 + 64))(
            v35,
            &v56,
            19LL,
            &v58,
            &length);
    NullableInt = v37;
    if ( v37 >= 0 )
    {
      v51 = HIWORD(v58);
      v52 = v58 >> 8;
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v38,
                      (char *)this + 112,
                      HIBYTE(v58));
      if ( NullableInt < 0 )
      {
        v50 = 387LL;
        goto LABEL_63;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v53,
                      (char *)this + 120,
                      (unsigned __int8)v51);
      if ( NullableInt < 0 )
      {
        v50 = 388LL;
        goto LABEL_63;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v54,
                      (char *)this + 128,
                      (unsigned __int8)v52);
      if ( NullableInt < 0 )
      {
        v50 = 389LL;
        goto LABEL_63;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x175,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v37);
      if ( (_WORD)NullableInt != 2 )
      {
        v50 = 386LL;
        goto LABEL_63;
      }
      v39 = *((_QWORD *)this + 14);
      if ( v39 )
      {
        *((_QWORD *)this + 14) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v40 = *((_QWORD *)this + 15);
      if ( v40 )
      {
        *((_QWORD *)this + 15) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = *((_QWORD *)this + 16);
      if ( v41 )
      {
        *((_QWORD *)this + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
    v60 = 0;
    v42 = (__int64 *)*((_QWORD *)this + 8);
    v58 = 4;
    v43 = *v42;
    v56 = *(struct _GUID *)v10;
    v44 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, unsigned int *, unsigned int *))(v43 + 64))(
            v42,
            &v56,
            20LL,
            &v60,
            &v58);
    NullableInt = v44;
    if ( v44 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v44);
    if ( (_WORD)NullableInt == 2 )
    {
      v46 = *((_QWORD *)this + 17);
      if ( v46 )
      {
        *((_QWORD *)this + 17) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
    }
    else
    {
      if ( NullableInt < 0 )
      {
        v50 = 400LL;
        goto LABEL_63;
      }
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v45,
                      (char *)this + 136,
                      v60);
      if ( NullableInt < 0 )
      {
        v50 = 401LL;
        goto LABEL_63;
      }
    }
    v58 = 0;
    LODWORD(length) = 0;
    v56 = *(struct _GUID *)v10;
    NullableInt = GetGameCpuMask(
                    *((struct ExecutionModel::IGameConfigStore **)this + 8),
                    &v56,
                    &v58,
                    (unsigned int *)&length);
    if ( (_WORD)NullableInt == 2 )
    {
      v48 = *((_QWORD *)this + 18);
      if ( v48 )
      {
        *((_QWORD *)this + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = *((_QWORD *)this + 19);
      if ( v49 )
      {
        *((_QWORD *)this + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
      }
      return 0LL;
    }
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v47,
                      (char *)this + 144,
                      v58);
      if ( NullableInt >= 0 )
      {
        NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                        v55,
                        (char *)this + 152,
                        (unsigned int)length);
        if ( NullableInt >= 0 )
          return 0LL;
        v50 = 416LL;
      }
      else
      {
        v50 = 415LL;
      }
    }
    else
    {
      v50 = 414LL;
    }
LABEL_63:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v19 = 499LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
    (const char *)(unsigned int)v16);
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x170,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
    (const char *)v17);
  v26 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))length;
  if ( length )
  {
    length = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v26)[2])(v26);
  }
  return v17;
}
