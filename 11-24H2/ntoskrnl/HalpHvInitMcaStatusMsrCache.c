/*
 * XREFs of HalpHvInitMcaStatusMsrCache @ 0x140548300
 * Callers:
 *     HalpMceInit @ 0x140B6D2D4 (HalpMceInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpGetCpuVendor @ 0x140478774 (HalpGetCpuVendor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 */

void __fastcall HalpHvInitMcaStatusMsrCache(__int64 a1)
{
  unsigned __int64 v1; // rax
  ULONG_PTR v2; // rbx
  _DWORD *v3; // rdx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r10
  int v7; // eax
  __int64 v8; // rcx
  __int64 MaximumRegisteredProcessorCount; // rbx
  ULONG_PTR v10; // rbx

  if ( !HalpHvMcaStatusCacheInitialized )
  {
    if ( !HalpMcaNumberOfBanks )
    {
      a1 = 377LL;
      v1 = __readmsr(0x179u);
      HalpMcaNumberOfBanks = v1;
    }
    HalpHvMcaBankCount = (unsigned __int8)HalpMcaNumberOfBanks;
    v2 = 4LL * (unsigned __int8)HalpMcaNumberOfBanks;
    if ( v2 )
    {
      HalpHvMcaStatusMsrIndices = HalpMmAllocCtxAlloc(a1, 4LL * (unsigned __int8)HalpMcaNumberOfBanks);
      if ( !HalpHvMcaStatusMsrIndices )
        KeBugCheckEx(0xACu, v2, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x63EuLL);
      if ( HalpHvMcaBankCount )
      {
        do
        {
          if ( HalpGetCpuVendor() != 1 || (v7 = v5, !HalpMcaScalableRasSupported) )
            v7 = v4;
          *v3 = v7;
        }
        while ( v6 != 1 );
      }
    }
    else
    {
      HalpHvMcaStatusMsrIndices = 0LL;
    }
    MaximumRegisteredProcessorCount = (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
    HalpHvMcaLpCount = MaximumRegisteredProcessorCount;
    v10 = 8 * (unsigned int)HalpHvMcaBankCount * MaximumRegisteredProcessorCount;
    if ( v10 )
    {
      HalpHvMcaStatusCache = HalpMmAllocCtxAlloc(v8, v10);
      if ( !HalpHvMcaStatusCache )
        KeBugCheckEx(0xACu, v10, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x658uLL);
    }
    else
    {
      HalpHvMcaStatusCache = 0LL;
    }
    HalpHvMcaStatusCacheInitialized = 1;
  }
}
