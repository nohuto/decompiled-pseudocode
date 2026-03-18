/*
 * XREFs of ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400EC0DC
 * Callers:
 *     ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x140092CD0 (-ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GR.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B1FC4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEBAXIPEA_K00000@Z @ 0x1400EBD60 (-GetTotalSegmentSize@VIDMM_GLOBAL@@QEBAXIPEA_K00000@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400EBF58 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K22222@Z @ 0x1400F8B58 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 * Callees:
 *     <none>
 */

const struct VIDMM_SEGMENT_GROUP_STATE *__fastcall VIDMM_GLOBAL::GetSegmentGroupState(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PARTITION *a4)
{
  __int64 v4; // r10
  __int64 v5; // r8

  v4 = a3;
  v5 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * a2);
  if ( (*(_BYTE *)(v5 + 24 * v4 + 552) & 1) != 0 )
    return (const struct VIDMM_SEGMENT_GROUP_STATE *)(*(_QWORD *)(384LL
                                                                * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL)
                                                                + *((_QWORD *)a4 + 5)
                                                                + 24)
                                                    + 344LL * a2);
  else
    return (const struct VIDMM_SEGMENT_GROUP_STATE *)(v5 + 344 * v4 + 584);
}
