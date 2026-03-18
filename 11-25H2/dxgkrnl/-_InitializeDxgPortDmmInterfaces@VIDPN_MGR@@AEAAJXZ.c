/*
 * XREFs of ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x140255910
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDxgPortDmmInterfaces(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  void *v7; // rcx
  _QWORD *v8; // rbx
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 v11; // rax
  void *v12; // rcx
  _QWORD *v13; // rbx
  struct DXGADAPTER *v14; // rax

  v5 = operator new(0x18uLL, 0x4E506456u, 256LL, a4);
  v7 = (void *)*((_QWORD *)this + 49);
  v8 = (_QWORD *)v5;
  if ( (void *)v5 != v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  *((_QWORD *)this + 49) = v8;
  if ( !v8 )
  {
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, ContainingAdapter);
    WdLogGlobalForLineNumber = 3704;
    return 3221225495LL;
  }
  *v8 = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::CreateNewSourceInfo;
  v8[1] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::AddSource;
  v8[2] = DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::ReleaseSourceInfo;
  v11 = operator new(0x18uLL, 0x4E506456u, 256LL, v6);
  v12 = (void *)*((_QWORD *)this + 50);
  v13 = (_QWORD *)v11;
  if ( (void *)v11 != v12 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
  *((_QWORD *)this + 50) = v13;
  if ( !v13 )
  {
    v14 = VIDPN_MGR::GetContainingAdapter(this);
    WdLogSingleEntry1(6LL, v14);
    WdLogGlobalForLineNumber = 3719;
    return 3221225495LL;
  }
  *v13 = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo;
  v13[1] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AddStaticTarget;
  v13[2] = DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
  return 0LL;
}
