/*
 * XREFs of DrvFunctionalizeDisplayConfig @ 0x140153090
 * Callers:
 *     NtUserFunctionalizeDisplayConfig @ 0x14016C1F0 (NtUserFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x14008CA1C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x14008D8CC (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14013120C (-FunctionalizeDisplayConfigRemoveUnownedPaths@@YAXPEAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x140138FA0 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x14015305C (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x14019B890 (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14019C6B0 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvFunctionalizeDisplayConfig(
        unsigned int *a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int PathModalityForDisplayConfig; // eax
  __int64 v13; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v15; // r14d
  __int64 v16; // rcx
  unsigned int CcdRawmodeFlag; // eax
  __int64 v18; // rcx
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  struct D3DKMT_GETPATHSMODALITY *v21; // r8
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // [rsp+40h] [rbp-31h] BYREF
  int v29; // [rsp+44h] [rbp-2Dh]
  __int64 v30; // [rsp+48h] [rbp-29h] BYREF
  PVOID v31[6]; // [rsp+50h] [rbp-21h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v32[2]; // [rsp+80h] [rbp+Fh] BYREF
  bool v34; // [rsp+E0h] [rbp+6Fh] BYREF

  v5 = a3;
  if ( (a3 & 0xFFFFFFF8) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 17158;
    return result;
  }
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v30);
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v31);
  v10 = *a1;
  v31[0] = &off_140245E28;
  v11 = 0;
  *(_OWORD *)v32 = 0LL;
  v29 = v5 & 1;
  if ( (v5 & 1) != 0 )
  {
    if ( v10 < 2 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 17186;
LABEL_16:
      v11 = -1073741811;
      goto LABEL_38;
    }
    a2 = (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a2 + 216);
    --v10;
    goto LABEL_7;
  }
  if ( v10 )
  {
    if ( (v5 & 2) != 0 )
    {
      WdLogSingleEntry1(2LL, v5);
      WdLogGlobalForLineNumber = 17204;
      goto LABEL_16;
    }
LABEL_7:
    PathModalityForDisplayConfig = DrvSetDisplayConfigValidateParams(v10, (_DWORD)a2, a4 != 0 ? 98400 : 32864, 0, 1);
    if ( PathModalityForDisplayConfig >= 0 )
    {
      if ( a4 )
      {
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13);
        PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(__int64, __int64, struct D3DKMT_GETPATHSMODALITY **))(DxgkWin32kInterface + 728))(
                                         a4,
                                         0x20000LL,
                                         &v32[1]);
        if ( PathModalityForDisplayConfig < 0 )
          goto LABEL_37;
        v28 = 0;
        v15 = v5 & 4;
        v34 = 0;
        PathModalityForDisplayConfig = SetDisplayConfigHandleBrokerProvidedPaths(
                                         v32[1],
                                         v15 != 0,
                                         v10,
                                         a2,
                                         v32,
                                         &v34,
                                         (enum _DXGK_DIAG_SDC_STAGE *)&v28);
        if ( PathModalityForDisplayConfig < 0 )
          goto LABEL_37;
      }
      else
      {
        PathModalityForDisplayConfig = AllocatePathModalityForDisplayConfig(v10, a2, v32);
        if ( PathModalityForDisplayConfig < 0 )
          goto LABEL_37;
        PathModalityForDisplayConfig = ConvertDisplayConfigToPathModality(v10, a2, v32[0], 0LL);
        if ( PathModalityForDisplayConfig < 0 )
          goto LABEL_37;
        v15 = v5 & 4;
      }
      CcdRawmodeFlag = GetCcdRawmodeFlag(v16);
      v19 = CcdRawmodeFlag | 0x1000000;
      if ( !a4 )
        v19 = CcdRawmodeFlag;
      if ( v29 )
      {
        v20 = *((_DWORD *)a2 - 50);
        if ( v20 >= v10 )
        {
          WdLogSingleEntry1(2LL, v20);
          WdLogGlobalForLineNumber = 17271;
          goto LABEL_16;
        }
        v21 = v32[0];
        if ( a4 )
        {
          if ( *((unsigned __int16 *)v32[0] + 10) < v10 )
          {
            WdLogSingleEntry0(1LL);
            v21 = v32[0];
            WdLogGlobalForLineNumber = 17279;
          }
          v20 += *((unsigned __int16 *)v21 + 10) - v10;
        }
        if ( (v5 & 2) != 0 )
          *((_QWORD *)v21 + 37 * v20 + 7) |= 0x4000000000uLL;
        v22 = DxDdGetDxgkWin32kInterface(v18);
        PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD, __int64, __int64))(v22 + 712))(
                                         v19,
                                         v32[0],
                                         v20,
                                         (__int64)a2 - 192,
                                         (__int64)a2 - 196);
      }
      else
      {
        v23 = v19 | GetCcdRawmodeFlag(v18) | 0x8000;
        v25 = DxDdGetDxgkWin32kInterface(v24);
        PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))(v25 + 152))(
                                         v23,
                                         v32[0]);
        if ( PathModalityForDisplayConfig >= 0 )
        {
          if ( a4 && !v15 )
            FunctionalizeDisplayConfigRemoveUnownedPaths((_OWORD *)v32[1], v32[0]);
          v27 = DxDdGetDxgkWin32kInterface(v26);
          PathModalityForDisplayConfig = (*(__int64 (__fastcall **)(struct D3DKMT_GETPATHSMODALITY *, unsigned int *, const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, __int64))(v27 + 680))(
                                           v32[0],
                                           a1,
                                           a2,
                                           a5);
        }
      }
    }
LABEL_37:
    v11 = PathModalityForDisplayConfig;
    goto LABEL_38;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 17198;
LABEL_38:
  DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO(v31);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v30);
  return v11;
}
