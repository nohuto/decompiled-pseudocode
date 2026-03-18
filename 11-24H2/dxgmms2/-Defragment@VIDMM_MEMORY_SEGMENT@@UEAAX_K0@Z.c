/*
 * XREFs of ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1400A5910
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ @ 0x140093F78 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x14009FBD0 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z@Z @ 0x1400A0364 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400A5AFC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x140101FA4 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x14010E6D4 (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::Defragment(VIDMM_MEMORY_SEGMENT *this, unsigned __int64 a2, unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // rcx
  bool (__fastcall *MoveableResourceCallback)(const struct VIDMM_PHYSICAL_ALLOC *); // rax
  __int64 v8; // r9
  int v9; // ecx
  unsigned __int64 v10; // rsi
  VIDMM_LINEAR_POOL *v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v15[16]; // [rsp+50h] [rbp-39h] BYREF
  char v16; // [rsp+F0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+6Fh] BYREF

  memset(v15, 0, 0x78uLL);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
  v15[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v6);
  v9 = *(_DWORD *)(v8 + 6984);
  v10 = a2;
  v15[4] = MoveableResourceCallback;
  v15[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v15[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v15[7] = VIDMM_SEGMENT::GetAlignmentCB;
  LODWORD(v15[8]) = v15[8] & 0xFFFFFFFD | ((v9 & 0x40000 | 0x20000u) >> 17);
  while ( v10 != a3 )
  {
    v11 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
    v17 = 0LL;
    v16 = 0;
    v15[0] = v10;
    v15[1] = a3;
    VIDMM_LINEAR_POOL::DefragmentRange(v11, (struct VIDMM_DEFRAGMENT_ARGS *)v15);
    if ( *((_BYTE *)this + 512) )
    {
      v12 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
              *((_QWORD *)this + 26),
              v10,
              v15[1],
              0,
              (__int64)VIDMM_SEGMENT::MoveOneResource,
              (__int64)this,
              0LL,
              (__int64)&v17,
              (__int64)&v16);
      *((_BYTE *)this + 512) = 0;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(1LL, v12);
        WdLogGlobalForLineNumber = 2739;
        DxgkLogInternalTriageEvent(v14, 0x40000LL);
        VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD **)this + 26), v10, a3, 0);
        break;
      }
    }
    v10 = v15[10];
    if ( v15[11] )
    {
      v13 = VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(this, a2, a3, (const struct VIDMM_DISPLAYING_BLOCK *)&v15[11]);
      v15[11] = 0LL;
      v10 = v13;
    }
  }
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(*((VIDMM_LINEAR_POOL **)this + 26), 0LL, *((_QWORD *)this + 9));
}
