/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C4210
 * Callers:
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A48D0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400A5150 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400C3910 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C3EE8 (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400D9F00 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x140036C28 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1400371E0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C12C0 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct VIDMM_LOCAL_ALLOC *a1, void *a2)
{
  __int64 v2; // rdi
  struct VIDMM_LOCAL_ALLOC *v4; // r8
  __int64 v5; // r9
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  char v8; // al
  struct _EPROCESS *CurrentProcess; // rbx
  void *v10; // rcx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  char v13; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v4 = a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  v6 = (_BYTE *)(*(_QWORD *)a1 + 28LL);
  if ( (v5 & 0x100) == 0 || (*(_DWORD *)v6 & 0x80u) == 0 )
  {
    v7 = **(unsigned int **)(v2 + 392);
    if ( (v7 & 8) == 0 && (v7 & 0x20000) == 0 )
    {
      if ( (*(_BYTE *)(v2 + 32) & 4) == 0 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) == 0 )
      {
        LOBYTE(a1) = (v7 & 0x40000030) == 0;
        if ( ((unsigned __int8)a1 & (*v6 >= 0)) != 0 )
        {
          if ( (v7 & 0x20000000) != 0 )
          {
            v8 = *((_BYTE *)v4 + 24);
            if ( (v8 & 4) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)v4 + 24) = v8 & 0xFB;
            }
            else
            {
              CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(a1, v7, v4, v5);
            }
            VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(v2 + 224), a2);
          }
          else
          {
            v11 = -1;
            v12 = 0LL;
            if ( (qword_140081010 & 2) != 0 )
            {
              v13 = 1;
              v11 = 8003;
              if ( (byte_140081242 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer();
            }
            else
            {
              v13 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry();
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 240) + 64LL))(
              *(_QWORD *)(v2 + 240),
              *(_QWORD *)(v2 + 248));
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
            if ( v13 && (byte_140081242 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer();
          }
        }
      }
      else
      {
        v10 = *(void **)(v2 + 232);
        if ( v10 )
        {
          MmUnmapViewInSystemSpace(v10);
          *(_DWORD *)v6 &= ~0x2000000u;
          *(_QWORD *)(v2 + 232) = 0LL;
        }
      }
    }
  }
}
