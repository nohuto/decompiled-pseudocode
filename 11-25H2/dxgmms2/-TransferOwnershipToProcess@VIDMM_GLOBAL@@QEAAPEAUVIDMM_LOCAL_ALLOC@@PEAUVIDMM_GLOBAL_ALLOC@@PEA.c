/*
 * XREFs of ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400E5AD0
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x1400E59F4 (-TransferAllocationOwnership@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     VidSchSuspendResumeDevice @ 0x14002BAF0 (VidSchSuspendResumeDevice.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1400E5800 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@PEAVVIDMM.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z @ 0x1400E5D28 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToProcess(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC **a2,
        struct VIDMM_LOCAL_ALLOC *a3,
        struct VIDMM_LOCAL_ALLOC *a4)
{
  struct VIDMM_GLOBAL_ALLOC *v4; // rbp
  struct VIDMM_LOCAL_ALLOC *v5; // rsi
  __int64 v8; // rax
  VIDMM_GLOBAL *v9; // r12
  PRKPROCESS *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct VIDMM_GLOBAL_ALLOC *v14; // r15
  char *v15; // rax
  _QWORD *v16; // rbp
  _QWORD *i; // r12
  __int64 v18; // rbx
  struct VIDMM_GLOBAL_ALLOC *v20; // [rsp+58h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-80h] BYREF

  v4 = *a2;
  v5 = a4;
  v20 = *a2;
  v8 = *((_QWORD *)*a2 + 8);
  v9 = this;
  if ( v8
    && (*(_DWORD *)(v8 + 104) & 0x1001) != 0
    && *((int *)a2 + 47) > 0
    && (v11 = (PRKPROCESS *)*((_QWORD *)a4 + 1),
        memset(&ApcState, 0, sizeof(ApcState)),
        KeStackAttachProcess(*v11, &ApcState),
        v12 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(v9, a3, v5),
        KeUnstackDetachProcess(&ApcState),
        (int)v12 < 0) )
  {
    _InterlockedIncrement(&dword_140081684);
    WdLogSingleEntry3(6LL, a2, *((_QWORD *)v4 + 2), v12);
    WdLogGlobalForLineNumber = 28826;
    DxgkLogInternalTriageEvent(v13, 262145LL);
    v14 = a2[14];
    if ( v14 != (struct VIDMM_GLOBAL_ALLOC *)(a2 + 14) )
    {
      do
      {
        v15 = (char *)v14 - 48;
        if ( (struct VIDMM_GLOBAL_ALLOC *)((char *)v14 - 48) != a3 )
        {
          v16 = v15 + 32;
          for ( i = (_QWORD *)*((_QWORD *)v15 + 4); i != v16; i = (_QWORD *)*i )
          {
            v18 = *(_QWORD *)(*(i - 4) + 32LL);
            VidSchMarkDeviceAsError(v18, 13);
            VidSchSuspendResumeDevice(v18, 1, 0, 0);
            VidSchSuspendResumeDevice(v18, 0, 0, 0);
          }
        }
        v14 = *(struct VIDMM_GLOBAL_ALLOC **)v14;
      }
      while ( v14 != (struct VIDMM_GLOBAL_ALLOC *)(a2 + 14) );
      v5 = a4;
      v4 = v20;
      v9 = this;
    }
    VidMmRecordAlloc((__int64)v9, (__int64)a2, (__int64)a3, *((_QWORD *)v4 + 8), *((_QWORD *)v4 + 2), 0);
    VidMmRecordAlloc((__int64)v9, (__int64)a2, (__int64)v5, *((_QWORD *)v4 + 8), *((_QWORD *)v4 + 2), 1);
    *((_DWORD *)a2 + 6) |= 0x40000000u;
    v5 = 0LL;
    *((_DWORD *)a2 + 7) ^= ((unsigned __int8)*((_DWORD *)a2 + 7) ^ (unsigned __int8)*(_WORD *)(*((_QWORD *)v4 + 8) + 40LL)) & 0x1F;
  }
  else if ( (byte_140081241 & 0x10) != 0 )
  {
    McTemplateK0pqq_EtwWriteTransfer();
  }
  return v5;
}
