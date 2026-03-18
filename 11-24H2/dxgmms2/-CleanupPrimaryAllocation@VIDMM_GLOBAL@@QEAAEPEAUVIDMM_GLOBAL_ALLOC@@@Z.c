/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010FD30
 * Callers:
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D79C4 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x140036B84 (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400BEA98 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1401007FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  char *v2; // rbp
  char v3; // r12
  __int64 v4; // r13
  char *v5; // rsi
  VIDMM_DEVICE *v7; // rcx
  char *v8; // r15
  char *v9; // r15
  char *v10; // r14
  struct VIDMM_ALLOC *v11; // rbx
  VIDMM_DEVICE *v13; // [rsp+60h] [rbp+8h]

  v2 = (char *)a2 + 112;
  v3 = 0;
  v4 = *(_QWORD *)a2;
  v5 = (char *)*((_QWORD *)a2 + 14);
  v7 = *(VIDMM_DEVICE **)(*((_QWORD *)this + 5029) + 8LL * (*((_DWORD *)a2 + 6) & 0x3F));
  v13 = v7;
  while ( v5 != v2 )
  {
    v8 = v5;
    v5 = *(char **)v5;
    v9 = v8 - 16;
    v10 = *(char **)v9;
    if ( *(char **)v9 != v9 )
    {
      do
      {
        v11 = (struct VIDMM_ALLOC *)(v10 - 40);
        v10 = *(char **)v10;
        if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
          VIDMM_DEVICE::UnfaultCommitment(v7, v11);
        if ( (*((_DWORD *)v11 + 7) & 3) != 0 )
        {
          VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v11 + 1), v11, 1);
          if ( !VIDMM_ALLOC::HasAnyResidencyReferences(v11) )
          {
            VIDMM_DEVICE::RemoveCommitment(*((VIDMM_DEVICE **)v11 + 1), (__int64 **)v11, 1);
            v3 = 1;
          }
          _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 49) + 16LL));
        }
      }
      while ( v10 != v9 );
      v7 = v13;
    }
    if ( *(_QWORD *)(v4 + 64) && !*((_DWORD *)a2 + 19) )
      VIDMM_PHYSICAL_ADAPTER::EvictResources(v7, (struct VIDMM_PHYSICAL_ALLOC *)v4, 0, 0, 0, 0LL);
    v7 = v13;
  }
  return v3;
}
