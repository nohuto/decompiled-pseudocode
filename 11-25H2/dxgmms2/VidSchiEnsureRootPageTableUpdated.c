/*
 * XREFs of VidSchiEnsureRootPageTableUpdated @ 0x1400EF500
 * Callers:
 *     VidSchiSuspendResumeHwContext @ 0x14002B380 (VidSchiSuspendResumeHwContext.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1400497F0 (VidSchSubmitCommandToHwQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x140043478 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043F04 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 __fastcall VidSchiEnsureRootPageTableUpdated(char *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  UINT v7; // r13d
  UINT64 SegmentOffset; // r15
  UINT v9; // r12d
  __int64 v10; // rax
  const struct VIDMM_PROCESS *v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // zf
  unsigned __int16 v19; // [rsp+50h] [rbp-58h]
  struct _DXGKARG_SETROOTPAGETABLE v20; // [rsp+58h] [rbp-50h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  result = *(unsigned int *)(v1 + 12);
  v5 = *(_QWORD *)(v3 + 32);
  if ( (result & 0x10) != 0 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
    v6 = 0LL;
    v7 = 0;
    SegmentOffset = 0LL;
    v9 = 0;
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) + 64LL);
    if ( v10 )
    {
      v11 = *(const struct VIDMM_PROCESS **)(v10 + 8);
      if ( v11 )
      {
        v12 = *(unsigned __int16 *)(v1 + 6);
        v19 = *(_WORD *)(v1 + 6);
        v13 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 16) + 240LL));
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 184);
          if ( v14 )
          {
            v15 = v12;
            v16 = *(_QWORD *)(v14 + 120) + 32LL * v12;
            if ( v16
              && *(_QWORD *)v16
              && (v17 = *(_QWORD *)(*(_QWORD *)v16 + 16LL)) != 0
              && *(_QWORD *)(*(_QWORD *)v17 + 64LL) )
            {
              v6 = *(_QWORD *)(v16 + 8);
              v9 = *(_DWORD *)(v16 + 16);
              SegmentOffset = *(_QWORD *)(*(_QWORD *)v17 + 72LL);
              v7 = *(_DWORD *)(v16 + 24);
            }
            else
            {
              WdLogSingleEntry2(1LL, v14, v15);
              WdLogGlobalForLineNumber = 2708;
              DxgkLogInternalTriageEvent(v19, 0x40000LL);
            }
          }
        }
        if ( *((_QWORD *)a1 + 40) != v6 && v9 )
        {
          v18 = (*((_DWORD *)a1 + 14) & 0x1000) == 0;
          v20.hContext = (HANDLE)*((_QWORD *)a1 + 6);
          *((_QWORD *)a1 + 40) = v6;
          *(&v20.Address.SegmentId + 1) = 0;
          *(&v20.NumEntries + 1) = 0;
          v20.Address.SegmentId = v7;
          v20.Address.SegmentOffset = SegmentOffset;
          v20.NumEntries = v9;
          if ( v18 )
          {
            ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v5 + 8), &v20);
            SegmentOffset = v20.Address.SegmentOffset;
          }
          *((_QWORD *)a1 + 41) = SegmentOffset;
          VidMmRecordVaPagingHistorySetPageDirectory(
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 768LL),
            v11,
            &v20,
            a1);
        }
      }
    }
    return ExReleasePushLockExclusiveEx(a1 + 312, 0LL);
  }
  return result;
}
