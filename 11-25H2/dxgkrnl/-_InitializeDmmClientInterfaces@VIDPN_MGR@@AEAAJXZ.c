/*
 * XREFs of ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x140255550
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z @ 0x14025BA40 (-InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14025BAE8 (-InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODE.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x14025BBA0 (-InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERF.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDmmClientInterfaces(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct _DXGDMM_INTERFACE *v6; // rdx
  void *v7; // rcx
  DXGDMM_INTERFACE_V1_IMPL *v8; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r9
  void *v14; // rcx
  _QWORD *v15; // rdi
  struct DXGADAPTER *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  void *v19; // rcx
  _QWORD *v20; // rdi
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r9
  void *v24; // rcx
  _QWORD *v25; // rdi
  struct DXGADAPTER *v26; // rax
  __int64 v27; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v28; // rdx
  void *v29; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v30; // rdi
  struct DXGADAPTER *v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r9
  void *v35; // rcx
  _QWORD *v36; // rdi
  struct DXGADAPTER *v37; // rax
  __int64 v38; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v39; // rdx
  void *v40; // rcx
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v41; // rdi
  struct DXGADAPTER *v42; // rax

  v5 = operator new(0x58uLL, 0x4E506456u, 256LL, a4);
  v7 = (void *)*((_QWORD *)this + 57);
  v8 = (DXGDMM_INTERFACE_V1_IMPL *)v5;
  if ( (void *)v5 != v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  *((_QWORD *)this + 57) = v8;
  if ( !v8 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 3843;
    return 3221225495LL;
  }
  DXGDMM_INTERFACE_V1_IMPL::InitializeInterface(v8, v6);
  v12 = operator new(0x20uLL, 0x4E506456u, 256LL, v11);
  v14 = (void *)*((_QWORD *)this + 58);
  v15 = (_QWORD *)v12;
  if ( (void *)v12 != v14 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v14);
  *((_QWORD *)this + 58) = v15;
  if ( !v15 )
  {
    v16 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v16);
    WdLogGlobalForLineNumber = 3858;
    return 3221225495LL;
  }
  *v15 = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::GetNumSources;
  v15[1] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireFirstSourceInfo;
  v15[2] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo;
  v15[3] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v17 = operator new(0x20uLL, 0x4E506456u, 256LL, v13);
  v19 = (void *)*((_QWORD *)this + 59);
  v20 = (_QWORD *)v17;
  if ( (void *)v17 != v19 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19);
  *((_QWORD *)this + 59) = v20;
  if ( !v20 )
  {
    v21 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v21);
    WdLogGlobalForLineNumber = 3873;
    return 3221225495LL;
  }
  *v20 = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::GetNumTargets;
  v20[1] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo;
  v20[2] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo;
  v20[3] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  v22 = operator new(0x38uLL, 0x4E506456u, 256LL, v18);
  v24 = (void *)*((_QWORD *)this + 60);
  v25 = (_QWORD *)v22;
  if ( (void *)v22 != v24 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
  *((_QWORD *)this + 60) = v25;
  if ( !v25 )
  {
    v26 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v26);
    WdLogGlobalForLineNumber = 3889;
    return 3221225495LL;
  }
  *v25 = DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology;
  v25[1] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet;
  v25[2] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet;
  v25[3] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet;
  v25[4] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet;
  v25[5] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet;
  v25[6] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet;
  v27 = operator new(0x88uLL, 0x4E506456u, 256LL, v23);
  v29 = (void *)*((_QWORD *)this + 61);
  v30 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v27;
  if ( (void *)v27 != v29 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
  *((_QWORD *)this + 61) = v30;
  if ( !v30 )
  {
    v31 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v31);
    WdLogGlobalForLineNumber = 3904;
    return 3221225495LL;
  }
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v30, v28);
  v33 = operator new(0x38uLL, 0x4E506456u, 256LL, v32);
  v35 = (void *)*((_QWORD *)this + 62);
  v36 = (_QWORD *)v33;
  if ( (void *)v33 != v35 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v35);
  *((_QWORD *)this + 62) = v36;
  if ( !v36 )
  {
    v37 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v37);
    WdLogGlobalForLineNumber = 3919;
    return 3221225495LL;
  }
  *v36 = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes;
  v36[1] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo;
  v36[2] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo;
  v36[3] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo;
  v36[4] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo;
  v36[5] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode;
  v36[6] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode;
  v38 = operator new(0x60uLL, 0x4E506456u, 256LL, v34);
  v40 = (void *)*((_QWORD *)this + 63);
  v41 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v38;
  if ( (void *)v38 != v40 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v40);
  *((_QWORD *)this + 63) = v41;
  if ( !v41 )
  {
    v42 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v42);
    WdLogGlobalForLineNumber = 3934;
    return 3221225495LL;
  }
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v41, v39);
  return 0LL;
}
