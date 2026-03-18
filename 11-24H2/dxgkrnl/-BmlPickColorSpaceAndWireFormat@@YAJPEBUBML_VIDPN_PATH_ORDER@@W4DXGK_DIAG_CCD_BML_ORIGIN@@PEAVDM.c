/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x140365490
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1403635A4 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x140040610 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline @ 0x140090DBC (Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1402698C8 (-IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ @ 0x1403146CC (-IsHdrAllowedOnVidPnPath@DMMVIDPNPRESENTPATH@@QEBA_NXZ.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1403B90CC (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     ?MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403D9250 (-MonitorGetDitheringCaps@@YAJPEAUHDXGMONITOR__@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403F0F0C (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1403F6A84 (BmlDoesTargetModeSupportWireFormat.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v4; // ecx
  DMMVIDPNTOPOLOGY *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  struct DMMVIDPNPRESENTPATH *Path; // rax
  struct DMMVIDPNPRESENTPATH *v12; // r15
  struct DMMVIDPNTARGETMODE *v13; // r13
  __int64 v14; // rax
  int DitheringCaps; // eax
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned int v18; // ebx
  int v19; // r14d
  bool v20; // zf
  unsigned int v21; // ebx
  __int64 v22; // rcx
  int v23; // ecx
  bool v24; // si
  struct DMMVIDPNTARGETMODESET *v25; // rax
  VIDPN_MGR *v26; // rcx
  const struct DMMVIDPNSOURCEMODESET *v27; // rbx
  const struct DXGADAPTER *ContainingAdapter; // rax
  char v29; // al
  char v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rcx
  bool v33; // bl
  _BOOL8 v34; // rcx
  unsigned int v35; // eax
  __int64 result; // rax
  int v37; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-34h]
  struct DMMVIDPNTARGETMODESET *v39; // [rsp+38h] [rbp-30h] BYREF
  struct DMMVIDPNTARGETMODESET *v40; // [rsp+40h] [rbp-28h] BYREF
  struct DMMVIDPNTARGETMODESET *v41; // [rsp+48h] [rbp-20h] BYREF
  DMMVIDPNTOPOLOGY *i; // [rsp+50h] [rbp-18h]
  unsigned int v43; // [rsp+B0h] [rbp+48h] BYREF
  int v44; // [rsp+B8h] [rbp+50h]
  __int64 v45; // [rsp+C0h] [rbp+58h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v46; // [rsp+C8h] [rbp+60h] BYREF

  v45 = a3;
  v44 = a2;
  v4 = 0;
  v38 = 0;
  if ( *a1 )
  {
    v5 = (DMMVIDPNTOPOLOGY *)(a3 + 96);
    for ( i = (DMMVIDPNTOPOLOGY *)(a3 + 96); ; v5 = i )
    {
      v6 = v4;
      v7 = 120LL * v4;
      v8 = *(_QWORD *)&a1[v7 + 16];
      v9 = *(unsigned int *)(v8 + 28);
      v10 = *(unsigned int *)(v8 + 24);
      Path = DMMVIDPNTOPOLOGY::FindPath(v5, *(_DWORD *)(v8 + 24), *(_DWORD *)(v8 + 28));
      v12 = Path;
      if ( !Path )
      {
        WdLogSingleEntry5(2LL, v6, a1, v10, v9, v45);
        result = 3223192345LL;
        WdLogGlobalForLineNumber = 5894;
        return result;
      }
      v39 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)Path + 12));
      v13 = (struct DMMVIDPNTARGETMODE *)*((_QWORD *)v39 + 18);
      if ( !v13 )
      {
        WdLogSingleEntry2(2LL, *(unsigned int *)(*(_QWORD *)&a1[v7 + 16] + 28LL), v45);
        WdLogGlobalForLineNumber = 5907;
        v21 = -1071774967;
        goto LABEL_57;
      }
      v14 = *((_QWORD *)v12 + 12);
      v46.Value = 0;
      DitheringCaps = MonitorGetDitheringCaps(*(struct HDXGMONITOR__ **)(*(_QWORD *)(v14 + 96) + 112LL), &v46);
      v16 = v45;
      if ( DitheringCaps < 0 )
      {
        WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&a1[v7 + 16] + 28LL), v45, DitheringCaps);
        v46.Value = 0;
        WdLogGlobalForLineNumber = 5929;
      }
      v17 = *(_QWORD *)&a1[v7 + 16];
      v43 = 0;
      v37 = *((_DWORD *)v13 + 32);
      if ( (*(_BYTE *)v17 & 8) == 0 )
        goto LABEL_19;
      v18 = *(_DWORD *)(v17 + 204);
      v19 = *(_DWORD *)(v17 + 208);
      if ( !(unsigned __int8)BmlDoesTargetModeSupportWireFormat(v13, v18) )
        break;
      v43 = v18;
      if ( (unsigned int)(v19 - 31) > 2 )
        goto LABEL_14;
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304880)
        && (*((_DWORD *)VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v16 + 48)) + 111) & 8) == 0 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(*(_QWORD *)&a1[v7 + 16] + 28LL));
        WdLogGlobalForLineNumber = 5964;
        v21 = -1073741811;
        goto LABEL_57;
      }
      if ( v19 == 32 )
      {
        v20 = (*(_DWORD *)&a1[v7 + 116] & 2) == 0;
      }
      else
      {
LABEL_14:
        if ( v19 != 33 )
          goto LABEL_52;
        v20 = (*(_DWORD *)&a1[v7 + 116] & 4) == 0;
      }
      if ( v20 )
      {
        v21 = -1073741637;
LABEL_57:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v39, 0LL);
        return v21;
      }
