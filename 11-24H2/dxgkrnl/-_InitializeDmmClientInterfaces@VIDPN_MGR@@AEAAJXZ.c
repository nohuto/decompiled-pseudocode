/*
 * XREFs of ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025C3F0
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z @ 0x140262940 (-InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1402629E8 (-InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODE.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x140262AA0 (-InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERF.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDmmClientInterfaces(VIDPN_MGR *this)
{
  __int64 v2; // rax
  struct _DXGDMM_INTERFACE *v3; // rdx
  void *v4; // rcx
  DXGDMM_INTERFACE_V1_IMPL *v5; // rdi
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v8; // rax
  void *v9; // rcx
  _QWORD *v10; // rdi
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  _QWORD *v14; // rdi
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rax
  void *v17; // rcx
  _QWORD *v18; // rdi
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v21; // rdx
  void *v22; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v23; // rdi
  struct DXGADAPTER *v24; // rax
  __int64 v25; // rax
  void *v26; // rcx
  _QWORD *v27; // rdi
  struct DXGADAPTER *v28; // rax
  __int64 v29; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v30; // rdx
  void *v31; // rcx
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v32; // rdi
  struct DXGADAPTER *v33; // rax

  v2 = operator new(0x58uLL, 0x4E506456u, 256LL);
  v4 = (void *)*((_QWORD *)this + 57);
  v5 = (DXGDMM_INTERFACE_V1_IMPL *)v2;
  if ( (void *)v2 != v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  *((_QWORD *)this + 57) = v5;
  if ( !v5 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 3843;
    return 3221225495LL;
  }
  DXGDMM_INTERFACE_V1_IMPL::InitializeInterface(v5, v3);
  v8 = operator new(0x20uLL, 0x4E506456u, 256LL);
  v9 = (void *)*((_QWORD *)this + 58);
  v10 = (_QWORD *)v8;
  if ( (void *)v8 != v9 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  *((_QWORD *)this + 58) = v10;
  if ( !v10 )
  {
    v11 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v11);
    WdLogGlobalForLineNumber = 3858;
    return 3221225495LL;
  }
  *v10 = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::GetNumSources;
  v10[1] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireFirstSourceInfo;
  v10[2] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AcquireNextSourceInfo;
  v10[3] = DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v12 = operator new(0x20uLL, 0x4E506456u, 256LL);
  v13 = (void *)*((_QWORD *)this + 59);
  v14 = (_QWORD *)v12;
  if ( (void *)v12 != v13 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  *((_QWORD *)this + 59) = v14;
  if ( !v14 )
  {
    v15 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v15);
    WdLogGlobalForLineNumber = 3873;
    return 3221225495LL;
  }
  *v14 = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::GetNumTargets;
  v14[1] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo;
  v14[2] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo;
  v14[3] = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  v16 = operator new(0x38uLL, 0x4E506456u, 256LL);
  v17 = (void *)*((_QWORD *)this + 60);
  v18 = (_QWORD *)v16;
  if ( (void *)v16 != v17 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v17);
  *((_QWORD *)this + 60) = v18;
  if ( !v18 )
  {
    v19 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v19);
    WdLogGlobalForLineNumber = 3889;
    return 3221225495LL;
  }
  *v18 = DXGDMM_VIDPN_INTERFACE_V1_IMPL::GetTopology;
  v18[1] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet;
  v18[2] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseSourceModeSet;
  v18[3] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet;
  v18[4] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseTargetModeSet;
  v18[5] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet;
  v18[6] = DXGDMM_VIDPN_INTERFACE_V1_IMPL::ReleaseMonitorSourceModeSet;
  v20 = operator new(0x88uLL, 0x4E506456u, 256LL);
  v22 = (void *)*((_QWORD *)this + 61);
  v23 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v20;
  if ( (void *)v20 != v22 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
  *((_QWORD *)this + 61) = v23;
  if ( !v23 )
  {
    v24 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v24);
    WdLogGlobalForLineNumber = 3904;
    return 3221225495LL;
  }
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v23, v21);
  v25 = operator new(0x38uLL, 0x4E506456u, 256LL);
  v26 = (void *)*((_QWORD *)this + 62);
  v27 = (_QWORD *)v25;
  if ( (void *)v25 != v26 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
  *((_QWORD *)this + 62) = v27;
  if ( !v27 )
  {
    v28 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v28);
    WdLogGlobalForLineNumber = 3919;
    return 3221225495LL;
  }
  *v27 = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes;
  v27[1] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo;
  v27[2] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo;
  v27[3] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo;
  v27[4] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo;
  v27[5] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode;
  v27[6] = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode;
  v29 = operator new(0x60uLL, 0x4E506456u, 256LL);
  v31 = (void *)*((_QWORD *)this + 63);
  v32 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v29;
  if ( (void *)v29 != v31 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
  *((_QWORD *)this + 63) = v32;
  if ( !v32 )
  {
    v33 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v33);
    WdLogGlobalForLineNumber = 3934;
    return 3221225495LL;
  }
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v32, v30);
  return 0LL;
}
