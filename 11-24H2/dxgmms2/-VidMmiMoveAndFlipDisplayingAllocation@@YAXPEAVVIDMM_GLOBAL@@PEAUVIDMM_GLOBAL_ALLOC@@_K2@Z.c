/*
 * XREFs of ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1400A61D8
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400A5AFC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140036EF0 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     VidSchiUpdateFlipQueueEntriesForMove @ 0x1400501B8 (VidSchiUpdateFlipQueueEntriesForMove.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z @ 0x1400B0558 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EG_K@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400E5E04 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTE.c)
 */

void __fastcall VidMmiMoveAndFlipDisplayingAllocation(
        struct VIDMM_GLOBAL *a1,
        struct VIDMM_GLOBAL_ALLOC *a2,
        union _LARGE_INTEGER a3,
        union _LARGE_INTEGER a4)
{
  __int64 v4; // rbx
  int v7; // r8d
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rdx
  union _LARGE_INTEGER v10; // [rsp+80h] [rbp+18h] BYREF
  union _LARGE_INTEGER v11; // [rsp+88h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v4 = *(_QWORD *)a2;
  VIDMM_GLOBAL::MemoryTransfer(
    a1,
    a2,
    *(_QWORD *)(*(_QWORD *)a2 + 16LL),
    0LL,
    *(struct VIDMM_SEGMENT **)(*(_QWORD *)a2 + 64LL),
    &v10,
    0LL,
    *(struct VIDMM_SEGMENT **)(*(_QWORD *)a2 + 64LL),
    &v11,
    0LL,
    0);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, *((_DWORD *)a2 + 6) & 0x3F);
  *(union _LARGE_INTEGER *)(v4 + 72) = v11;
  if ( (**((_DWORD **)a2 + 49) & 0x10000) != 0 )
  {
    v8 = VIDMM_SEGMENT::DriverId(*(VIDMM_SEGMENT **)(v4 + 64));
    VIDMM_GLOBAL::NotifyResidency(a1, a2, 1u, v8, v9);
  }
  VidSchiUpdateFlipQueueEntriesForMove(
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 744LL),
    *((_QWORD *)a2 + 49),
    v7,
    *(_QWORD *)(*(_QWORD *)(v4 + 64) + 48LL),
    *(_QWORD *)(v4 + 72));
}
