/*
 * XREFs of ?ReleaseTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9808
 * Callers:
 *     ?FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400A9564 (-FlushTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400A95B8 (-EvictTemporaryResourceForCleanup@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_LOCAL_A.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z @ 0x1400AB9CC (-FlushTemporaryResources@VIDMM_PHYSICAL_ADAPTER@@QEAAX_N0@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140036D60 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A94B0 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400C2ADC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PHYSICAL_ADAPTER::ReleaseTemporaryResourcesForAllocation(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rbp
  _QWORD *v6; // rax
  _DWORD *v7; // r14
  void (__fastcall *v8)(_DWORD *, __int64, _QWORD, _QWORD, struct _MDL *); // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v10; // r8
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (_QWORD *)((char *)a2 + 128);
  v3 = *(_QWORD *)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v6[3] = *v2;
    v6[4] = *((int *)a2 + 35);
    v6[5] = *((unsigned int *)a2 + 34);
    WdLogGlobalForLineNumber = 2256;
  }
  if ( *((_QWORD *)a2 + 14) || *((_QWORD *)a2 + 15) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 27LL, v3, this, 0LL);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400A99DALL);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[6], (struct VIDMM_GLOBAL_ALLOC *)v3);
  v7 = (_DWORD *)*((_QWORD *)a2 + 18);
  if ( (v7[26] & 0x1000) != 0 )
    VIDMM_GLOBAL::FlushScratchGpuVaRanges(this[6], *((unsigned __int16 *)this + 28));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(v3 + 136), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 64LL))(v7, v3);
  if ( *((_BYTE *)a2 + 169) )
  {
    v8 = *(void (__fastcall **)(_DWORD *, __int64, _QWORD, _QWORD, struct _MDL *))(*(_QWORD *)v7 + 120LL);
    MDLForRange = VidMmGetMDLForRange((struct VIDMM_GLOBAL_ALLOC *)v3, *((_QWORD *)a2 + 19), *((_QWORD *)a2 + 20));
    v8(v7, v3, *((_QWORD *)a2 + 19), *((_QWORD *)a2 + 20), MDLForRange);
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v7 + 104LL))(v7, v3, v10);
  }
  (*(void (__fastcall **)(_DWORD *, char *))(*(_QWORD *)v7 + 88LL))(v7, (char *)a2 + 112);
  *v2 = 0LL;
  *((_QWORD *)a2 + 18) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[6], (struct VIDMM_GLOBAL_ALLOC *)v3);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)v11);
  *((_DWORD *)a2 + 14) &= ~0x40u;
  --*((_DWORD *)this + 430);
}
