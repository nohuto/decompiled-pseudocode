/*
 * XREFs of ??1CTreeData@@UEAA@XZ @ 0x180032F54
 * Callers:
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800323F0 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800324F0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x1800325B4 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x18028B3E0 (--_ECDesktopTreeData@@UEAAPEAXI@Z.c)
 *     ??_ECTreeData@@UEAAPEAXI@Z @ 0x18028B430 (--_ECTreeData@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180031ECC (--1-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$buff.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800F63E4 (--1CCpuClippingData@@QEAA@XZ.c)
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1801EAA60 (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ??1?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAA@XZ @ 0x1801EB284 (--1-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILMatrix@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@XZ @ 0x1801EFCC8 (--1-$unique_ptr@VCSharedCircularQueueProducer@@U-$default_delete@VCSharedCircularQueueProducer@@.c)
 *     ??1?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801F552C (--1-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@std@@@std@.c)
 */

void __fastcall CTreeData::~CTreeData(void **this)
{
  *this = &CTreeData::`vftable';
  SAFE_DELETE<CMILMatrix>(this + 32);
  std::unique_ptr<CSharedCircularQueueProducer>::~unique_ptr<CSharedCircularQueueProducer>(this + 34);
  std::unique_ptr<CMILMatrix>::~unique_ptr<CMILMatrix>(this + 33);
  detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::~vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>(this + 22);
  detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>(this + 18);
  CCpuClippingData::~CCpuClippingData((CCpuClippingData *)(this + 9));
  detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>(this + 2);
}
