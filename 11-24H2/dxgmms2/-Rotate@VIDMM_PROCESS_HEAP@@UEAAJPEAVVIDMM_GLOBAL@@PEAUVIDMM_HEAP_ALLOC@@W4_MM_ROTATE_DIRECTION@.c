/*
 * XREFs of ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400A3D10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ @ 0x14004EA48 (-SetMemoryRefreshIdle@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1400F63BC (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Rotate(
        __int64 a1,
        VIDMM_GLOBAL *a2,
        __int64 a3,
        int a4,
        struct _MDL *NewMdl,
        SIZE_T Size,
        NTSTATUS (__stdcall *CopyFunction)(PMDL DestinationMdl, PMDL SourceMdl, PVOID Context),
        PVOID Context,
        char a9)
{
  __int64 v9; // rdi
  __int64 v10; // r14
  VIDMM_GLOBAL *v11; // r13
  NTSTATUS v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  char *v19; // rbx
  ULONG_PTR v20; // r15
  HANDLE v21; // rax
  __int64 v22; // rcx
  struct _MDL *v24; // r12
  ULONG_PTR v25; // rdi
  NTSTATUS v26; // eax
  char v27; // al
  struct _EPROCESS *v28; // rax
  __int64 CurrentProcess; // rax
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-41h] BYREF
  ULONG_PTR v31; // [rsp+60h] [rbp-39h] BYREF
  union _LARGE_INTEGER v32; // [rsp+68h] [rbp-31h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v34; // [rsp+78h] [rbp-21h] BYREF
  int v35; // [rsp+80h] [rbp-19h] BYREF
  __int64 v36; // [rsp+88h] [rbp-11h]
  char v37; // [rsp+90h] [rbp-9h]
  int v38; // [rsp+E8h] [rbp+4Fh]

  v35 = -1;
  v9 = a3;
  v10 = a4;
  v11 = a2;
  v36 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v37 = 1;
    v35 = 8005;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v13 = 0;
  v14 = **(_QWORD **)(a1 + 8);
  if ( PsGetCurrentProcess() != v14 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v16 = WdLogNewEntry5_WdTrace(v15);
    *(_QWORD *)(v16 + 24) = v9;
    *(_QWORD *)(v16 + 32) = v10;
    WdLogGlobalForLineNumber = 1484;
  }
  v17 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)v9 & 1) != 0 )
  {
    v18 = (*(_DWORD *)(v9 + 20) & 0x800000) == 0;
    v19 = *(char **)(v9 + 8);
  }
  else
  {
    v19 = (char *)(*(_QWORD *)(v9 + 16) + *(_QWORD *)(v17 + 32));
    v18 = (*(_DWORD *)(v17 + 64) & 1) == 0;
  }
  if ( v18 )
  {
    if ( (unsigned int)v10 >= 2 )
    {
      if ( (unsigned int)(v10 - 2) > 1 )
        goto LABEL_60;
      CurrentProcess = PsGetCurrentProcess();
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 1LL, CurrentProcess, v9, v10);
      WdLogGlobalForLineNumber = 195;
    }
    v13 = -1073741823;
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    return (unsigned int)v13;
  }
  v38 = 0;
  if ( (unsigned int)v10 > 1 )
  {
    v20 = *(_QWORD *)(v9 + 64);
    goto LABEL_26;
  }
  v20 = Size;
  if ( (*(_DWORD *)v9 & 1) != 0
    || *(_QWORD *)(v17 + 56)
    || *(_QWORD *)(v9 + 32)
    || (v21 = MmSecureVirtualMemory(v19, Size, 4u), (*(_QWORD *)(v9 + 32) = v21) != 0LL) )
  {
    if ( *((_DWORD *)v11 + 10048) != -1 )
      (*((void (__fastcall **)(_QWORD))v11 + 5002))(*((_QWORD *)v11 + 5010));
    v38 = 1;
LABEL_26:
    v24 = NewMdl;
    if ( (_DWORD)v10 == 2 )
    {
      v25 = v20;
      Interval.QuadPart = -10000LL;
      while ( 1 )
      {
        NumberOfBytes = v25;
        v13 = MmRotatePhysicalView(v19, &NumberOfBytes, NewMdl, MmToRegularMemory, CopyFunction, Context);
        if ( v13 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1598;
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
        v19 += NumberOfBytes;
        v25 -= NumberOfBytes;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      v11 = a2;
      VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
      v9 = a3;
    }
    else
    {
      if ( (_DWORD)v10 != 3 )
      {
        v34 = v20;
        v13 = MmRotatePhysicalView(v19, &v34, NewMdl, (MM_ROTATE_DIRECTION)v10, CopyFunction, Context);
        if ( v13 >= 0 )
          goto LABEL_44;
        if ( (a9 & 2) != 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
        goto LABEL_51;
      }
      v32.QuadPart = -10000LL;
      v31 = v20;
      while ( 1 )
      {
        v26 = MmRotatePhysicalView(v19, &v31, v24, MmToRegularMemoryNoCopy, CopyFunction, Context);
        v13 = v26;
        if ( (a9 & 1) == 0 || v26 != 1073741849 )
          break;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1685;
        if ( (byte_140081241 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer();
        while ( MmRotatePhysicalView(v19, &v31, *(PMDL *)(v9 + 80), MmToFrameBufferNoCopy, CopyFunction, Context) < 0 )
          KeDelayExecutionThread(0, 0, &v32);
        KeDelayExecutionThread(0, 0, &v32);
        v24 = NewMdl;
      }
      v11 = a2;
      VIDMM_GLOBAL::SetMemoryRefreshIdle(a2);
    }
    LODWORD(v10) = a4;
    if ( v13 >= 0 )
    {
LABEL_44:
      if ( (unsigned int)v10 <= 1 )
      {
        *(_QWORD *)(v9 + 64) = v20;
        v27 = 1;
        *(_QWORD *)(v9 + 80) = v24;
      }
      else
      {
        if ( (a9 & 2) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v9 + 80), 0);
          *(_QWORD *)(v9 + 80) = 0LL;
        }
        v27 = 0;
      }
      *(_BYTE *)(v9 + 72) = v27;
LABEL_55:
      v28 = (struct _EPROCESS *)PsGetCurrentProcess();
      VIDMM_GLOBAL::RecordRotation(v28, v19, v20, v24, (enum _MM_ROTATE_DIRECTION)v10, v13);
      goto LABEL_60;
    }
LABEL_51:
    if ( v38 )
      VIDMM_GLOBAL::SetMemoryRefreshIdle(v11);
    goto LABEL_55;
  }
  _InterlockedIncrement(&dword_14008179C);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1521;
  DxgkLogInternalTriageEvent(v22, 262145LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  return 3221225495LL;
}
