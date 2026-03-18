/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@URampPair@CoordMap@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@URampPair@CoordMap@@@detail@@@std@@@std@@QEAA@XZ @ 0x18022F9C0
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18019AF04 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<detail::aligned_storage_for<CoordMap::RampPair> [0],std::default_delete<detail::aligned_storage_for<CoordMap::RampPair> [0]>>::~unique_ptr<detail::aligned_storage_for<CoordMap::RampPair> [0],std::default_delete<detail::aligned_storage_for<CoordMap::RampPair> [0]>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
