/*
 * XREFs of ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005F8C
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B20 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 * Callees:
 *     CemRcTableFind @ 0x180004220 (CemRcTableFind.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180040C80 (CemRcTableFindOrInsertEx.c)
 *     ?ArHostInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@PEAU_RM_PSM_HOST_INFO@@PEAU_AR_ACTIVITY_HOST@@@Z @ 0x180066808 (-ArHostInitialize@@YAXPEAU_ACTIVITY_RESTARTER@@PEAU_RM_PSM_HOST_INFO@@PEAU_AR_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ArHostFindOrCreate(
        struct _RM_PSM_HOST_INFO *a1,
        struct _ACTIVITY_RESTARTER *a2,
        struct _AR_ACTIVITY_HOST **a3)
{
  int v4; // r15d
  struct _AR_ACTIVITY_HOST *v7; // rax
  unsigned int v8; // ebx
  struct _AR_ACTIVITY_HOST *Heap; // rax
  struct _AR_ACTIVITY_HOST *v10; // rdi
  struct _AR_ACTIVITY_HOST *v12; // [rsp+50h] [rbp+8h]

  v4 = (_DWORD)a1 + 544;
  v7 = (struct _AR_ACTIVITY_HOST *)CemRcTableFind(
                                     (__int64)a2,
                                     (__int64)a1 + 544,
                                     (__int64 (__fastcall *)(__int64, __int64))ArHostCompareByHostId);
  v8 = 0;
  v12 = v7;
  if ( v7 )
  {
    *a3 = v7;
  }
  else
  {
    Heap = (struct _AR_ACTIVITY_HOST *)HampAllocateHeap(0x260uLL);
    v10 = Heap;
    if ( Heap )
    {
      ArHostInitialize(a2, a1, Heap);
      CemRcTableFindOrInsertEx((_DWORD)a2, v4, (unsigned int)ArHostCompareByHostId, (_DWORD)v10);
      *a3 = v12;
      CemRcObjectDereference(v10);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
