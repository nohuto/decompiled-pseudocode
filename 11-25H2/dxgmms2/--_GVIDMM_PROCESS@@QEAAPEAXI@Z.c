/*
 * XREFs of ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x14002864C
 * Callers:
 *     VidMmTerminateProcess @ 0x140028630 (VidMmTerminateProcess.c)
 *     VidMmCreateProcess @ 0x14003F6C0 (VidMmCreateProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400B3E4C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 */

VIDMM_PROCESS *__fastcall VIDMM_PROCESS::`scalar deleting destructor'(VIDMM_PROCESS *this)
{
  VIDMM_PROCESS::~VIDMM_PROCESS(this);
  operator delete(this);
  return this;
}
