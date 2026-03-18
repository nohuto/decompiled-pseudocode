/*
 * XREFs of ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x140285294
 * Callers:
 *     SysMmTestEnableIommu @ 0x140095F30 (SysMmTestEnableIommu.c)
 *     DxgpEnableIommuFromReference @ 0x14019D504 (DxgpEnableIommuFromReference.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x140284EFC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1402862F0 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ??$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU?$SYSMM_PUSHLOCK@$0DA@@@@Z @ 0x140050A70 (--$SmmAcquirePushLockExclusive@$0DA@@@YAXPEAU-$SYSMM_PUSHLOCK@$0DA@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$00@@YAXPEAU?$SYSMM_PUSHLOCK@$00@@@Z @ 0x140051190 (--$SmmReleasePushLockExclusive@$00@@YAXPEAU-$SYSMM_PUSHLOCK@$00@@@Z.c)
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x140284848 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x140284B64 (SmmIommuSwitchToTranslation.c)
 *     ?SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x140287ED4 (-SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z.c)
 */

__int64 __fastcall SysMmEnableIommu(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // r14
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-28h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
  {
    WdLogSingleEntry0(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 2946;
    return result;
  }
  v5 = a1 + 64;
  v6 = 0;
  SmmAcquirePushLockExclusive<48>(a1 + 64);
  v11 = (unsigned int *)(a1 + 96);
  v12 = *(unsigned int *)(a1 + 96);
  if ( ((unsigned int)v12 & (unsigned int)v3) != 0 )
  {
    WdLogSingleEntry5(0LL, 484LL, 2LL, a1, v12, v3);
    WdLogGlobalForLineNumber = 2964;
  }
  v13 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v14 = (_DWORD *)(a1 + 96);
  *(_QWORD *)(v13 + 24) = a1;
  *(_QWORD *)(v13 + 32) = v3;
  WdLogGlobalForLineNumber = 2969;
  if ( *v11 )
  {
LABEL_13:
    SmmTelemetryEnableIommu((const struct SYSMM_ADAPTER *)a1, v3, *v11);
    if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    {
      LODWORD(v17) = v3;
      McTemplateK0pt_EtwWriteTransfer((__int64)SysMmControlGuid_Context, (__int64)&EnableIommu, v16, a1, v17);
    }
    *v14 |= v3;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(a1 + 20) & 4) != 0 )
  {
    if ( (_DWORD)v3 == 128 || (_DWORD)v3 == 256 )
      v15 = SmmIommuSwitchToGpuVaIoMmu(a1);
    else
      v15 = SmmIommuSwitchToTranslation(a1);
    v5 = a1 + 64;
    v6 = v15;
    if ( v15 < 0 )
      goto LABEL_16;
    v14 = (_DWORD *)(a1 + 96);
    goto LABEL_13;
  }
  WdLogSingleEntry1(3LL, a1);
  WdLogGlobalForLineNumber = 2990;
  v6 = -1073741637;
LABEL_16:
  SmmReleasePushLockExclusive<1>(v5);
  return v6;
}
