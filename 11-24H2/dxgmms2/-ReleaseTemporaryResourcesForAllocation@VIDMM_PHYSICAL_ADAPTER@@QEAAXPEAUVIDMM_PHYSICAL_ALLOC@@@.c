/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D7700
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400B3DAC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C1A1C (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400D76AC (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400F5630 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3F08 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C3430 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400E5DB0 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  struct VIDMM_GLOBAL_ALLOC *v3; // rbp
  _QWORD *v5; // rax
  _DWORD *v6; // r14
  __int64 v7; // rcx
  void (__fastcall *v8)(_DWORD *, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *, __int64, __int64, __int64); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v10; // r8
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+30h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-40h]
  char *v14; // [rsp+50h] [rbp-28h] BYREF
  char v15; // [rsp+58h] [rbp-20h]

  v3 = *(struct VIDMM_GLOBAL_ALLOC **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v5[3] = *((_QWORD *)a2 + 16);
    v5[4] = *((int *)a2 + 35);
    v5[5] = *((unsigned int *)a2 + 34);
    WdLogGlobalForLineNumber = 2256;
  }
  if ( *((_QWORD *)a2 + 14) || *((_QWORD *)a2 + 15) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 27LL, v3, this, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400D790DLL);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[6], v3);
  v6 = (_DWORD *)*((_QWORD *)a2 + 18);
  if ( (v6[26] & 0x1000) != 0 )
    VIDMM_GLOBAL::FlushScratchGpuVaRanges(this[6], *((unsigned __int16 *)this + 28));
  v15 = 0;
  v14 = (char *)v3 + 136;
  if ( v3 == (struct VIDMM_GLOBAL_ALLOC *)-136LL )
  {
    WdLogSingleEntry0(1LL);
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v7, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v14);
  (*(void (__fastcall **)(_DWORD *, struct VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)v6 + 64LL))(v6, v3);
  if ( *((_BYTE *)a2 + 169) )
  {
    v8 = *(void (__fastcall **)(_DWORD *, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *, __int64, __int64, __int64))(*(_QWORD *)v6 + 120LL);
    MDLForRange = VidMmGetMDLForRange(v3, *((_QWORD *)a2 + 19), *((_QWORD *)a2 + 20));
    v8(v6, v3, *((_QWORD *)a2 + 19), *((_QWORD *)a2 + 20), MDLForRange, v11, v12, v13);
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(_DWORD *, struct VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)v6 + 104LL))(v6, v3, v10);
  }
  (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v6 + 88LL))(v6, (char *)a2 + 112);
  *((_QWORD *)a2 + 16) = 0LL;
  *((_QWORD *)a2 + 18) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[6], v3);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v14);
  *((_DWORD *)a2 + 14) &= ~0x40u;
  --*((_DWORD *)this + 430);
}
