/*
 * XREFs of ??1?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802C22BC
 * Callers:
 *     ??R?$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z @ 0x1802C235C (--R-$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802C47FC (-clear_region@-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBetter.c)
 */

void __fastcall detail::vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::~vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  if ( 0x86BCA1AF286BCA1BuLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2) )
    detail::vector_facade<CBetterCheckMPOCache::PlaneInfo,detail::buffer_impl<CBetterCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::clear_region();
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>((void **)a1);
}
