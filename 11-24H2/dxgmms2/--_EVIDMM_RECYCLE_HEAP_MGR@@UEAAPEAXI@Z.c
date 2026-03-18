/*
 * XREFs of ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x14001D270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1400FD8B8 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 */

VIDMM_RECYCLE_HEAP_MGR *__fastcall VIDMM_RECYCLE_HEAP_MGR::`vector deleting destructor'(
        VIDMM_RECYCLE_HEAP_MGR *this,
        char a2)
{
  VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
