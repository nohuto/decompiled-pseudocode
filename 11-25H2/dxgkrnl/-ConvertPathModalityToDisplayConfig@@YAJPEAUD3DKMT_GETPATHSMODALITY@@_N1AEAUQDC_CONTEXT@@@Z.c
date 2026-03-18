/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1402E7D24
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1401BFF18 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x140374170 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1403E1180 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1402E8BE8 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402E8E90 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1402E8EDC (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ConvertDmmToDisplayConfigRotation @ 0x1402E9950 (ConvertDmmToDisplayConfigRotation.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1402E9984 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        char a2,
        char a3,
        struct QDC_CONTEXT *a4)
{
  __int64 v4; // rdi
  struct QDC_CONTEXT *v5; // r14
  __int64 v8; // rbp
  unsigned int v9; // ecx
  char v10; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rdx
  bool v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)a4 + 1);
  v5 = a4;
  v8 = 1LL;
  v9 = *((_DWORD *)a4 + 1);
  if ( a3 )
  {
    if ( v9 )
      goto LABEL_5;
LABEL_57:
    WdLogSingleEntry2(3LL, v9, v8);
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 1027;
    return result;
  }
  if ( v9 < *((unsigned __int16 *)a1 + 10) )
  {
    v8 = *((unsigned __int16 *)a1 + 10);
    goto LABEL_57;
  }
