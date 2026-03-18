/*
 * XREFs of ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x14004F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1400A2CAC (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_SYSMEM_SEGMENT *__fastcall VIDMM_SYSMEM_SEGMENT::`scalar deleting destructor'(
        VIDMM_SYSMEM_SEGMENT *this,
        char a2)
{
  VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
