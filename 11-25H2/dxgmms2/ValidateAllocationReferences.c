/*
 * XREFs of ValidateAllocationReferences @ 0x1400FC4D0
 * Callers:
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400F58C4 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 */

void __fastcall ValidateAllocationReferences(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 152);
  v3 = *(int *)(a1 + 156);
  if ( !v1 && (_DWORD)v3 && !*(_BYTE *)(**(_QWORD **)a1 + 41LL) )
  {
    WdLogSingleEntry1(1LL, v3);
    WdLogGlobalForLineNumber = 109;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    VidSchMarkDeviceAsError(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), 15);
  }
}
