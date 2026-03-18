/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_HEAP_ALLOC@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ33PEAX@Z5TVIDMM_ROTATE_FLAGS@@@Z @ 0x140100840
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@@Z @ 0x1400F5C14 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Rotate(
        __int64 a1,
        __int64 a2,
        union _LARGE_INTEGER a3,
        int a4,
        struct _MDL *a5,
        SIZE_T a6,
        NTSTATUS (__stdcall *a7)(PMDL DestinationMdl, PMDL SourceMdl, PVOID Context),
        void *a8,
        char a9)
{
  __int64 v11; // rcx
  __int64 *v12; // rdx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  char v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+60h] [rbp-20h] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h]
  char v19; // [rsp+70h] [rbp-10h]

  v16 = 0;
  v15 = a1 + 1328;
  if ( a1 == -1328 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v11, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v15);
  v17 = -1;
  v18 = 0LL;
  if ( (qword_140081010 & 2) != 0 )
  {
    v19 = 1;
    v17 = 8005;
    if ( (byte_140081242 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v13 = VIDMM_RECYCLE_MULTIRANGE::Rotate(a3, v12, a4, a5, a6, a7, a8, a9);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (byte_140081242 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v15);
  return v13;
}
