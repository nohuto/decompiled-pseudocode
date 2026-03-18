/*
 * XREFs of ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x14001C08C
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x14001BF64 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1400F878C (--0VIDMM_PAGING_QUEUE@@QEAA@PEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
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
