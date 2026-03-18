/*
 * XREFs of ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C00CC
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0220 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C1E30 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C36AC (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E568C (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VidMmiEnsureSystemCommitMdl(struct VIDMM_SEGMENT *a1, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *v4; // rax
  VIDMM_PROCESS *v5; // rcx
  VIDMM_PROCESS *v7; // rcx
  __int64 v8; // rcx
  struct _KAPC_STATE v10; // [rsp+30h] [rbp-48h] BYREF
  VIDMM_PROCESS *v11; // [rsp+60h] [rbp-18h]

  if ( !*((_QWORD *)a2 + 7) )
  {
    if ( (*((_DWORD *)a2 + 7) & 0x10000) != 0 )
    {
      *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 49);
    }
    else
    {
      v11 = *(VIDMM_PROCESS **)(*((_QWORD *)a2 + 6) + 8LL);
      VIDMM_PROCESS::SafeAttach(v11, &v10);
      v4 = VidMmiProbeAndLockAllocation(a2, 0LL, *(_QWORD *)(*(_QWORD *)a2 + 16LL), IoModifyAccess, a1, 0LL);
      *((_QWORD *)a2 + 7) = v4;
      if ( !v4 )
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 1425;
        VIDMM_PROCESS::SafeDetach(v7, &v10);
        return 3221225495LL;
      }
      VIDMM_PROCESS::SafeDetach(v5, &v10);
    }
  }
  if ( (**((_DWORD **)a2 + 47) & 0x2000) == 0 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 7);
  if ( (*(_BYTE *)(v8 + 10) & 5) != 0
     ? *(PVOID *)(v8 + 24)
     : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x40000010u) )
  {
    return 0LL;
  }
  WdLogSingleEntry1(3LL, a2);
  WdLogGlobalForLineNumber = 1448;
  VidMmiReleaseSystemCommitMdl(a2);
  return 3221225495LL;
}
