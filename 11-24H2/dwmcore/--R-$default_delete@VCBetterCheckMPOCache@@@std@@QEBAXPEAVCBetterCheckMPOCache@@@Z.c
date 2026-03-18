/*
 * XREFs of ??R?$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z @ 0x1802B8D1C
 * Callers:
 *     ??$?4U?$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8064 (--$-4U-$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCBetterCheckMPOCache@@U-$.c)
 *     ??1?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAA@XZ @ 0x1802B8C3C (--1-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAA.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802B8C7C (--1-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBetterCheckMPOCac.c)
 */

void __fastcall std::default_delete<CBetterCheckMPOCache>::operator()(__int64 a1, void *a2)
{
  if ( a2 )
  {
    detail::vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::~vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>((__int64)a2);
    operator delete(a2);
  }
}