LABEL_52:
      *((_DWORD *)v13 + 33) = v43;
      *((_DWORD *)v13 + 34) = v19;
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v39, 0LL);
      v35 = *a1;
      v4 = v38 + 1;
      v38 = v4;
      if ( v4 >= v35 )
        return 0LL;
    }
    v22 = *(_QWORD *)&a1[v7 + 16];
    if ( (*(_BYTE *)(v22 + 8) & 8) != 0 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v22 + 28));
      WdLogGlobalForLineNumber = 5986;
      v21 = -1071774902;
      goto LABEL_57;
    }
LABEL_19:
    if ( (a1[v7 + 132] & 2) != 0
      && (*(_DWORD *)&a1[v7 + 116] & 1) != 0
      && DMMVIDPNPRESENTPATH::IsHdrAllowedOnVidPnPath(v12)
      && ModeSupportsHighDepthColorFormat(v13, &v46)
      && (a1[v7 + 132] & 1) == 0 )
    {
      v24 = 0;
      if ( v44 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
      {
        v23 = *(_DWORD *)(*(_QWORD *)&a1[v7 + 16] + 116LL);
        if ( v23 != 36 && v23 != 113 )
          v24 = 1;
      }
      v25 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v12 + 11));
      v26 = *(VIDPN_MGR **)(v16 + 48);
      v27 = v25;
      v40 = v25;
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v26);
      v29 = IsHdrSourceModePinned(ContainingAdapter, v27);
      v19 = v29 != 0 ? (!v24 ? 0xC : 0) : 0;
      if ( (int)PickWireFormatWithPreference((4 * !v24) & (unsigned int)-(v29 != 0), &v37, &v46, &v43) < 0 )
      {
        v43 = v43 & 0xFFFFFF03 | 8;
        v19 = 0;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6053;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v40, 0LL);
    }
    else if ( (a1[v7 + 132] & 0xC) == 0xC && ModeSupportsHighDepthColorFormat(v13, &v46) && (v30 & 1) == 0 )
    {
      v31 = 3;
      v19 = 30;
      if ( (unsigned int)Feature_HdrRequireSourcePixelFormat__private_IsEnabledDeviceUsageNoInline() )
      {
        v41 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v12 + 11));
        v32 = *((_QWORD *)v41 + 18);
        v33 = v32 && *(_DWORD *)(v32 + 72) == 1 && *(_DWORD *)(v32 + 96) == 113;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v41, 0LL);
        v19 = v33 ? 0x1E : 0;
        v31 = 2 * v33 + 1;
      }
      if ( (int)PickWireFormatWithPreference(v31, &v37, &v46, &v43) < 0 )
      {
        v43 = v43 & 0xFFFFFF03 | 8;
        v19 = 0;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6095;
      }
    }
    else
    {
      v19 = 0;
      v34 = v44 != 2
         || (*((_DWORD *)a1 + 1) & 0x8000000) != 0
         || ((*(_DWORD *)(*(_QWORD *)&a1[v7 + 16] + 116LL) - 31) & 0xFFFFFFFB) != 0;
      if ( (int)PickWireFormatWithPreference(v34, &v37, &v46, &v43) < 0 )
      {
        v43 = v43 & 0xFFFFFF03 | 8;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6130;
      }
    }
    goto LABEL_52;
  }
  return 0LL;
}
