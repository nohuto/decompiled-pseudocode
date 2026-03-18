/*
 * XREFs of ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140362970
 * Callers:
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x140360C8C (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x140055024 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ConvertGdiScalingToDMMScaling @ 0x1401C98D4 (ConvertGdiScalingToDMMScaling.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140258098 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14025841C (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x14031B384 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x14031CF20 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?ConvertD3DddiRotationToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x1403613A4 (-ConvertD3DddiRotationToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DDDI_ROTAT.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x140361E0C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z @ 0x140362230 (-DmmGetMostImportantVidPnPathTargetsFromSource@@YAJQEAXPEAUD3DKMDT_HVIDPN__@@IQEAI@Z.c)
 *     DxgkGetGlobalRawmodeFlag @ 0x140362950 (DxgkGetGlobalRawmodeFlag.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x140363498 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403AE6BC (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@PEAU_D3DDDI_RATIONAL@@PEAI@Z @ 0x1403CBBEC (-RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMD.c)
 */

__int64 __fastcall PinPresentPathModalityFromMode(
        void (__fastcall **a1)(char *, struct D3DKMDT_HVIDPN__ *),
        char *a2,
        struct D3DKMDT_HVIDPN__ *a3,
        struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct _DXGK_DISPLAYMODE_INFO *a9,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a10,
        unsigned int a11,
        unsigned int a12,
        struct D3DKMDT_HVIDPN__ **a13)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v16; // r14
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v17; // rbx
  struct _DXGK_DISPLAYMODE_INFO *v18; // r12
  __int64 v19; // r15
  __int64 (__fastcall *v20)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *); // rax
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rsi
  unsigned __int16 v24; // ax
  __int64 v25; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned int i; // eax
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned int j; // edi
  unsigned __int16 v31; // ax
  int v32; // ebx
  __int64 v33; // rcx
  struct DXGPROCESS *Current; // rax
  struct D3DKMDT_HVIDPN__ **v35; // r14
  int v36; // edi
  __int64 v37; // r8
  int v38; // edi
  __int64 v39; // r8
  struct D3DKMDT_HVIDPN__ *v40; // rdx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E::$4FDCBBA05DCC0CCF44951C2FDAA549A2 AdditionalSignalInfo; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rdi
  int v44; // eax
  bool v45; // al
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v54; // r14
  unsigned int k; // esi
  unsigned __int16 v56; // dx
  int v57; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v58; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v59; // rax
  unsigned int m; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v61; // rax
  signed int PathModalityForAdapterWithCoreAccessHeld; // eax
  _BYTE v63[64]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+98h] [rbp-70h]
  _D3DKMDT_VIDPN_TARGET_MODE v65[2]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v67; // [rsp+170h] [rbp+68h] BYREF
  struct _D3DDDI_RATIONAL v68; // [rsp+178h] [rbp+70h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v69; // [rsp+180h] [rbp+78h]

  v69 = a4;
  v68 = (struct _D3DDDI_RATIONAL)a3;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4108;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_hAdapter != NULL", 4108LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4109;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_hVidPn != NULL", 4109LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4110;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_pDmmVidPnInterface != NULL", 4110LL, 0LL, 0LL, 0LL, 0LL);
  }
  v16 = a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4111;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_hVidPnTopology != NULL", 4111LL, 0LL, 0LL, 0LL, 0LL);
  }
  v17 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4112;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"i_pDmmVidPnTopologyInterface != NULL",
      4112LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v18 = a9;
  if ( !a9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4113;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"io_pDisplayModeInfo != NULL", 4113LL, 0LL, 0LL, 0LL, 0LL);
  }
  v19 = a7;
  if ( a7 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4114;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4114LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a13 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4115;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"o_phFunctionalizedVidPn != NULL",
      4115LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v20 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, unsigned __int64 *))*((_QWORD *)v17 + 15);
  v67 = 0LL;
  v21 = v20(v16, &v67);
  v23 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry3(2LL, v19, v16, v21);
    WdLogGlobalForLineNumber = 4124;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v19,
      (__int64)v16,
      v23,
      0LL,
      0LL);
  }
  else
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v63, v67, (unsigned __int16)v67, v22);
    if ( v64 )
      v24 = *(_WORD *)(v64 + 22);
    else
      v24 = 0;
    if ( v24 < (unsigned __int16)v67 )
    {
      WdLogSingleEntry1(6LL, v67);
      WdLogGlobalForLineNumber = 4132;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate PathModality for 0x%I64x paths",
        v67,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v23) = -1073741801;
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 412);
      a10 = D3DKMDT_VPPS_UNINITIALIZED;
      MostImportantVidPnPathTargetsFromSource = DmmGetMostImportantVidPnPathTargetsFromSource(
                                                  (DXGADAPTER *)a2,
                                                  a3,
                                                  v19,
                                                  (unsigned int *const)&a10);
      v23 = MostImportantVidPnPathTargetsFromSource;
      if ( MostImportantVidPnPathTargetsFromSource < 0 )
      {
        WdLogSingleEntry3(2LL, v19, v16, MostImportantVidPnPathTargetsFromSource);
        WdLogGlobalForLineNumber = 4147;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to find the most important paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
          v19,
          (__int64)v16,
          v23,
          0LL,
          0LL);
      }
      else
      {
        for ( i = 0; ; i = a7 + 1 )
        {
          v28 = i;
          a7 = i;
          if ( i >= v67 )
            break;
          a12 = 0;
          a11 = 0;
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, i);
          v44 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, unsigned int *, unsigned int *))a6
                 + 16))(
                  v16,
                  v28,
                  &a12,
                  &a11);
          v23 = v44;
          if ( v44 < 0 )
          {
            WdLogSingleEntry2(2LL, v16, v44);
            WdLogGlobalForLineNumber = 4166;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to enumerate the all the paths topology 0x%I64x (status = 0x%I64x)",
              (__int64)v16,
              v23,
              0LL,
              0LL,
              0LL);
            goto LABEL_35;
          }
          *((_DWORD *)PathDescriptor + 6) = a12;
          *((_DWORD *)PathDescriptor + 7) = a11;
          *(_QWORD *)PathDescriptor |= 0x8700000000000uLL;
          *((_QWORD *)PathDescriptor + 2) = v25;
          v45 = a12 != (_DWORD)v19 || *((_BYTE *)DXGGLOBAL::GetGlobal() + 304937);
          v46 = ConvertVidPnPathToPathDescription(
                  a2,
                  *(struct D3DKMDT_HVIDPN__ **)&v68,
                  v69,
                  a6,
                  v16,
                  a12,
                  a11,
                  v45,
                  PathDescriptor);
          v23 = v46;
          if ( v46 < 0 )
          {
            WdLogSingleEntry4(2LL, a12, a11, v16, v46);
            WdLogGlobalForLineNumber = 4194;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to convert paths from source 0x%I64x to target 0x%I64x in VidPn topology 0x%I64x to PathsModality ("
               "status = 0x%I64x)",
              a12,
              a11,
              (__int64)v16,
              v23,
              0LL);
            goto LABEL_35;
          }
          if ( a12 == (_DWORD)v19 )
          {
            v47 = *((_QWORD *)PathDescriptor + 1);
            *((_DWORD *)PathDescriptor + 24) = *(_DWORD *)v18;
            *((_DWORD *)PathDescriptor + 25) = *((_DWORD *)v18 + 1);
            *((_QWORD *)PathDescriptor + 13) = *((_QWORD *)PathDescriptor + 12);
            *((_DWORD *)PathDescriptor + 29) = *((_DWORD *)v18 + 2);
            *((_BYTE *)PathDescriptor + 128) = (*((_DWORD *)v18 + 10) & 0x10) != 0;
            *(_QWORD *)PathDescriptor |= 0x100uLL;
            v47 |= 0x100uLL;
            v48 = *(_QWORD *)PathDescriptor;
            *((_QWORD *)PathDescriptor + 1) = v47;
            v48 |= 2uLL;
            v49 = *((_QWORD *)v18 + 7);
            v47 |= 2uLL;
            *(_QWORD *)PathDescriptor = v48;
            *((_QWORD *)PathDescriptor + 1) = v47;
            *(_QWORD *)((char *)PathDescriptor + 52) = v49;
            *((_QWORD *)PathDescriptor + 28) = *((_QWORD *)v18 + 2);
            *((_DWORD *)PathDescriptor + 60) = *((_DWORD *)v18 + 18);
            *(_QWORD *)PathDescriptor = v48 | 0x1000000;
            *((_QWORD *)PathDescriptor + 1) = v47 | 0x1000000;
            if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304880)
              && (int)DmmGetClientVidPnTargetModeInfo(
                        (DXGADAPTER *)a2,
                        a11,
                        0LL,
                        0LL,
                        0LL,
                        0LL,
                        (struct _D3DKMDT_2DREGION *)((char *)PathDescriptor + 44),
                        0LL) >= 0 )
            {
              *(_QWORD *)PathDescriptor |= 1uLL;
              *((_QWORD *)PathDescriptor + 1) |= 1uLL;
            }
            if ( a11 == a10 )
            {
              v50 = ConvertD3DddiRotationToDmmRotation((enum _D3DDDI_ROTATION)*((_DWORD *)v18 + 7));
              *(_QWORD *)PathDescriptor |= 0x200uLL;
            }
            else
            {
              *(_QWORD *)PathDescriptor &= ~0x200uLL;
              v50 = 0;
            }
            v51 = *(_QWORD *)PathDescriptor;
            *((_DWORD *)PathDescriptor + 33) = v50;
            if ( a11 == a10 )
              *((_DWORD *)PathDescriptor + 20) = *((_DWORD *)v18 + 6) ^ (*((_DWORD *)PathDescriptor + 20) ^ *((_DWORD *)v18 + 6)) & 0xFFFFFFF8;
            v52 = v51 | 4;
            *(_QWORD *)PathDescriptor = v52;
            v53 = *((_DWORD *)v18 + 8);
            if ( v53 - 1 > 1 )
            {
              if ( (v52 & 0x40000000000LL) == 0 )
                DmmGetDefaultScaling((DXGADAPTER *)a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)PathDescriptor + 34);
            }
            else
            {
              ConvertGdiScalingToDMMScaling(v53, (_DWORD *)PathDescriptor + 34);
            }
            *(_QWORD *)PathDescriptor |= 0x40000000000uLL;
          }
          else
          {
            *((_QWORD *)PathDescriptor + 1) |= *(_QWORD *)PathDescriptor & 0x18001820B8FLL;
          }
        }
        v29 = v64;
        for ( j = 0; ; ++j )
        {
          v31 = v29 ? *(_WORD *)(v29 + 20) : 0;
          if ( j >= v31 )
            break;
          v54 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, j);
          if ( (*(_QWORD *)v54 & 0x4000000000000LL) != 0 )
          {
            v29 = v64;
          }
          else
          {
            for ( k = j; ; ++k )
            {
              v29 = v64;
              v56 = v64 ? *(_WORD *)(v64 + 20) : 0;
              if ( k >= v56 )
                break;
              v57 = *((_DWORD *)v54 + 6);
              v58 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(v58, (const struct _LUID *)v54 + 2, v57) )
              {
                *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, k) + 46) = j | 0xFE540000;
                v59 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, k);
                *(_QWORD *)v59 |= 0x4000000000000uLL;
              }
            }
          }
        }
        v32 = DxgkGetGlobalRawmodeFlag() ? 0x20000 : 0;
        Current = DXGPROCESS::GetCurrent(v33);
        v35 = a13;
        v36 = v32 | 0x8000000;
        LOBYTE(v37) = 1;
        if ( (*((_DWORD *)Current + 102) & 4) == 0 )
          v36 = v32;
        v38 = v36 | 0x40000;
        if ( (int)BmlGetPathModalityForAdapterWithCoreAccessHeld(v64, a2, v37, 2LL, v38, a13) >= 0 )
          goto LABEL_31;
        for ( m = 0; m < v67; ++m )
        {
          v61 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v63, m);
          if ( *((_DWORD *)v61 + 6) == (_DWORD)v19 )
            *((_QWORD *)v61 + 1) &= 0xFFFFFFFFFEFFFFFDuLL;
        }
        LOBYTE(v39) = 1;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v64,
                                                     a2,
                                                     v39,
                                                     2LL,
                                                     v38,
                                                     v35);
        v23 = PathModalityForAdapterWithCoreAccessHeld;
        DxgkLogCodePointPacket(
          0x1Eu,
          PathModalityForAdapterWithCoreAccessHeld,
          a8 + (v19 & 0xFFFF0000),
          0,
          *(_QWORD *)(a2 + 412));
        if ( (int)v23 >= 0 )
        {
LABEL_31:
          memset(v65, 0, 0x50uLL);
          v40 = *v35;
          v68 = 0LL;
          LODWORD(a6) = 0;
          LODWORD(v23) = RetrievePinnedModeForTarget(v69, v40, a10, v65, &v68, (unsigned int *)&a6);
          if ( (int)v23 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4430;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"Failed to update refresh rate!",
              4430LL,
              0LL,
              0LL,
              0LL,
              0LL);
            a1[8](a2, *v35);
            *v35 = 0LL;
          }
          else
          {
            AdditionalSignalInfo = v65[0].VideoSignalInfo.AdditionalSignalInfo;
            *((_QWORD *)v18 + 7) = v65[0].VideoSignalInfo.VSyncFreq;
            *((struct _D3DDDI_RATIONAL *)v18 + 2) = v68;
            if ( ((*(unsigned int *)&AdditionalSignalInfo >> 3) & 0x3F) != 0 )
              *((_DWORD *)v18 + 5) *= (*(unsigned int *)&AdditionalSignalInfo >> 3) & 0x3F;
            *((_DWORD *)v18 + 3) = DmmMapVSyncFromRationalToInteger(
                                     (const struct _D3DDDI_RATIONAL *)v18 + 2,
                                     (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&AdditionalSignalInfo << 29) >> 29),
                                     0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v23);
          WdLogGlobalForLineNumber = 4391;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"After relaxing the refresh rate matching functionalize still failed (status = 0x%I64x)",
            v23,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
    }
LABEL_35:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v63);
  }
  return (unsigned int)v23;
}
