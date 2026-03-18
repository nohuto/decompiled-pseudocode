/*
 * XREFs of ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400DEF94
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1400B15E0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NP.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400DECB0 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DF0A0 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUV.c)
 */

void __fastcall VIDMM_DEVICE::AddCommitment(VIDMM_DEVICE *this, struct VIDMM_GLOBAL_ALLOC ***a2)
{
  struct VIDMM_GLOBAL_ALLOC *v4; // rsi
  VIDMM_PROCESS *v5; // r15
  __int64 v6; // rbp
  unsigned __int16 *v7; // r14
  __int64 v8; // rax
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v9; // rcx
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v10; // rdx
  struct _VIDMM_DEVICE_COMMITMENT_INFO **v11; // r8

  v4 = **a2;
  v5 = (*a2)[1];
  v6 = *(_QWORD *)v4;
  v7 = *(unsigned __int16 **)(*(_QWORD *)v4 + 64LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = this;
    WdLogGlobalForLineNumber = 1372;
  }
  v9 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v7[210]) + 16LL)
                                              + 56LL * v7[20]);
  v10 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)(a2 + 7);
  ++*(_DWORD *)v9;
  *((_QWORD *)v9 + 1) += *(_QWORD *)(v6 + 16);
  *((_QWORD *)v9 + 6) = this;
  v11 = (struct _VIDMM_DEVICE_COMMITMENT_INFO **)*((_QWORD *)v9 + 5);
  if ( *v11 != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)v9 + 32) )
    __fastfail(3u);
  *(_QWORD *)v10 = (char *)v9 + 32;
  a2[8] = v11;
  *v11 = v10;
  *((_QWORD *)v9 + 5) = v10;
  VIDMM_PROCESS::AddCommitment(
    v5,
    v9,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL),
    (struct VIDMM_SEGMENT *)v7,
    *(_DWORD *)v9 == 1,
    v4);
  *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
  ++*((_DWORD *)v4 + 19);
  *((_DWORD *)a2 + 7) |= 0x10u;
}
