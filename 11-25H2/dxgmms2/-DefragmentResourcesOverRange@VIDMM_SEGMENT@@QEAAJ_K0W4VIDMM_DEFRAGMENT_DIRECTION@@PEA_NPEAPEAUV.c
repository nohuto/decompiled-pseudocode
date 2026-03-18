/*
 * XREFs of ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009C8BC
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140110E58 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x140093400 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ @ 0x140093E4C (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x14009E330 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z@Z @ 0x14009EAC4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140103044 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::DefragmentResourcesOverRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  VIDMM_GLOBAL *v10; // rcx
  bool (__fastcall *MoveableResourceCallback)(const struct VIDMM_PHYSICAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v12; // rcx
  bool v14; // dl
  __int64 v15; // r8
  VIDMM_GLOBAL *v16; // r10
  __int64 v17; // rax
  bool v18; // si
  __int64 v19; // rdi
  __int64 v20; // rcx
  _QWORD v21[16]; // [rsp+58h] [rbp-51h] BYREF

  VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(*(VIDMM_GLOBAL **)(a1 + 24));
  memset(v21, 0, 0x78uLL);
  v10 = *(VIDMM_GLOBAL **)(a1 + 24);
  v21[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v21[0] = a2;
  v21[1] = a3;
  LODWORD(v21[2]) = a4;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v10);
  v12 = *(VIDMM_LINEAR_POOL **)(a1 + 208);
  LODWORD(v21[8]) |= 4u;
  v21[4] = MoveableResourceCallback;
  v21[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v21[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v21[7] = VIDMM_SEGMENT::GetAlignmentCB;
  VIDMM_LINEAR_POOL::DefragmentRange(v12, (struct VIDMM_DEFRAGMENT_ARGS *)v21);
  if ( !*(_BYTE *)(a1 + 512) )
    return 0LL;
  *(_BYTE *)(a1 + 512) = 0;
  v14 = a2 == *(_QWORD *)(a1 + 456) && a3 == *(_QWORD *)(a1 + 464);
  v15 = *(unsigned __int16 *)(a1 + 420);
  v16 = *(VIDMM_GLOBAL **)(a1 + 24);
  v17 = *(_QWORD *)(*((_QWORD *)v16 + 3) + 2992LL);
  v18 = (*(_DWORD *)(v17 + 344 * v15 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v17 + 344 * v15 + 16) & 8) != 0 && v14 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v16, v15, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 24), *(unsigned __int16 *)(a1 + 420));
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + 40941LL) = 1;
  }
  v19 = (int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               *(_QWORD *)(a1 + 208),
               a2,
               a3,
               a4,
               (__int64)VIDMM_SEGMENT::MoveOneResource,
               a1,
               0LL,
               a6,
               a5);
  if ( v18 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(
      *(VIDMM_GLOBAL **)(a1 + 24),
      *(unsigned __int16 *)(a1 + 420),
      0,
      0LL,
      0LL,
      0,
      1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 24), *(unsigned __int16 *)(a1 + 420));
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + 40941LL) = 0;
  }
  if ( (int)v19 < 0 )
  {
    WdLogSingleEntry1(3LL, v19);
    v20 = *(_QWORD *)(a1 + 208);
    WdLogGlobalForLineNumber = 5748;
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(v20, a2, a3, a4);
  }
  return (unsigned int)v19;
}
