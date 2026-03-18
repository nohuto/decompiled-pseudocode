/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x1800CE9F4
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180107850 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180107914 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x18010A7C0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x180296860 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x1802968B0 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x18001BD04 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CD9A8 (-clear@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@.c)
 *     ??1?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800CEAF4 (--1-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTreeData::~CTreeData(CTreeData *this)
{
  void *v2; // rcx
  void *v3; // rcx
  CTreeData *v4; // rsi
  void *v5; // rbx
  void *v6; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CTreeData::`vftable';
  v2 = (void *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    operator delete(v2, 0x44uLL);
    *((_QWORD *)this + 32) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 33);
  if ( v3 )
    operator delete(v3, 0x10uLL);
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear((__int64)this + 176);
  v4 = (CTreeData *)*((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = 0LL;
  if ( v4 == (CTreeData *)((char *)this + 200) )
    v4 = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
  detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>((char *)this + 144);
  v5 = (void *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CCpuClippingData::CpuClipRealization **)this + 16));
    operator delete(v5, 0x78uLL);
  }
  v6 = (void *)*((_QWORD *)this + 14);
  if ( v6 )
    operator delete(v6, 0x44uLL);
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>((char *)this + 16);
}
