/*
 * XREFs of ?VidMmUnmapViewOfAllocation@@YAXPEAUVIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1400C39D4
 * Callers:
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400A3050 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400A38D0 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1400C2FD0 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400C36AC (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVID.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5E10 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1400382D8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140038934 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400C0960 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VidMmUnmapViewOfAllocation(struct VIDMM_LOCAL_ALLOC *a1, void *a2)
{
  __int64 v2; // rdi
  _BYTE *v4; // rsi
  int v5; // edx
  char v6; // al
  struct _EPROCESS *CurrentProcess; // rbx
  void *v8; // rcx
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)a1;
  v4 = (_BYTE *)(*(_QWORD *)a1 + 28LL);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) == 0 || (*(_DWORD *)v4 & 0x80u) == 0 )
  {
    v5 = **(_DWORD **)(v2 + 376);
    if ( (v5 & 8) == 0 && (v5 & 0x20000) == 0 )
    {
      if ( (*(_BYTE *)(v2 + 32) & 4) == 0 && (*(_DWORD *)(*(_QWORD *)a1 + 24LL) & 0x100) == 0 )
      {
        if ( (v5 & 0x40000030) == 0 && *v4 >= 0 )
        {
          if ( (v5 & 0x20000000) != 0 )
          {
            v6 = *((_BYTE *)a1 + 24);
            if ( (v6 & 4) != 0 )
            {
              CurrentProcess = 0LL;
              *((_BYTE *)a1 + 24) = v6 & 0xFB;
            }
            else
            {
              CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
            }
            VidMmUnmapViewAsync(CurrentProcess, *(PVOID *)(v2 + 208), a2);
          }
          else
          {
            v9 = -1;
            v10 = 0LL;
            if ( (qword_140081010 & 2) != 0 )
            {
              v11 = 1;
              v9 = 8003;
              if ( (byte_140081242 & 1) != 0 )
                McTemplateK0q_EtwWriteTransfer();
            }
            else
            {
              v11 = 0;
            }
            DXGETWPROFILER_BASE::PushProfilerEntry();
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 224) + 64LL))(
              *(_QWORD *)(v2 + 224),
              *(_QWORD *)(v2 + 232));
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
            if ( v11 && (byte_140081242 & 1) != 0 )
              McTemplateK0q_EtwWriteTransfer();
          }
        }
      }
      else
      {
        v8 = *(void **)(v2 + 216);
        if ( v8 )
        {
          MmUnmapViewInSystemSpace(v8);
          *(_DWORD *)v4 &= ~0x2000000u;
          *(_QWORD *)(v2 + 216) = 0LL;
        }
      }
    }
  }
}
