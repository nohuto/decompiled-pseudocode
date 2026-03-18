/*
 * XREFs of ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2CB4
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C0B80 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400C2790 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     LockChildPages @ 0x14004B7A4 (LockChildPages.c)
 *     MapGpadl @ 0x14004B834 (MapGpadl.c)
 *     UnmapGpadl @ 0x14004B880 (UnmapGpadl.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3250 (-VidMmiAddProbeAndLockReference@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     LogLockAllocationBackingStoreToEtw @ 0x1400C3298 (LogLockAllocationBackingStoreToEtw.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 */

__int64 __fastcall VIDMM_SEGMENT::LockAllocationBackingStore(VIDMM_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  int v6; // eax
  unsigned __int64 v7; // r10
  struct VIDMM_LOCAL_ALLOC *v8; // r8
  __int64 v9; // r14
  bool v10; // r12
  _DWORD *v11; // r15
  _QWORD *v12; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  struct _LIST_ENTRY *QuadPart; // rbx
  __int64 v15; // rdx
  int v16; // r15d
  __int64 result; // rax
  __int64 v18; // rax
  struct _MDL *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  PMDL Mdl; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  char *v29; // rbx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  struct VIDMM_LOCAL_ALLOC *v32; // [rsp+28h] [rbp-E0h]
  struct VIDMM_LOCAL_ALLOC *v33; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h]
  struct _KAPC_STATE v35; // [rsp+60h] [rbp-A8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v2 = *((_QWORD *)this + 3);
  v3 = *(_QWORD *)a2;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 24) + 444LL) & 4) != 0 && (**((_DWORD **)a2 + 49) & 0x4000) == 0
    || (v6 = *((_DWORD *)a2 + 7), (v6 & 0x4000) != 0) )
  {
    if ( *((_QWORD *)a2 + 31) )
    {
      v18 = *((_QWORD *)a2 + 6);
      memset(&v35, 0, sizeof(v35));
      KeStackAttachProcess(**(PRKPROCESS **)(v18 + 8), &v35);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 30) + 144LL))(
        *((_QWORD *)a2 + 30),
        *((_QWORD *)a2 + 31));
      KeUnstackDetachProcess(&v35);
    }
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 47) )
  {
LABEL_21:
    VidMmiAddProbeAndLockReference(a2);
    return 0LL;
  }
  if ( (v6 & 0x10000) == 0 )
  {
    if ( (**((_DWORD **)a2 + 49) & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 6) + 8LL), &ApcState);
    v7 = *(_QWORD *)(v3 + 16);
    v8 = (struct VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 6);
    v34 = v7;
    v33 = v8;
    v9 = **((_QWORD **)this + 3);
    v10 = KeGetCurrentThread() == *(struct _KTHREAD **)(v9 + 8);
    if ( (**((_DWORD **)a2 + 49) & 4) != 0 )
    {
      v11 = (_DWORD *)(v9 + 356);
      v12 = (_QWORD *)(v9 + 296);
    }
    else
    {
      v11 = (_DWORD *)(v9 + 360);
      v12 = (_QWORD *)(v9 + 304);
    }
    if ( v10 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      ++*v11;
      QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
      v8 = v33;
      v7 = v34;
    }
    else
    {
      QuadPart = v35.ApcListHead[0].Flink;
    }
    v15 = *((_QWORD *)a2 + 31);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct VIDMM_GLOBAL_ALLOC *, _QWORD, unsigned __int64, int, VIDMM_SEGMENT *, _BYTE))(**((_QWORD **)a2 + 30) + 32LL))(
              *((_QWORD *)a2 + 30),
              v15,
              a2,
              0LL,
              v7,
              2,
              this,
              0);
      if ( v10 )
        *v12 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - (_QWORD)QuadPart;
    }
    else
    {
      v19 = VidMmiProbeAndLockAllocation(
              a2,
              0LL,
              v7,
              (enum _LOCK_OPERATION)(~(unsigned __int8)(*((_DWORD *)a2 + 6) >> 11) & 2),
              this,
              v8);
      if ( v19 )
      {
        *((_QWORD *)v33 + 9) = v19;
        if ( v10 )
          *v12 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - (_QWORD)QuadPart;
        v16 = 0;
      }
      else
      {
        if ( v10 )
          *v12 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - (_QWORD)QuadPart;
        v16 = -1071775487;
      }
    }
    if ( (**((_DWORD **)a2 + 49) & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v16 < 0 )
    {
      _InterlockedIncrement(&dword_1400816A4);
      WdLogSingleEntry2(6LL, a2, *(_QWORD *)(v3 + 16));
      v32 = *(struct VIDMM_LOCAL_ALLOC **)(v3 + 16);
      WdLogGlobalForLineNumber = 3115;
      DxgkLogInternalTriageEvent((__int64)v32, 262145LL);
      return 3223191809LL;
    }
    goto LABEL_20;
  }
  v20 = *((unsigned int *)a2 + 112);
  v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 6) + 8LL) + 32LL);
  if ( (_DWORD)v20 )
  {
    if ( v20 != *(_QWORD *)(v3 + 16) >> 12 )
    {
      WdLogSingleEntry0(1LL);
      v23 = 3036;
LABEL_38:
      WdLogGlobalForLineNumber = v23;
      DxgkLogInternalTriageEvent(v22, 0x40000LL);
      return 3221225485LL;
    }
    Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v3 + 16), 0, 0, 0LL);
    *((_QWORD *)a2 + 51) = Mdl;
    if ( !Mdl )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3043;
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      return 3221225495LL;
    }
    v27 = LockChildPages(v21);
    if ( v27 < 0 )
    {
      WdLogSingleEntry1(1LL, v27);
      WdLogGlobalForLineNumber = 3051;
      DxgkLogInternalTriageEvent(v28, 0x40000LL);
      IoFreeMdl(*((PMDL *)a2 + 51));
      result = 3221225473LL;
      *((_QWORD *)a2 + 51) = 0LL;
      return result;
    }
LABEL_20:
    LogLockAllocationBackingStoreToEtw(a2);
    goto LABEL_21;
  }
  if ( !*((_QWORD *)a2 + 55) )
  {
    WdLogSingleEntry0(1LL);
    v23 = 3061;
    goto LABEL_38;
  }
  v29 = (char *)a2 + 408;
  result = MapGpadl();
  if ( (int)result >= 0 )
  {
    v30 = *(_QWORD *)(v3 + 16);
    v31 = *(unsigned int *)(*(_QWORD *)v29 + 40LL);
    if ( v31 < v30 )
    {
      WdLogSingleEntry2(1LL, v31, v30);
      v24 = *(_QWORD *)v29;
      WdLogGlobalForLineNumber = 3079;
      DxgkLogInternalTriageEvent(*(unsigned int *)(v24 + 40), 0x40000LL);
      UnmapGpadl();
      *(_QWORD *)v29 = 0LL;
      return 3221225485LL;
    }
    goto LABEL_20;
  }
  return result;
}
