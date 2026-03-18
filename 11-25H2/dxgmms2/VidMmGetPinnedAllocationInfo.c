/*
 * XREFs of VidMmGetPinnedAllocationInfo @ 0x1400F8F10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400F8FD4 (-GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_L.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall VidMmGetPinnedAllocationInfo(
        __int64 a1,
        VIDMM_PHYSICAL_ADAPTER **a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r10

  v5 = 0LL;
  if ( !*((_DWORD *)a2[47] + 4) && (*(_DWORD *)a2[47] & 0x40000000) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 10LL, a2, 0LL, 0LL);
    WdLogGlobalForLineNumber = 195;
    goto LABEL_6;
  }
  if ( (*((_DWORD *)*a2 + 13) & 2) == 0 )
  {
LABEL_6:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 10LL, a2, v5, v5);
    WdLogGlobalForLineNumber = 195;
    JUMPOUT(0x1400F8FCCLL);
  }
  return VIDMM_PHYSICAL_ADAPTER::GetAllocationPhysicalAddress(*a2, *a2, a3, a4, a5);
}
