/*
 * XREFs of ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x14004EA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1400A1768 (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 */

VIDMM_PROCESS_HEAP *__fastcall VIDMM_PROCESS_HEAP::`scalar deleting destructor'(VIDMM_PROCESS_HEAP *this, char a2)
{
  VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
