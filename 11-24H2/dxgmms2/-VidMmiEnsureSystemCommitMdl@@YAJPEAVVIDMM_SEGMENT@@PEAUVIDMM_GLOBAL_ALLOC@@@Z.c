/*
 * XREFs of ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C0A1C
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0B80 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C2790 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledDeviceUsageNoInline @ 0x14004CFB4 (Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D93E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D9400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D9770 (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VidMmiEnsureSystemCommitMdl(struct VIDMM_SEGMENT *a1, struct VIDMM_GLOBAL_ALLOC *a2)
{
  enum _LOCK_OPERATION v4; // edi
  struct _MDL *v5; // rax
  VIDMM_PROCESS *v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  __int64 v9; // rcx
  struct _KAPC_STATE v11; // [rsp+30h] [rbp-58h] BYREF
  VIDMM_PROCESS *v12; // [rsp+60h] [rbp-28h]

  if ( !*((_QWORD *)a2 + 7) )
  {
    if ( (*((_DWORD *)a2 + 7) & 0x10000) != 0 )
    {
      *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 51);
    }
    else
    {
      v12 = *(VIDMM_PROCESS **)(*((_QWORD *)a2 + 6) + 8LL);
      VIDMM_PROCESS::SafeAttach(v12, &v11);
      v4 = IoModifyAccess;
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_ApertureReadOnlyPnL__private_IsEnabledDeviceUsageNoInline()
        && (*((_DWORD *)a2 + 6) & 0x1000) != 0 )
      {
        v4 = IoReadAccess;
      }
      v5 = VidMmiProbeAndLockAllocation(a2, 0LL, *(_QWORD *)(*(_QWORD *)a2 + 16LL), v4, a1, 0LL);
      *((_QWORD *)a2 + 7) = v5;
      if ( !v5 )
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 1440;
        VIDMM_PROCESS::SafeDetach(v7, &v11);
        return 3221225495LL;
      }
      VIDMM_PROCESS::SafeDetach(v6, &v11);
    }
  }
  if ( (**((_DWORD **)a2 + 49) & 0x2000) != 0 )
  {
    v9 = *((_QWORD *)a2 + 7);
    if ( !((*(_BYTE *)(v9 + 10) & 5) != 0
         ? *(PVOID *)(v9 + 24)
         : MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000010u)) )
    {
      WdLogSingleEntry1(3LL, a2);
      WdLogGlobalForLineNumber = 1463;
      VidMmiReleaseSystemCommitMdl(a2);
      return 3221225495LL;
    }
  }
  return 0LL;
}
