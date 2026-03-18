/*
 * XREFs of ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009E910
 * Callers:
 *     <none>
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140034050 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009352C (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E6D0 (-IsMovableResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x14009FAD8 (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@P.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D09A0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeCB(
        VIDMM_LINEAR_POOL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  int Outside; // edi
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // r9
  int v10; // eax
  struct _VIDMM_POOL_BLOCK *v11; // rdx

  Outside = 0;
  if ( VIDMM_SEGMENT::IsMovableResourceCB(a2) )
  {
    Outside = VIDMM_LINEAR_POOL::AllocateOutside(
                this[26],
                *((_QWORD *)a2 + 2),
                *((_DWORD *)a2 + 8),
                v8,
                *a4,
                a4[1],
                1,
                0,
                a2,
                (union _LARGE_INTEGER *)a2 + 12,
                (void **)a2 + 11);
    if ( Outside >= 0
      || (v10 = VIDMM_LINEAR_POOL::AllocateOutside(
                  this[26],
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 8),
                  v9,
                  *a4,
                  a4[1],
                  0,
                  1,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 12,
                  (void **)a2 + 11),
          Outside = v10,
          v10 >= 0) )
    {
      v11 = (struct _VIDMM_POOL_BLOCK *)*((_QWORD *)a2 + 10);
      *((_QWORD *)a2 + 13) = this;
      VIDMM_LINEAR_POOL::Free(this[26], v11);
      *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 11);
      *((_BYTE *)this + 512) = 1;
      if ( VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)a2 + 392LL)) )
        VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this[3]);
    }
    else
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 5785;
    }
  }
  return (unsigned int)Outside;
}
