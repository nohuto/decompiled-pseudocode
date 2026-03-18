/*
 * XREFs of ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400274EC
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1400273C4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400F973C (--0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetNumDifferentPhysicalAdapters(DXGADAPTER *this)
{
  if ( *((int *)this + 684) < 0x2000 )
    return 1LL;
  else
    return *((unsigned int *)this + 74);
}
