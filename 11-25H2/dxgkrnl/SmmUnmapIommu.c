/*
 * XREFs of SmmUnmapIommu @ 0x14003A748
 * Callers:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x14003A71C (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x14003A8A8 (SmmIoMmuUnmapStagingMdl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmIommuUnmapIdentityRange @ 0x14003A7F0 (SmmIommuUnmapIdentityRange.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall SmmUnmapIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v5; // r8

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(a3 + 40) >> 12;
    if ( (unsigned int)dword_14015E518 >= 4 )
      goto LABEL_7;
    result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_14015E560)(v3, a2, v5);
  }
  else
  {
    result = SmmIommuUnmapIdentityRange(v3, a3);
  }
  if ( result < 0 )
  {
LABEL_7:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 403;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146,
             0xFFFFFFFFLL,
             L"(((NTSTATUS)(Status)) >= 0)",
             403LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
