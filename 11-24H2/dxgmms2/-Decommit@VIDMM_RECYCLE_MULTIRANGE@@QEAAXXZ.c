/*
 * XREFs of ?Decommit@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400C5600
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x1400F9CC0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@@Z.c)
 * Callees:
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x14008F008 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C6EF0 (-Decommit@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1400CB42C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Decommit(VIDMM_RECYCLE_MULTIRANGE *this)
{
  VIDMM_RECYCLE_RANGE *v1; // rbx
  __int64 v3; // rcx

  v1 = (VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    VIDMM_RECYCLE_RANGE::Decommit(v1);
    if ( v1 == *((VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
    v3 = *((_QWORD *)v1 + 15);
    if ( v3 == *((_QWORD *)v1 + 9) + 72LL )
      v1 = 0LL;
    else
      v1 = (VIDMM_RECYCLE_RANGE *)(v3 - 120);
  }
  VIDMM_RECYCLE_HEAP::IntegrateMultirangeIntoTrees(*(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 10) + 32LL), this);
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(
    *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL),
    this);
}
