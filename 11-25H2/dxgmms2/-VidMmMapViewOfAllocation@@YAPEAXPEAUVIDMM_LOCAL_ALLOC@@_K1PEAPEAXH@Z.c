/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C3BF4
 * Callers:
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A3050 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400A38D0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400C2FD0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C36AC (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5E10 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1400382D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038934 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

char *__fastcall VidMmMapViewOfAllocation(
        struct VIDMM_LOCAL_ALLOC *a1,
        struct VIDMM_LOCAL_ALLOC *a2,
        __int64 a3,
        void **a4,
        int a5)
{
  __int64 *v5; // r12
  __int64 v6; // r14
  struct VIDMM_LOCAL_ALLOC *v8; // rsi
  _DWORD *v9; // rbx
  int v10; // r13d
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 CurrentProcess; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v17; // eax
  char *v18; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  PVOID MappedBase; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-9h] BYREF
  __int64 v28; // [rsp+78h] [rbp-1h] BYREF
  int v29; // [rsp+80h] [rbp+7h] BYREF
  __int64 v30; // [rsp+88h] [rbp+Fh]
  char v31; // [rsp+90h] [rbp+17h]
  struct VIDMM_LOCAL_ALLOC *v32; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v33; // [rsp+E8h] [rbp+6Fh] BYREF
  void **v34; // [rsp+F0h] [rbp+77h]

  v34 = a4;
  v33 = a3;
  v32 = a1;
  v5 = *(__int64 **)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v8 = a1;
  v9 = (_DWORD *)v5 + 7;
  if ( (v5[3] & 0x100) != 0 && (*v9 & 0x80u) != 0 )
  {
    v18 = (char *)*((_QWORD *)a1 + 2);
    return &v18[(_QWORD)a2];
  }
  v10 = *(_DWORD *)v5[47];
  if ( (v10 & 0x20008) != 0 )
  {
    if ( a5 )
      return (char *)v6;
    v18 = (char *)v5[27];
    return &v18[(_QWORD)a2];
  }
  if ( (v5[4] & 4) != 0 || (v5[3] & 0x100) != 0 )
  {
    v24 = v5[26];
    v32 = a2;
    v25 = MmMapViewInSystemSpaceEx(v24, v5 + 27, &v33, &v32, 0LL);
    if ( v25 < 0 )
    {
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry2(6LL, v5, v25);
      WdLogGlobalForLineNumber = 585;
LABEL_36:
      DxgkLogInternalTriageEvent(v23, 262145LL);
      return (char *)MappedBase;
    }
    MappedBase = (PVOID)(v5[27] + a2 - v32);
    *v9 |= 0x2000000u;
    return (char *)MappedBase;
  }
  if ( (v10 & 0x30) == 0 && *(_BYTE *)v9 >= 0 )
  {
    if ( (v10 & 0x20000000) == 0 )
    {
      v29 = -1;
      v30 = 0LL;
      if ( (qword_140081010 & 2) != 0 )
      {
        v31 = 1;
        v29 = 8002;
        if ( (byte_140081242 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
      }
      else
      {
        v31 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      MappedBase = (PVOID)(*(__int64 (__fastcall **)(__int64, __int64, struct VIDMM_LOCAL_ALLOC *, __int64, int))(*(_QWORD *)v5[28] + 56LL))(
                            v5[28],
                            v5[29],
                            a2,
                            v33,
                            a5);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 && (byte_140081242 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      return (char *)MappedBase;
    }
    v11 = *v5;
    ViewSize = *(_QWORD *)(*v5 + 16);
    if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 614;
      DxgkLogInternalTriageEvent(v20, 262145LL);
      v17 = -1073741823;
    }
    else
    {
      v28 = 0LL;
      v12 = *(_QWORD *)(v11 + 16);
      CurrentProcess = PsGetCurrentProcess();
      v14 = v5[26];
      v15 = CurrentProcess;
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v17 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, __int64, __int64 *, ULONG_PTR *, int, _DWORD, unsigned int))VirtualMemoryInterface
             + 3))(
              v14,
              v15,
              &MappedBase,
              0LL,
              v12,
              &v28,
              &ViewSize,
              2,
              0,
              ~((_WORD)v10 << 8) & 0x400 | 4u);
      if ( v17 >= 0 )
      {
LABEL_8:
        v18 = (char *)MappedBase;
        *v34 = MappedBase;
        return &v18[(_QWORD)a2];
      }
      v8 = v32;
    }
    _InterlockedIncrement(&dword_1400817A0);
    WdLogSingleEntry2(6LL, a5, v17);
    WdLogGlobalForLineNumber = 636;
    DxgkLogInternalTriageEvent(v21, 262145LL);
    if ( !a5 )
    {
      v22 = MmMapViewInSystemSpace((PVOID)v5[26], &MappedBase, &ViewSize);
      if ( v22 >= 0 )
      {
        *((_BYTE *)v8 + 24) |= 4u;
        goto LABEL_8;
      }
      _InterlockedIncrement(&dword_1400817A0);
      WdLogSingleEntry1(6LL, v22);
      WdLogGlobalForLineNumber = 651;
      goto LABEL_36;
    }
    return (char *)MappedBase;
  }
  if ( !a5 || (v10 & 0x20) == 0 )
  {
    v18 = (char *)*((_QWORD *)a1 + 2);
    return &v18[(_QWORD)a2];
  }
  return (char *)v6;
}
