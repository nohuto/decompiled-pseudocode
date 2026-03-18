/*
 * XREFs of CcInitializeVacbs @ 0x140C04F58
 * Callers:
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

__int64 *CcInitializeVacbs()
{
  __int64 *result; // rax

  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  CcVacbArrays = (__int64)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x2800uLL, 0x61566343u);
  if ( !CcVacbArrays )
    KeBugCheckEx(0x34u, 0x90493uLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  result = &CcVacbFreeList;
  CcMinimumFreeHighPriorityVacbs = 128;
  qword_140F8DF48 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  return result;
}
