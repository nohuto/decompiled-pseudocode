/*
 * XREFs of ?RmpCpuSetManagerReleaseAllProcessorsFromAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008BBFC
 * Callers:
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008B2F4 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008BCB8 (-RmpCpuSetManagerReleaseAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008B3B4 (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 */

void __fastcall RmpCpuSetManagerReleaseAllProcessorsFromAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2)
{
  char v2; // al
  _QWORD *v3; // rdi
  unsigned int v4; // ebp
  __int64 v5; // r14
  int v8; // eax
  char *v9; // r10
  char *i; // r9
  char **v11; // r9

  v2 = 0;
  v3 = (_QWORD *)((char *)a2 + 104);
  v4 = 0;
  v5 = a1 - a2;
  do
  {
    if ( !*((_DWORD *)a2 + 90) )
      break;
    if ( *v3 )
    {
      v8 = RtlNumberOfSetBitsUlongPtr();
      *(_QWORD *)((char *)v3 + v5 + 240) |= *v3;
      *v3 = 0LL;
      *((_DWORD *)a1 + 350) += v8;
      *((_DWORD *)a2 + 90) -= v8;
      v2 = 1;
    }
    ++v4;
    ++v3;
  }
  while ( v4 < 0x20 );
  if ( v2 )
  {
    *((_DWORD *)a1 + 353) |= 1u;
    v9 = (char *)a2 + 80;
    for ( i = (char *)*((_QWORD *)a2 + 10); i != v9; i = *v11 )
      RmpCpuSetManagerMarkProcessDirty(a1, *((struct _RM_CPU_SET_PROCESS **)i - 6));
  }
}
