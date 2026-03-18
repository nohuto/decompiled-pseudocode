/*
 * XREFs of ?VerifyTransfer@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A6110
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140101FA4 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::VerifyTransfer(VIDMM_MEMORY_SEGMENT *this, int a2, int a3)
{
  char v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
    *((_QWORD *)this + 26),
    a2,
    a3,
    0,
    (__int64)VIDMM_SEGMENT::SaveResourceCB,
    (__int64)this,
    0LL,
    (__int64)&v7,
    (__int64)&v6);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210));
  VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
    *((_QWORD *)this + 26),
    a2,
    a3,
    0,
    (__int64)VIDMM_SEGMENT::RestoreResourceCB,
    (__int64)this,
    0LL,
    (__int64)&v7,
    (__int64)&v6);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 3), *((unsigned __int16 *)this + 210));
}
