/*
 * XREFs of ??1CLegacySwapChain@@MEAA@XZ @ 0x1802D2C58
 * Callers:
 *     ??_GCLegacySwapChain@@MEAAPEAXI@Z @ 0x18022EFC0 (--_GCLegacySwapChain@@MEAAPEAXI@Z.c)
 *     ??1CLegacyStereoSwapChain@@UEAA@XZ @ 0x1802D38A8 (--1CLegacyStereoSwapChain@@UEAA@XZ.c)
 *     ??1CConversionSwapChain@@UEAA@XZ @ 0x1802D4210 (--1CConversionSwapChain@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801C5C7C (--1-$vector_facade@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ @ 0x1801C5CC8 (-ReleaseBackBuffer@CLegacySwapChain@@IEAAXXZ.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1802187B4 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ??1?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18025A9A0 (--1-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource@CLegacySwa.c)
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x1802C42B8 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1802D2BA0 (--1-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@.c)
 */

void __fastcall CLegacySwapChain::~CLegacySwapChain(CLegacySwapChain *this)
{
  CD3DDevice *v2; // rcx

  *(_QWORD *)this = &CLegacySwapChain::`vftable'{for `COverlaySwapChain'};
  *((_QWORD *)this + 3) = &CLegacySwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 4) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CConversionSwapChain::`vftable'{for `IScribbleSwapChain'};
  *((_QWORD *)this + 35) = &CLegacyStereoSwapChain::`vftable';
  CScribbleSwapChain::ReleaseComputeScribbleResources(this);
  v2 = (CD3DDevice *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CD3DDevice::ProcessDelayUnpinForTarget(v2, *(struct _LUID *)((char *)this + 76), *((_DWORD *)this + 18), 0);
    *(_BYTE *)(*((_QWORD *)this + 8) + 1500LL) = 1;
  }
  CLegacySwapChain::ReleaseBackBuffer(this);
  std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::~_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>((__int64 *)this + 53);
  detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>((void **)this + 47);
  detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::~vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>((void **)this + 38);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 36);
  CScribbleSwapChain::~CScribbleSwapChain((CGlobalDrawingContext **)this);
}
