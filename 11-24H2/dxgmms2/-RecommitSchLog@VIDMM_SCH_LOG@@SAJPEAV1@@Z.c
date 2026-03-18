/*
 * XREFs of ?RecommitSchLog@VIDMM_SCH_LOG@@SAJPEAV1@@Z @ 0x1400399F4
 * Callers:
 *     VidSchRecommitSchedulingLogs @ 0x140039964 (VidSchRecommitSchedulingLogs.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x140039AF0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x140039C40 (-GetVaAllocator@VIDMM_SCH_LOG@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400ADD10 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400F7C78 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_SCH_LOG::RecommitSchLog(struct VIDMM_SCH_LOG *a1)
{
  struct CVirtualAddressAllocator *result; // rax
  struct CVirtualAddressAllocator *v3; // rdi
  void *v4; // rcx
  unsigned __int64 LogicalAddress; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rcx
  __int128 v10; // [rsp+60h] [rbp-18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  result = VIDMM_SCH_LOG::GetVaAllocator(a1);
  v3 = result;
  if ( result )
  {
    v4 = (void *)*((_QWORD *)a1 + 10);
    v10 = 0LL;
    LogicalAddress = SysMmGetLogicalAddress(v4);
    VidMmiInitializeAdlForPfnArray(
      (struct _DXGK_ADL *)&v10,
      (const unsigned __int64 *)(*((_QWORD *)a1 + 9) + 48LL),
      *(_DWORD *)(*((_QWORD *)a1 + 9) + 40LL) >> 12,
      LogicalAddress);
    v6 = *((unsigned int *)a1 + 6);
    v7 = *((_QWORD *)a1 + 8);
    v11 = 0LL;
    v8 = CVirtualAddressAllocator::CommitVirtualAddressRange(v3, v7, v6, 0LL, 0LL, &v10, 0, &v11, 0LL, 0, 0LL);
    if ( v8 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 397;
      DxgkLogInternalTriageEvent(v9, 0x40000LL);
    }
    return (struct CVirtualAddressAllocator *)(unsigned int)v8;
  }
  return result;
}
