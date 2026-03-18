/*
 * XREFs of ?VidMmMapViewOfAllocation@@YAPEAXPEAUVIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1400C4430
 * Callers:
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A48D0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400A5150 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400C3910 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400D9F00 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
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
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v18; // eax
  char *v19; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  PVOID MappedBase; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-9h] BYREF
  __int64 v29; // [rsp+78h] [rbp-1h] BYREF
  int v30; // [rsp+80h] [rbp+7h] BYREF
  __int64 v31; // [rsp+88h] [rbp+Fh]
  char v32; // [rsp+90h] [rbp+17h]
  struct VIDMM_LOCAL_ALLOC *v33; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+E8h] [rbp+6Fh] BYREF
  void **v35; // [rsp+F0h] [rbp+77h]

  v35 = a4;
  v34 = a3;
  v33 = a1;
  v5 = *(__int64 **)a1;
  v6 = 0LL;
  *a4 = 0LL;
  MappedBase = 0LL;
  v8 = a1;
  v9 = *((unsigned int *)v5 + 6);
  v10 = (_DWORD *)v5 + 7;
  if ( (v9 & 0x100) != 0 && (*v10 & 0x80u) != 0 )
  {
    v19 = (char *)*((_QWORD *)a1 + 2);
    return &v19[(_QWORD)a2];
  }
  v11 = *(_DWORD *)v5[49];
  if ( (v11 & 0x20008) != 0 )
  {
    if ( a5 )
      return (char *)v6;
    v19 = (char *)v5[29];
    return &v19[(_QWORD)a2];
  }
  if ( (v5[4] & 4) != 0 || (v5[3] & 0x100) != 0 )
  {
    v25 = v5[28];
    v33 = a2;
    v26 = MmMapViewInSystemSpaceEx(v25, v5 + 29, &v34, &v33, 0LL);
    if ( v26 < 0 )
    {
      _InterlockedIncrement(&dword_1400817C0);
      WdLogSingleEntry2(6LL, v5, v26);
      WdLogGlobalForLineNumber = 586;
LABEL_36:
      DxgkLogInternalTriageEvent(v24, 262145LL);
      return (char *)MappedBase;
    }
    MappedBase = (PVOID)(v5[29] + a2 - v33);
    *v10 |= 0x2000000u;
    return (char *)MappedBase;
  }
  LOBYTE(a1) = (v11 & 0x30) == 0;
  if ( ((unsigned __int8)a1 & (*(_BYTE *)v10 >= 0)) != 0 )
  {
    if ( (v11 & 0x20000000) == 0 )
    {
      v30 = -1;
      v31 = 0LL;
      if ( (qword_140081010 & 2) != 0 )
      {
        v32 = 1;
        v30 = 8002;
        if ( (byte_140081242 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
      }
      else
      {
        v32 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry();
      MappedBase = (PVOID)(*(__int64 (__fastcall **)(__int64, __int64, struct VIDMM_LOCAL_ALLOC *, __int64, int))(*(_QWORD *)v5[30] + 56LL))(
                            v5[30],
                            v5[31],
                            a2,
                            v34,
                            a5);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
      if ( v32 && (byte_140081242 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer();
      return (char *)MappedBase;
    }
    v12 = *v5;
    ViewSize = *(_QWORD *)(*v5 + 16);
    if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
    {
      _InterlockedIncrement(&dword_1400817C0);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 615;
      DxgkLogInternalTriageEvent(v21, 262145LL);
      v18 = -1073741823;
    }
    else
    {
      v29 = 0LL;
      v13 = *(_QWORD *)(v12 + 16);
      CurrentProcess = PsGetCurrentProcess(a1, v9, a3, a4);
      v15 = v5[28];
      v16 = CurrentProcess;
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v18 = (*((__int64 (__fastcall **)(__int64, __int64, PVOID *, _QWORD, __int64, __int64 *, ULONG_PTR *, int, _DWORD, unsigned int))VirtualMemoryInterface
             + 3))(
              v15,
              v16,
              &MappedBase,
              0LL,
              v13,
              &v29,
              &ViewSize,
              2,
              0,
              ~((_WORD)v11 << 8) & 0x400 | 4u);
      if ( v18 >= 0 )
      {
LABEL_8:
        v19 = (char *)MappedBase;
        *v35 = MappedBase;
        return &v19[(_QWORD)a2];
      }
      v8 = v33;
    }
    _InterlockedIncrement(&dword_1400817C0);
    WdLogSingleEntry2(6LL, a5, v18);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v22, 262145LL);
    if ( !a5 )
    {
      v23 = MmMapViewInSystemSpace((PVOID)v5[28], &MappedBase, &ViewSize);
      if ( v23 >= 0 )
      {
        *((_BYTE *)v8 + 24) |= 4u;
        goto LABEL_8;
      }
      _InterlockedIncrement(&dword_1400817C0);
      WdLogSingleEntry1(6LL, v23);
      WdLogGlobalForLineNumber = 652;
      goto LABEL_36;
    }
    return (char *)MappedBase;
  }
  if ( !a5 || (v11 & 0x20) == 0 )
  {
    v19 = (char *)*((_QWORD *)v8 + 2);
    return &v19[(_QWORD)a2];
  }
  return (char *)v6;
}
