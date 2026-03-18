/*
 * XREFs of ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009E7B4
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 */

void __fastcall VIDMM_SEGMENT::OldDefragment(VIDMM_SEGMENT *this)
{
  _QWORD *v1; // rbx
  VIDMM_PHYSICAL_ADAPTER *v2; // rsi

  v1 = (_QWORD *)((char *)this + 216);
  v2 = *(VIDMM_PHYSICAL_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 40232LL)
                                  + 8LL * *((unsigned __int16 *)this + 210));
  while ( (_QWORD *)*v1 != v1 )
  {
    VIDMM_PHYSICAL_ADAPTER::EvictResources(v2, *(struct VIDMM_PHYSICAL_ALLOC **)(*v1 - 264LL), 1u, 0, 0, 0LL);
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
}
