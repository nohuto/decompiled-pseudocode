/*
 * XREFs of ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404F33F0
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StRegionReadDereference@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1404F348C (-StRegionReadDereference@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r8d
  int v7; // ecx

  ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, (unsigned int)(*(_DWORD *)(a2 + 24) >> a1[203]), a3, a4);
  v6 = a1[546];
  if ( (v6 & 1) != 0 && (*(_QWORD *)(a2 + 16) | 1LL) == *((_QWORD *)a1 + 273) )
    a1[546] = v6 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag(*(PVOID *)(a2 + 16), 0);
  v7 = a1[548];
  if ( (v7 & 1) != 0 && (a2 | 1) == *((_QWORD *)a1 + 274) )
    a1[548] = v7 & 0xFFFFFFFE;
  else
    ExFreePoolWithTag((PVOID)a2, 0);
}
