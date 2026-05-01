/*
 * XREFs of ?RmpCpuSetManagerInitializeReservedCpuSets@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008AEEC
 * Callers:
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180089EC8 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x18008AC94 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerInitializeReservedCpuSets(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // ebx
  unsigned int v3; // r10d
  unsigned int i; // r9d
  char *v5; // r8
  unsigned __int64 v6; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v9 = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&v9, &v8);
  if ( CpuSetInformation >= 0 )
  {
    memset_0((char *)a1 + 600, 0, 0x100uLL);
    v3 = v8;
    for ( i = 0; i < v3; i += *(_DWORD *)v5 )
    {
      v5 = (char *)v9 + i;
      if ( !*((_DWORD *)v5 + 1) && (v5[19] & 2) != 0 )
      {
        v6 = (unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 2) - 256) >> 16;
        *((_QWORD *)a1 + v6 + 75) |= 1LL << v5[8];
      }
    }
    CpuSetInformation = 0;
  }
  if ( v9 )
    HampFreeHeap(v9);
  return (unsigned int)CpuSetInformation;
}
