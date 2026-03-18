/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x1400D3588
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400D2B70 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@EEEW4VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x140093400 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ @ 0x140093E4C (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEBUVIDMM_PHYSICAL_ALLOC@@@ZXZ.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z @ 0x14009C218 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC@@EE@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x14009E330 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z@Z @ 0x14009EAC4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400D3A18 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400D3AD0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  int v9; // esi
  unsigned __int64 v10; // rsi
  VIDMM_GLOBAL *v11; // rcx
  VIDMM_GLOBAL *v12; // rcx
  bool (__fastcall *v13)(const struct VIDMM_PHYSICAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v14; // rcx
  int v15; // eax
  __int64 v16; // r10
  VIDMM_GLOBAL *v17; // rcx
  VIDMM_GLOBAL *v18; // rcx
  bool (__fastcall *MoveableResourceCallback)(const struct VIDMM_PHYSICAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v20; // rcx
  int v21; // eax
  __int64 v23; // [rsp+60h] [rbp-69h]
  _QWORD v24[22]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v25; // [rsp+130h] [rbp+67h]
  char v26; // [rsp+130h] [rbp+67h]
  unsigned int v27; // [rsp+138h] [rbp+6Fh]

  v4 = *((_QWORD *)this + 58);
  v6 = *((_QWORD *)this + 57);
  v25 = *((_QWORD *)a2 + 2);
  v27 = *((_DWORD *)a2 + 8);
  v9 = VIDMM_LINEAR_POOL::Allocate(
         *((VIDMM_LINEAR_POOL **)this + 26),
         v25,
         v27,
         0,
         v6,
         v4,
         a3,
         a4,
         a2,
         (union _LARGE_INTEGER *)a2 + 12,
         (void **)a2 + 11);
  if ( v9 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v25, *((unsigned int *)a2 + 8));
    v9 = VIDMM_LINEAR_POOL::Allocate(
           *((VIDMM_LINEAR_POOL **)this + 26),
           v25,
           v27,
           0,
           v6,
           v4,
           a3,
           a4,
           a2,
           (union _LARGE_INTEGER *)a2 + 12,
           (void **)a2 + 11);
    if ( v9 < 0 )
    {
      v10 = v25;
      if ( v25 + *((_QWORD *)this + 60) < *((_QWORD *)this + 59)
                                        * (unsigned __int64)(unsigned int)dword_1400815D4
                                        / (unsigned int)dword_1400815D8 )
      {
        v16 = v6;
        v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
        v26 = 0;
        if ( (*(_DWORD *)(344LL * *((unsigned __int16 *)this + 210) + *(_QWORD *)(*((_QWORD *)v17 + 3) + 2992LL) + 16) & 4) != 0 )
        {
          VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v17);
          memset(v24, 0, 0x78uLL);
          v18 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
          v24[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
          v24[0] = v6;
          v24[1] = v4;
          LODWORD(v24[2]) = 1;
          MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v18);
          v20 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
          LODWORD(v24[8]) |= 4u;
          v24[4] = MoveableResourceCallback;
          v24[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
          v24[7] = VIDMM_SEGMENT::GetAlignmentCB;
          VIDMM_LINEAR_POOL::DefragmentRange(v20, (struct VIDMM_DEFRAGMENT_ARGS *)v24);
          v23 = v24[9];
          v26 = 1;
          v9 = VIDMM_LINEAR_POOL::Allocate(
                 *((VIDMM_LINEAR_POOL **)this + 26),
                 v10,
                 v27,
                 0,
                 v6,
                 v4,
                 a3,
                 a4,
                 a2,
                 (union _LARGE_INTEGER *)a2 + 12,
                 (void **)a2 + 11);
          if ( v9 >= 0 )
            return (unsigned int)v9;
          v16 = v23;
        }
        v21 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v16, a2, a3, a4);
        v9 = v21;
        if ( v21 < 0 && v26 )
        {
          WdLogSingleEntry1(3LL, v21);
          WdLogGlobalForLineNumber = 1877;
          goto LABEL_14;
        }
      }
      else
      {
        v9 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 57), a2, a3, a4);
        if ( v9 < 0 )
        {
          v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
          if ( (*(_DWORD *)(344LL * *((unsigned __int16 *)this + 210) + *(_QWORD *)(*((_QWORD *)v11 + 3) + 2992LL) + 16) & 4) != 0 )
          {
            VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v11);
            memset(v24, 0, 0x78uLL);
            v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 3);
            v24[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
            v24[0] = v6;
            v24[1] = v4;
            LODWORD(v24[2]) = 1;
            v13 = VIDMM_GLOBAL::GetMoveableResourceCallback(v12);
            v14 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 26);
            LODWORD(v24[8]) |= 4u;
            v24[4] = v13;
            v24[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
            v24[7] = VIDMM_SEGMENT::GetAlignmentCB;
            VIDMM_LINEAR_POOL::DefragmentRange(v14, (struct VIDMM_DEFRAGMENT_ARGS *)v24);
            v15 = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 26),
                    v25,
                    v27,
                    0,
                    v6,
                    v4,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 12,
                    (void **)a2 + 11);
            v9 = v15;
            if ( v15 < 0 )
            {
              WdLogSingleEntry1(3LL, v15);
              WdLogGlobalForLineNumber = 1812;
LABEL_14:
              VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD **)this + 26), v6, v4, 1);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
