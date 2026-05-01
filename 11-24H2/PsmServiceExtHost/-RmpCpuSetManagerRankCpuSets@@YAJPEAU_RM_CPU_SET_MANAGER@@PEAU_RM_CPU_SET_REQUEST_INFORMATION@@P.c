/*
 * XREFs of ?RmpCpuSetManagerRankCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAPEAU_RM_CPU_SET_SCORE@@PEAK@Z @ 0x18008B904
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089CAC (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x18008AC94 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     ?RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_KAFFINITY_EX@@PEAU_SYSTEM_CPU_SET_INFORMATION@@K@Z @ 0x18008B50C (-RmpCpuSetManagerPopulateScores@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_SCORE@@KPEAU_RM_CPU.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerRankCpuSets(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        struct _RM_CPU_SET_SCORE **a3,
        unsigned int *a4)
{
  rsize_t v4; // r15
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  struct _SYSTEM_CPU_SET_INFORMATION *v9; // rdi
  struct _RM_CPU_SET_SCORE *Heap; // r14
  unsigned int v12; // [rsp+40h] [rbp-188h] BYREF
  struct _SYSTEM_CPU_SET_INFORMATION *v13; // [rsp+48h] [rbp-180h] BYREF
  struct _RM_CPU_SET_SCORE **v14; // [rsp+50h] [rbp-178h]
  unsigned int *v15; // [rsp+58h] [rbp-170h]
  _BYTE SystemInformation[272]; // [rsp+60h] [rbp-168h] BYREF

  v4 = *((unsigned int *)a1 + 350);
  v5 = 0;
  v15 = a4;
  v14 = a3;
  v8 = 0;
  v12 = 0;
  v9 = 0LL;
  v13 = 0LL;
  Heap = (struct _RM_CPU_SET_SCORE *)HampAllocateHeap(16LL * (unsigned int)v4);
  if ( Heap )
  {
    memset_0(SystemInformation, 0, 0x108uLL);
    if ( (*((_BYTE *)a2 + 268) & 1) != 0
      && NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0x108u, 0LL) < 0 )
    {
      memset_0(SystemInformation, 0, 0x108uLL);
    }
    if ( (*((_BYTE *)a2 + 268) & 4) != 0 )
    {
      RmpCpuSetManagerGetCpuSetInformation(&v13, &v12);
      v8 = v12;
      v9 = v13;
    }
    RmpCpuSetManagerPopulateScores(a1, Heap, v4, a2, (struct _KAFFINITY_EX *)SystemInformation, v9, v8);
    qsort_s(Heap, v4, 0x10uLL, (_CoreCrtSecureSearchSortCompareFunction)RmpCpuSetManagerCompareScores, a2);
    *v14 = Heap;
    *v15 = v4;
    if ( v9 )
      HampFreeHeap(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
