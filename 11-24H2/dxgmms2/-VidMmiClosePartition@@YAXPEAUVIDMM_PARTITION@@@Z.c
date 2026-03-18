/*
 * XREFs of ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1400BC1A8
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400AA4F4 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1400BBDF4 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x14004D6CC (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 */

void __fastcall VidMmiClosePartition(struct VIDMM_PARTITION *this)
{
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 9, 0xFFFFFFFF) == 1 )
  {
    RtlAvlRemoveNode(&VIDMM_PARTITION::_PartitionTree, this);
    if ( this )
      VIDMM_PARTITION::`scalar deleting destructor'(this);
  }
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
}
