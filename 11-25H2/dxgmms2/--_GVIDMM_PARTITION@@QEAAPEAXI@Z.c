/*
 * XREFs of ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x14004DD0C
 * Callers:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400B4204 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1400FB1E8 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x14009AC40 (--1VIDMM_PARTITION@@QEAA@XZ.c)
 */

VIDMM_PARTITION *__fastcall VIDMM_PARTITION::`scalar deleting destructor'(VIDMM_PARTITION *this)
{
  VIDMM_PARTITION::~VIDMM_PARTITION(this);
  operator delete(this);
  return this;
}
