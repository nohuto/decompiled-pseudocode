/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x14025C7B0
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x14036B9EC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this)
{
  __int64 v2; // rax
  void *v3; // rcx
  _QWORD *v4; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v7; // rax
  void *v8; // rcx
  _QWORD *v9; // rbx
  struct DXGADAPTER *v10; // rax

  v2 = operator new(0x18uLL, 0x4E506456u, 256LL);
  v3 = (void *)*((_QWORD *)this + 49);
  v4 = (_QWORD *)v2;
  if ( (void *)v2 != v3 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  *((_QWORD *)this + 49) = v4;
  if ( !v4 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 3704;
    return 3221225495LL;
  }
  *v4 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v4[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v4[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v7 = operator new(0x18uLL, 0x4E506456u, 256LL);
  v8 = (void *)*((_QWORD *)this + 50);
  v9 = (_QWORD *)v7;
  if ( (void *)v7 != v8 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  *((_QWORD *)this + 50) = v9;
  if ( !v9 )
  {
    v10 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v10);
    WdLogGlobalForLineNumber = 3719;
    return 3221225495LL;
  }
  *v9 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
  v9[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget;
  v9[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  return 0LL;
}
