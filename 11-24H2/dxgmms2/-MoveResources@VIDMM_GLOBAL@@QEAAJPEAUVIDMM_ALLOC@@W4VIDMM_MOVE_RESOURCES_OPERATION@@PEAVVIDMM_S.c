/*
 * XREFs of ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14010EC38
 * Callers:
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400960E0 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAV.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x14010EA64 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004C37C (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004C3A4 (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@PEA_K@Z @ 0x14009E16C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUV.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400B3D10 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x14010EE68 (-FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA-AURegionSearchResult@1@_K00@Z.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x14010EFBC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_GLOBAL::MoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        _BYTE *a10,
        _QWORD *a11)
{
  __int64 v11; // r15
  __int64 v13; // rax
  char v14; // si
  bool v17; // r12
  void (*v18)(void *); // r8
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  VIDMM_SEGMENT *v24; // rcx
  unsigned __int64 ActiveVprEnd; // rax
  int v26; // edx
  VIDMM_SEGMENT *v27; // rcx
  void (*v28)(void *); // r8
  _QWORD v30[3]; // [rsp+40h] [rbp-48h] BYREF
  char v31; // [rsp+58h] [rbp-30h]

  v11 = *(unsigned __int16 *)(a4 + 420);
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 2992LL);
  v14 = 1;
  v17 = (*(_DWORD *)(v13 + 344 * v11 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v13 + 344 * v11 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v11, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v11, v18);
  }
  if ( !a3 )
  {
    v22 = a8;
    v19 = a7;
    if ( !a8 && !a7 && a6 )
    {
      VIDMM_SEGMENT::GetActiveVprStart((VIDMM_SEGMENT *)a4);
      ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v24);
      if ( v26 == 1 )
      {
        v19 = 0LL;
      }
      else if ( v26 == 2 )
      {
        v19 = v22;
        v22 = ActiveVprEnd;
      }
      else
      {
        v22 = *(_QWORD *)(a4 + 72);
        v19 = ActiveVprEnd;
      }
    }
    v21 = (__int64)a11;
    v23 = v19;
LABEL_20:
    VIDMM_SEGMENT::DefragmentResourcesOverRange(a4, v23, v22, a9, (__int64)a10, v21);
    goto LABEL_21;
  }
  if ( a3 == 1 )
  {
    v19 = a7;
    v20 = *(_QWORD *)*MEMORY[0];
    VIDMM_LINEAR_POOL::FindBestDefragmentRegion(*(_QWORD *)(a4 + 208), v30, a7, a8, *(_QWORD *)(v20 + 16));
    v21 = (__int64)a11;
    if ( !v31 )
    {
      *a11 = v20;
      *a10 = 0;
      goto LABEL_21;
    }
    v22 = v30[1];
    v23 = v30[0];
    goto LABEL_20;
  }
  if ( g_IsInternalRelease )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  v19 = a7;
LABEL_21:
  if ( v17 )
  {
    if ( v19 != VIDMM_SEGMENT::GetActiveVprStart((VIDMM_SEGMENT *)a4) || v19 == VIDMM_SEGMENT::GetActiveVprEnd(v27) )
      v14 = 0;
    VIDMM_GLOBAL::FlushPagingBufferInternal(a1, v11, 0, 0LL, 0LL, 0, v14);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(a1, v11, v28);
  }
  return VIDMM_SEGMENT::UpdateActiveVPRAfterMove((VIDMM_SEGMENT *)a4);
}
