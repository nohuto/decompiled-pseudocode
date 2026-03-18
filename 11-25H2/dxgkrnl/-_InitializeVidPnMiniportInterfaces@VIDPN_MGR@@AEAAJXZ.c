/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x140255A34
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x140010FF0 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x14025EA7C (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14025EB08 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x14025EB94 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x14025EC20 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x14025ECD8 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x14025ED80 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(void **this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  struct _DXGK_VIDPN_INTERFACE *v6; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v7; // rcx
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v10; // r9
  void *v11; // rax
  struct _DXGK_VIDPN_INTERFACE *v12; // rdx
  DXGK_VIDPN_INTERFACE_V2_IMPL *v13; // rcx
  struct DXGADAPTER *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v17; // rdx
  void *v18; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v19; // rbx
  struct DXGADAPTER *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v23; // rdx
  void *v24; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v25; // rbx
  struct DXGADAPTER *v26; // rax
  __int64 v27; // r9
  void *v28; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v29; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v30; // rcx
  struct DXGADAPTER *v31; // rax
  __int64 v32; // r9
  void *v33; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v34; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *v35; // rcx
  struct DXGADAPTER *v36; // rax

  v5 = (void *)operator new(0x58uLL, 0x4E506456u, 256LL, a4);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 51, v5);
  v7 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)this[51];
  if ( !v7 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 3743;
    return 3221225495LL;
  }
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v7, v6);
  v11 = (void *)operator new(0x58uLL, 0x4E506456u, 256LL, v10);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 52, v11);
  v13 = (DXGK_VIDPN_INTERFACE_V2_IMPL *)this[52];
  if ( !v13 )
  {
    v14 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v14);
    WdLogGlobalForLineNumber = 3758;
    return 3221225495LL;
  }
  DXGK_VIDPN_INTERFACE_V2_IMPL::InitializeInterface(v13, v12);
  v16 = operator new(0x60uLL, 0x4E506456u, 256LL, v15);
  v18 = this[53];
  v19 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v16;
  if ( (void *)v16 != v18 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
  this[53] = v19;
  if ( !v19 )
  {
    v20 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v20);
    WdLogGlobalForLineNumber = 3773;
    return 3221225495LL;
  }
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v19, v17);
  v22 = operator new(0x40uLL, 0x4E506456u, 256LL, v21);
  v24 = this[54];
  v25 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v22;
  if ( (void *)v22 != v24 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
  this[54] = v25;
  if ( !v25 )
  {
    v26 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v26);
    WdLogGlobalForLineNumber = 3788;
    return 3221225495LL;
  }
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v25, v23);
  v28 = (void *)operator new(0x40uLL, 0x4E506456u, 256LL, v27);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 55, v28);
  v30 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)this[55];
  if ( !v30 )
  {
    v31 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v31);
    WdLogGlobalForLineNumber = 3803;
    return 3221225495LL;
  }
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v30, v29);
  v33 = (void *)operator new(0x40uLL, 0x4E506456u, 256LL, v32);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 56, v33);
  v35 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *)this[56];
  if ( !v35 )
  {
    v36 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v36);
    WdLogGlobalForLineNumber = 3818;
    return 3221225495LL;
  }
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL::InitializeInterface(v35, v34);
  return 0LL;
}