LABEL_5:
  v10 = 0;
  if ( !*((_WORD *)a1 + 10) )
    goto LABEL_55;
  v11 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + 144);
  do
  {
    v12 = IsInternalVideoOutput(*v11);
    v11 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v15 + 296);
    if ( v12 )
      v10 = 1;
  }
  while ( v13 != 1 );
  v16 = v14;
  v17 = 0x100000000000LL;
  do
  {
    v18 = 296LL * v16;
    if ( a3 && v10 && !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + v18 + 144)) )
      goto LABEL_53;
    *(_QWORD *)v4 = v14;
    *(_QWORD *)(v4 + 8) = v14;
    if ( (v17 & *(_QWORD *)((_BYTE *)a1 + v18 + 56)) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1065;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_ADAPTER_VALID",
        1065LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = 0x100000000000LL;
    }
    *(_QWORD *)v4 |= v17 & *(_QWORD *)((_BYTE *)a1 + v18 + 56);
    *(_QWORD *)(v4 + 16) = *(_QWORD *)((char *)a1 + v18 + 72);
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x200000000000LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1069;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SOURCEID_VALID",
        1069LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x200000000000LL;
    *(_DWORD *)(v4 + 24) = *(_DWORD *)((char *)a1 + v18 + 80);
    *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x4000000000000000LL;
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x400000000000LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1075;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TARGETID_VALID",
        1075LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x400000000000LL;
    *(_DWORD *)(v4 + 28) = *(_DWORD *)((char *)a1 + v18 + 84);
    if ( !_bittest64((const signed __int64 *)((char *)a1 + v18 + 56), 0x2Fu) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1079;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TARGET_OUTPUT_TECH_VALID",
        1079LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = *(_QWORD *)v4 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x800000000000LL;
    *(_QWORD *)v4 = v19;
    *(_DWORD *)(v4 + 80) = *(_DWORD *)((char *)a1 + v18 + 144);
    *(_DWORD *)(v4 + 84) = *(_DWORD *)((char *)a1 + v18 + 148);
    *(_DWORD *)(v4 + 188) = *(_DWORD *)((char *)a1 + v18 + 268);
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x4000000000000LL) != 0 )
    {
      *(_QWORD *)v4 = v19 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x4000000000000LL;
      *(_DWORD *)(v4 + 156) = *(_DWORD *)((char *)a1 + v18 + 240);
      *(_QWORD *)(v4 + 168) = *(_QWORD *)((char *)a1 + v18 + 252);
    }
    if ( !_bittest64((const signed __int64 *)((char *)a1 + v18 + 56), 0x33u) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1092;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_VIRTUAL_MODE_SUPPORT_VALID",
        1092LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v20 = *(_QWORD *)v4 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x8000000000000LL;
    *(_QWORD *)v4 = v20;
    *(_BYTE *)(v4 + 101) = *((_BYTE *)a1 + v18 + 185);
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x87) != 0 )
    {
      *(_QWORD *)v4 = v20 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x87LL;
      DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((char *)a1 + v18 + 88, v4 + 32);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x1000000) != 0 )
    {
      *(_QWORD *)v4 |= 0x1000000uLL;
      *(_DWORD *)(v4 + 196) = *(_DWORD *)((char *)a1 + v18 + 280);
      *(_DWORD *)(v4 + 200) = *(_DWORD *)((char *)a1 + v18 + 284);
      *(_DWORD *)(v4 + 212) = *(_DWORD *)((char *)a1 + v18 + 296);
    }
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x800000000LL) != 0 )
    {
      *(_QWORD *)v4 |= 0x800000000uLL;
      *(_DWORD *)(v4 + 204) = *(_DWORD *)((char *)a1 + v18 + 288);
      *(_DWORD *)(v4 + 208) = *(_DWORD *)((char *)a1 + v18 + 292);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x200LL) != 0 )
    {
      *(_QWORD *)v4 |= 0x200uLL;
      *(_DWORD *)(v4 + 104) = ConvertDmmToDisplayConfigRotation(*(unsigned int *)((char *)a1 + v18 + 188));
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x10000LL) != 0 )
    {
      *(_QWORD *)v4 |= 0x10000uLL;
      *(_DWORD *)(v4 + 112) = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v18 + 196));
    }
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x40000000000LL) != 0 )
    {
      *(_QWORD *)v4 |= 0x40000000000uLL;
      *(_DWORD *)(v4 + 108) = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v18 + 192));
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x800LL) != 0 )
    {
      *(_QWORD *)v4 |= 0x800uLL;
      *(_QWORD *)(v4 + 116) = *(_QWORD *)((char *)a1 + v18 + 200);
    }
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x1000000000000LL) != 0 )
    {
      *(_QWORD *)v4 |= 0x1000000000000uLL;
      *(_DWORD *)(v4 + 192) = *(_DWORD *)((char *)a1 + v18 + 272);
    }
    v14 = 0LL;
    v21 = *(_QWORD *)v4 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0xBF80001000000400uLL;
    *(_QWORD *)v4 = v21;
    if ( a2 || *(__int64 *)((char *)a1 + v18 + 56) < 0 )
    {
      v21 |= 0x8000000000000000uLL;
      *(_QWORD *)v4 = v21;
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x20000) != 0 )
    {
      v21 |= 0x20000uLL;
      *(_QWORD *)v4 = v21;
      *(_QWORD *)(v4 + 124) = *(_QWORD *)((char *)a1 + v18 + 208);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x100LL) != 0 )
    {
      v21 |= 0x100uLL;
      *(_QWORD *)v4 = v21;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)((char *)a1 + v18 + 152);
      *(_DWORD *)(v4 + 92) = *(_DWORD *)((char *)a1 + v18 + 156);
      *(_DWORD *)(v4 + 96) = *(_DWORD *)((char *)a1 + v18 + 172);
      *(_BYTE *)(v4 + 100) = *((_BYTE *)a1 + v18 + 184);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x800000) != 0 )
    {
      v21 |= 0x800000uLL;
      *(_QWORD *)v4 = v21;
      *(_OWORD *)(v4 + 140) = *(_OWORD *)((char *)a1 + v18 + 224);
    }
    if ( (*((_BYTE *)a1 + v18 + 56) & 8) != 0 )
    {
      *(_QWORD *)v4 = v21 | 8;
      *(_DWORD *)(v4 + 180) = GetColorDepthFromPickedWireFormat(*(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)a1 + v18 + 260));
      *(_DWORD *)(v4 + 176) = ConvertDmmToDisplayConfigColorEncoding(*(unsigned int *)((char *)a1 + v18 + 260));
      v14 = 0LL;
      *(_DWORD *)(v4 + 184) = *(_DWORD *)((char *)a1 + v18 + 264);
    }
    *(_DWORD *)(v4 + 160) = *(_DWORD *)((char *)a1 + v18 + 244);
    *(_DWORD *)(v4 + 164) = *(_DWORD *)((char *)a1 + v18 + 248);
    v4 += 216LL;
    if ( a3 )
      break;
    v17 = 0x100000000000LL;
LABEL_53:
    ++v16;
  }
  while ( v16 < *((unsigned __int16 *)a1 + 10) );
  v5 = a4;
LABEL_55:
  *((_QWORD *)v5 + 2) = v4;
  return 0LL;
}
