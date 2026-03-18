/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x14025C8B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14003EA0C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140186A28 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1402D0F84 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402D12C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402D1388 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 Container; // rdi
  struct DXGADAPTER *ContainingAdapter; // r15
  __int64 v22; // r8
  ADAPTER_DISPLAY *v23; // rcx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+48h] [rbp-19h] BYREF
  __int64 v31; // [rsp+50h] [rbp-11h]
  char v32; // [rsp+58h] [rbp-9h]
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v33; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v34[24]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v35[24]; // [rsp+90h] [rbp+2Fh] BYREF

  v30 = -1;
  v31 = 0LL;
  v4 = (unsigned int)a2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, a3, 6025);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v30, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v7 = v5;
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 2901;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v30);
    }
    return 3223192320LL;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v5 + 76)) - 1) & *(_WORD *)(v5 + 78)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2910;
  }
  LOBYTE(v6) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v34, v7 + 56, v6);
  v11 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v7, v4);
  v16 = v11;
  if ( v11 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    v17[3] = v7;
    v17[4] = v4;
    v17[5] = v16;
    WdLogGlobalForLineNumber = 2923;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit, v19, v30);
    return (unsigned int)v16;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v34);
  if ( *(_QWORD *)(v7 + 24) != v7 + 24 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v7 + 160);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2943;
    }
    if ( ((unsigned __int16)((2 << *(_BYTE *)(v7 + 76)) - 1) & *(_WORD *)(v7 + 78)) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2951;
    }
    LOBYTE(v22) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v35, v7 + 56, v22);
    *((_DWORD *)&v33.EnumPivot + 2) = 0;
    v33.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
    v33.EnumPivot.VidPnSourceId = -1;
    v33.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v23 = (ADAPTER_DISPLAY *)*((_QWORD *)ContainingAdapter + 390);
    v33.EnumPivot.VidPnTargetId = -1;
    v24 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v23, &v33);
    v25 = v24;
    if ( v24 < 0 )
    {
      WdLogSingleEntry3(2LL, Container, v4, v24);
      WdLogGlobalForLineNumber = 2975;
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit, v27, v30);
      return v25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v35);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit, v29, v30);
  return 0LL;
}
