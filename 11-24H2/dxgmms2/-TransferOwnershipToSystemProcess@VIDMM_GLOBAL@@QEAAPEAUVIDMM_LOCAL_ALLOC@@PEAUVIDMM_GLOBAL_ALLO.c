/*
 * XREFs of ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1400DA3A4
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400D9AD8 (-TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000DBE8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400A9EF4 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400D98E4 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400D9E0C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 */

PVOID **__fastcall VIDMM_GLOBAL::TransferOwnershipToSystemProcess(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3)
{
  __int64 v3; // rsi
  struct VIDMM_DEVICE *v7; // rdx
  PVOID **v9; // rbx
  __int64 v10; // r9
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int8 v15; // [rsp+80h] [rbp+8h] BYREF
  struct VIDMM_ALLOC *v16; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v16 = 0LL;
  v7 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  v15 = 0;
  if ( (int)VIDMM_GLOBAL::OpenOneAllocation(this, v7, a2, 0LL, 0, 0LL, &v16, &v15) < 0 )
  {
    _InterlockedIncrement(&dword_1400816A4);
    WdLogSingleEntry2(6LL, a2, *(_QWORD *)(v3 + 16));
    WdLogGlobalForLineNumber = 29114;
    DxgkLogInternalTriageEvent(v14, 262145LL);
    return 0LL;
  }
  v9 = *(PVOID ***)v16;
  if ( *((int *)a2 + 47) > 0 )
  {
    v12 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(this, a3, *(PVOID ***)v16);
    if ( v12 < 0 )
    {
      _InterlockedIncrement(&dword_1400816A4);
      WdLogSingleEntry3(6LL, a2, *(_QWORD *)(v3 + 16), v12);
      WdLogGlobalForLineNumber = 29142;
      DxgkLogInternalTriageEvent(v13, 262145LL);
      VIDMM_GLOBAL::CloseOneAllocation(this, v16, 0LL, 0, 0, 0LL);
      return 0LL;
    }
  }
  if ( (byte_140081241 & 0x10) != 0 )
    McTemplateK0pqq_EtwWriteTransfer();
  if ( *((_QWORD *)a3 + 1) )
  {
    v10 = *(_QWORD *)(v3 + 64);
    if ( v10 )
    {
      VidMmRecordAlloc((__int64)this, (__int64)a2, (__int64)a3, v10, *(_QWORD *)(v3 + 16), 1);
      VidMmRecordAlloc((__int64)this, (__int64)a2, (__int64)v9, *(_QWORD *)(v3 + 64), *(_QWORD *)(v3 + 16), 0);
    }
  }
  return v9;
}
