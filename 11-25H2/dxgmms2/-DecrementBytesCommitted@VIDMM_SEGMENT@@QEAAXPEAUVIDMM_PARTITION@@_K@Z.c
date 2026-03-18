/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1400D5A74
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400A9D88 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z @ 0x1400D5120 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAX_KPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rcx

  if ( *((_QWORD *)this + 32) < (unsigned __int64)(*((_QWORD *)this + 32) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 375;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
  *((_QWORD *)this + 32) -= a3;
  v7 = *((_QWORD *)this + 3);
  v8 = *((unsigned __int16 *)this + 210);
  v9 = *((int *)this + 129);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 40232) + 8 * v8);
  if ( (*(_BYTE *)(v10 + 24 * v9 + 552) & 1) != 0 )
    v11 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v7 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v8;
  else
    v11 = v10 + 344 * v9 + 584;
  if ( *(_QWORD *)(v11 + 120) < (unsigned __int64)(*(_QWORD *)(v11 + 120) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 385;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
  }
  *(_QWORD *)(v11 + 120) -= a3;
}
