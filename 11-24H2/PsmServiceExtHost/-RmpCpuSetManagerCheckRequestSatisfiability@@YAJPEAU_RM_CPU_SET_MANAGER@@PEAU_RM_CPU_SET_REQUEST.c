/*
 * XREFs of ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x18008A6D8
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180089CAC (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCheckRequestSatisfiability(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        char a3)
{
  unsigned int v4; // r9d
  int v6; // edx
  unsigned int i; // r10d
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int j; // edx

  v4 = 0;
  v6 = *((_DWORD *)a2 + 66) & 1;
  if ( v6 )
  {
    for ( i = 0; i < 0x20; ++i )
    {
      if ( (~*((_QWORD *)a1 + i + 11) & *((_QWORD *)a2 + i + 1)) != 0LL )
        return (unsigned int)-1073741811;
    }
  }
  if ( (a3 & 1) != 0 )
    v8 = *((_DWORD *)a1 + 351);
  else
    v8 = *((_DWORD *)a1 + 352);
  v9 = *((_DWORD *)a1 + 350);
  if ( v9 <= v8 || *(_DWORD *)a2 > v9 - v8 )
  {
    return (unsigned int)-1073741670;
  }
  else if ( v6 )
  {
    for ( j = 0; j < 0x20; ++j )
    {
      if ( (~*((_QWORD *)a1 + j + 43) & *((_QWORD *)a2 + j + 1)) != 0LL )
        return (unsigned int)-1073741670;
    }
  }
  return v4;
}
