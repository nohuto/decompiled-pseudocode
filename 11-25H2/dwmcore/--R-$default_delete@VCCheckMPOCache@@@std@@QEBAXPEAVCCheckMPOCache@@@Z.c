/*
 * XREFs of ??R?$default_delete@VCCheckMPOCache@@@std@@QEBAXPEAVCCheckMPOCache@@@Z @ 0x1801E8328
 * Callers:
 *     ??1?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1801E82D8 (--1-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E82F8 (--$-4U-$default_delete@VCCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCCheckMPOCache@@U-$default_dele.c)
 * Callees:
 *     ??1?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801E8358 (--1-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vl.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CCheckMPOCache>::operator()(__int64 a1, void *a2)
{
  if ( a2 )
  {
    detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::~vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>(a2);
    operator delete(a2, 0x3E8uLL);
  }
}
