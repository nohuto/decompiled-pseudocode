/*
 * XREFs of SmmUnmapIommu @ 0x14003AEE8
 * Callers:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003AEBC (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x14003B048 (SmmIoMmuUnmapStagingMdl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     SmmIommuUnmapIdentityRange @ 0x14003AF90 (SmmIommuUnmapIdentityRange.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmUnmapIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // r8

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(a3 + 40) >> 12;
    if ( (unsigned int)dword_140161528 >= 4 )
      goto LABEL_7;
    result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_140161570)(v3, a2, v5);
  }
  else
  {
    result = SmmIommuUnmapIdentityRange(v3, a3);
  }
  if ( (int)result < 0 )
  {
LABEL_7:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 404;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146LL,
             0xFFFFFFFFLL,
             L"(((NTSTATUS)(Status)) >= 0)",
             404LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
