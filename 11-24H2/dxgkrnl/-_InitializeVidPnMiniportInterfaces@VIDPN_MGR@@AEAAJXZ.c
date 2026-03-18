/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025C8D4
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x140020480 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x14026597C (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140265A08 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140265A94 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x140265B20 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x140265BD8 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x140265C80 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(void **this)
{
  void *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v4; // rcx
  struct DXGADAPTER *ContainingAdapter; // rax
  void *v7; // rax
  struct _DXGK_VIDPN_INTERFACE *v8; // rdx
  DXGK_VIDPN_INTERFACE_V2_IMPL *v9; // rcx
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v12; // rdx
  void *v13; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v14; // rbx
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v17; // rdx
  void *v18; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v19; // rbx
  struct DXGADAPTER *v20; // rax
  void *v21; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v22; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v23; // rcx
  struct DXGADAPTER *v24; // rax
  void *v25; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v26; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *v27; // rcx
  struct DXGADAPTER *v28; // rax

  v2 = (void *)operator new(0x58uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 51, v2);
  v4 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)this[51];
  if ( !v4 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 3743;
    return 3221225495LL;
  }
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v4, v3);
  v7 = (void *)operator new(0x58uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 52, v7);
  v9 = (DXGK_VIDPN_INTERFACE_V2_IMPL *)this[52];
  if ( !v9 )
  {
    v10 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v10);
    WdLogGlobalForLineNumber = 3758;
    return 3221225495LL;
  }
  DXGK_VIDPN_INTERFACE_V2_IMPL::InitializeInterface(v9, v8);
  v11 = operator new(0x60uLL, 0x4E506456u, 256LL);
  v13 = this[53];
  v14 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v11;
  if ( (void *)v11 != v13 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
  this[53] = v14;
  if ( !v14 )
  {
    v15 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v15);
    WdLogGlobalForLineNumber = 3773;
    return 3221225495LL;
  }
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v14, v12);
  v16 = operator new(0x40uLL, 0x4E506456u, 256LL);
  v18 = this[54];
  v19 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v16;
  if ( (void *)v16 != v18 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
  this[54] = v19;
  if ( !v19 )
  {
    v20 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v20);
    WdLogGlobalForLineNumber = 3788;
    return 3221225495LL;
  }
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v19, v17);
  v21 = (void *)operator new(0x40uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 55, v21);
  v23 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)this[55];
  if ( !v23 )
  {
    v24 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v24);
    WdLogGlobalForLineNumber = 3803;
    return 3221225495LL;
  }
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v23, v22);
  v25 = (void *)operator new(0x40uLL, 0x4E506456u, 256LL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 56, v25);
  v27 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *)this[56];
  if ( !v27 )
  {
    v28 = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
    WdLogSingleEntry1(6LL, v28);
    WdLogGlobalForLineNumber = 3818;
    return 3221225495LL;
  }
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL::InitializeInterface(v27, v26);
  return 0LL;
}
