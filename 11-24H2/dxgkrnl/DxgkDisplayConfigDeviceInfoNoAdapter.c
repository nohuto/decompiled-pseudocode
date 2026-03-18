/*
 * XREFs of DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140009B8C (-GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140009C9C (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetMdmStatus @ 0x14002739C (DpiGetMdmStatus.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140029DDC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x140064840 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x140189958 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?GetCabcOptionFromRegistry@@YAJPEAK@Z @ 0x14018F538 (-GetCabcOptionFromRegistry@@YAJPEAK@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1401ABF08 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z @ 0x1401C59F4 (-TriggerCabcV2Wnf@@YAJW4_CABC_OPTION_TYPE@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1402D7EF4 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x140306E6C (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x140307F48 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403085C0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x14031C0A4 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140362070 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfoNoAdapter(__int64 a1, __int64 a2, const struct _LUID *a3, __int64 a4)
{
  __int64 LowPart; // rdx
  int v5; // edi
  __int64 v7; // rsi
  struct DXGGLOBAL *v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // eax
  unsigned int v13; // r15d
  unsigned int v14; // edx
  struct _LUID v15; // rcx
  int LightweightDeviceAndContext; // eax
  unsigned int v17; // edx
  struct _LUID v18; // rcx
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rax
  const wchar_t *v23; // r9
  DXGADAPTERSOURCEHASH *v24; // r15
  unsigned int HashBitShift; // eax
  unsigned int HighPart; // ecx
  unsigned int *p_HighPart; // r12
  unsigned int *v28; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v30; // [rsp+28h] [rbp-E0h]
  char v31; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+59h] [rbp-AFh] BYREF
  __int16 v33; // [rsp+5Bh] [rbp-ADh] BYREF
  char v34; // [rsp+5Dh] [rbp-ABh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v35; // [rsp+60h] [rbp-A8h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v36; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h]
  struct _LUID v40; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v41; // [rsp+88h] [rbp-80h]
  int v42; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v43[44]; // [rsp+98h] [rbp-70h] BYREF

  LowPart = a3->LowPart;
  v5 = 0;
  LODWORD(v7) = 0;
  if ( (unsigned int)LowPart > 0xFFFFFFEA )
  {
    if ( (_DWORD)LowPart != -19 )
    {
      if ( (_DWORD)LowPart == -14 )
      {
        v24 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1384);
        a3[3].LowPart = DXGADAPTERSOURCEHASH::GetHashBitCount(v24);
        a3[4].LowPart = DXGADAPTERSOURCEHASH::GetHashBitMask((struct _KTHREAD **)v24);
        HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift((struct _KTHREAD **)v24);
        HighPart = a3[4].HighPart;
        a3[3].HighPart = HashBitShift;
        if ( (HighPart & 2) != 0 )
          return (unsigned int)v7;
        p_HighPart = (unsigned int *)&a3[2].HighPart;
        v28 = (unsigned int *)&a3[2];
        if ( (HighPart & 1) != 0 )
        {
          LODWORD(v7) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                          v24,
                          *p_HighPart,
                          (struct _LUID *)&a3[1],
                          (unsigned int *)&a3[2]);
          if ( (int)v7 < 0 )
          {
            WdLogSingleEntry1(2LL, *p_HighPart);
            v30 = *p_HighPart;
            WdLogGlobalForLineNumber = 6820;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to find source/adapter from hash 0x%I64x",
              v30,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          return (unsigned int)v7;
        }
        LODWORD(v7) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                        (struct _KTHREAD **)v24,
                        a3 + 1,
                        *v28,
                        (unsigned int *)&a3[2].HighPart);
        if ( (int)v7 >= 0 )
          return (unsigned int)v7;
        WdLogSingleEntry3(2LL, a3[1].HighPart, a3[1].LowPart, *v28);
        v22 = *v28;
        v23 = L"Failed to find has for adapter <0x%I64x, 0x%I64x>, source:0x%I64x";
        WdLogGlobalForLineNumber = 6831;
      }
      else
      {
        if ( (_DWORD)LowPart != -13 )
        {
          if ( (unsigned int)(LowPart + 6) <= 1 )
          {
            Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage();
            return 3221225659LL;
          }
LABEL_35:
          LODWORD(v7) = -1073741811;
          return (unsigned int)v7;
        }
        v17 = a3[2].LowPart;
        v18 = a3[1];
        v33 = 0;
        v34 = 0;
        v35 = D3DKMDT_VOT_HD15;
        v36 = D3DKMDT_VOT_HD15;
        LODWORD(v37) = 0;
        LODWORD(v7) = DxgkIsVirtualizationDisabledForTarget(
                        v18,
                        v17,
                        (bool *)&v33,
                        (bool *)&v33 + 1,
                        &v34,
                        &v35,
                        &v36,
                        &v37);
        if ( (int)v7 >= 0 )
        {
          LOBYTE(v5) = (_BYTE)v33 != 0;
          v19 = (HIBYTE(v33) != 0 ? 2 : 0) | v5 & 0xFFFFFFFD | a3[4].LowPart & 0xFFFFFFFC;
          v20 = -(v34 != 0);
          a3[2].HighPart = v35;
          a3[3].LowPart = v36;
          v21 = v37;
          a3[4].LowPart = v20 & 4 | v19 & 0xFFFFFFFB;
          a3[3].HighPart = v21;
          return (unsigned int)v7;
        }
        WdLogSingleEntry3(2LL, a3[1].HighPart, a3[1].LowPart, a3[2].LowPart);
        v22 = a3[2].LowPart;
        v23 = L"Failed DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_INFO_INTERNAL for adapter <0x%I64x, 0x%I64x>, target:0x%I64x";
        WdLogGlobalForLineNumber = 6797;
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v23, a3[1].HighPart, a3[1].LowPart, v22, 0LL, 0LL);
      return (unsigned int)v7;
    }
    Global = DXGGLOBAL::GetGlobal();
    LightweightDeviceAndContext = DXGGLOBAL::IterateAdaptersWithCallback(
                                    (__int64)Global,
                                    (__int64 (__fastcall *)(_QWORD *, __int64))SendColorimetricControlToDriverCallback,
                                    (__int64)a3,
                                    4);
LABEL_49:
    LODWORD(v7) = LightweightDeviceAndContext;
    return (unsigned int)v7;
  }
  if ( (_DWORD)LowPart == -22 )
  {
    LightweightDeviceAndContext = DxgkCreateLightweightDeviceAndContext((struct _LUID *)&a3[1], &a3[2].HighPart, &a3[3]);
    goto LABEL_49;
  }
  if ( (_DWORD)LowPart == 3 )
  {
    if ( !(_BYTE)a1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6638;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i_bGetDeviceInfo", 6638LL, 0LL, 0LL, 0LL, 0LL);
    }
    memset(v43, 0, sizeof(v43));
    v13 = 0;
    LODWORD(v7) = -1071774970;
    do
    {
      if ( v13 >= 0x10 )
        break;
      if ( v43[38] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6650;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"PathForTarget.Descriptors[0].pDevMode == NULL",
          6650LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      memset(v43, 0, sizeof(v43));
      v14 = a3[2].LowPart;
      v15 = a3[1];
      v32 = 0;
      v31 = 0;
      LODWORD(v7) = DxgkIsVirtualizationDisabledForTarget(
                      v15,
                      v14,
                      (bool *)&v32 + 1,
                      (bool *)&v32,
                      &v31,
                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v43[18],
                      (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v43[18] + 1,
                      (_DWORD *)&v43[33] + 1);
      if ( (int)v7 >= 0 )
      {
        v43[9] = a3[1];
        HIDWORD(v43[10]) = a3[2].LowPart;
        HIDWORD(v43[2]) = 65537;
        LODWORD(v43[10]) = v13;
        LODWORD(v43[30]) = -13434880;
        BYTE1(v43[23]) = (v31 == 0 ? 4 : 0) | ((_BYTE)v32 == 0 ? 2 : 0) | (HIBYTE(v32) == 0);
        v43[7] = 0xCF00000000000LL;
        LODWORD(v7) = BmlGetPathModalityForAdapter((__int64)v43, a3 + 1, 0, 1u, 0);
        if ( (int)v7 >= 0 )
        {
          DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)&v43[11], (__int64)&a3[4]);
          *(const struct _LUID *)((char *)a3 + 20) = a3[7];
        }
        BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v43);
        ++v13;
      }
    }
    while ( (_DWORD)v7 == -1071774970 );
    return (unsigned int)v7;
  }
  if ( (unsigned int)(LowPart + 36) <= 1 )
  {
    if ( a3->HighPart < 0x18u )
    {
      v10 = WdLogNewEntry5_WdTrace(a1, LowPart, a3, a4);
      *(_QWORD *)(v10 + 24) = (unsigned int)a3->HighPart;
      *(_QWORD *)(v10 + 32) = -1073741789LL;
      result = 3221225507LL;
      WdLogGlobalForLineNumber = 6902;
      return result;
    }
    if ( (_DWORD)LowPart == -35 )
    {
      v12 = TriggerCabcV2Wnf(a3[2].HighPart);
      v7 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 6916;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"TriggerCabcV2Wnf failed 0x%I64x",
          v7,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v35 = D3DKMDT_VOT_HD15;
      GetCabcOptionFromRegistry((unsigned int *)&v35);
      a3[2].HighPart = v35;
    }
    return (unsigned int)v7;
  }
  if ( (_DWORD)LowPart != -34 )
  {
    if ( (_DWORD)LowPart == -24 )
    {
      v8 = DXGGLOBAL::GetGlobal();
      v9 = a3[2].LowPart;
      if ( *((_BYTE *)v8 + 305304) )
      {
        v40 = a3[1];
        v41 = v9;
        v38 = 0LL;
        LODWORD(v39) = 0;
        v42 = 0;
        LODWORD(v7) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                        (struct _KTHREAD **)v8 + 38157,
                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v40,
                        (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v38);
        if ( (int)v7 >= 0 )
        {
          *(_QWORD *)&a3[2].HighPart = v38;
          a3[3].HighPart = v39;
        }
      }
      else
      {
        *(const struct _LUID *)((char *)a3 + 20) = a3[1];
        a3[3].HighPart = v9;
      }
      return (unsigned int)v7;
    }
    goto LABEL_35;
  }
  DpiGetMdmStatus((struct _DISPLAYCONFIG_DISPLAYMUX_STATUS *)&a3[2].HighPart);
  return (unsigned int)v7;
}
