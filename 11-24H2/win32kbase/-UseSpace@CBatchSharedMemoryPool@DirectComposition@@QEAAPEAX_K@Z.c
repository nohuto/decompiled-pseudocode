/*
 * XREFs of ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x14006E920
 * Callers:
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006CD70 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E744 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x14006E7E0 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006FA48 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::UseSpace(
        DirectComposition::CBatchSharedMemoryPool *this,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 5);
  v3 = 0LL;
  if ( a2 <= 4096 - v2 )
  {
    v3 = v2 + *((_QWORD *)this + 7);
    *((_QWORD *)this + 5) = v2 + a2;
  }
  return v3;
}
