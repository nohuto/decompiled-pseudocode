/*
 * XREFs of ??1BufferingMessageCallHost@BamoImpl@Microsoft@@UEAA@XZ @ 0x1802782C8
 * Callers:
 *     ??_GBufferingMessageCallHost@BamoImpl@Microsoft@@UEAAPEAXI@Z @ 0x1802784A0 (--_GBufferingMessageCallHost@BamoImpl@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801974B8 (--1-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator@U-$pair@$$CB_KPEAVCC.c)
 *     ?_Tidy@?$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V?$allocator@UItemIdParameterIndex@BamoImpl@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18027AA24 (-_Tidy@-$vector@UItemIdParameterIndex@BamoImpl@Microsoft@@V-$allocator@UItemIdParameterIndex@Bam.c)
 */

void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::~BufferingMessageCallHost(
        Microsoft::BamoImpl::BufferingMessageCallHost *this)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = (__int64 *)*((_QWORD *)this + 10);
  if ( v1 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 11);
    while ( v1 != v3 )
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v1++);
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 10),
      (*((_QWORD *)this + 12) - *((_QWORD *)this + 10)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::vector<Microsoft::BamoImpl::ItemIdParameterIndex>::_Tidy((char *)this + 48);
  std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::~_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>((_QWORD **)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
}
