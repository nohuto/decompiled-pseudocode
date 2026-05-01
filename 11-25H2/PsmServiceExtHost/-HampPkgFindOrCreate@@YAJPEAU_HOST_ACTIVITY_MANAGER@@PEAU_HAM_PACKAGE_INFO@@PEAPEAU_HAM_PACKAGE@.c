/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180040788
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x18003EF3C (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013D80 (-HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180014C28 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x180040A04 (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180040C80 (CemRcTableFindOrInsertEx.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  struct _HAM_PACKAGE *v5; // rdi
  int v6; // eax
  struct _HAM_USER *v7; // rsi
  unsigned int v8; // ebx
  struct _HAM_PACKAGE *v9; // rax
  struct _HAM_PACKAGE *Heap; // rax
  struct _HAM_PACKAGE *v11; // rbx
  struct _HAM_USER *v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  v6 = HampUserFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132), *((_DWORD *)a2 + 50), &v13);
  v7 = v13;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = HampPkgFindInUser(v13, a2);
    if ( v9 )
      goto LABEL_12;
    Heap = (struct _HAM_PACKAGE *)HampAllocateHeap(0x160uLL);
    v11 = Heap;
    if ( Heap )
    {
      HampPkgInitialize(v7, a2, Heap);
      v5 = v11;
      v13 = 0LL;
      CemRcTableFindOrInsertEx((_DWORD)v7 + 40, (_DWORD)v11 + 96, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v11);
      v9 = v13;
      if ( v11 == v13 )
      {
        *a3 = v11;
        v5 = 0LL;
LABEL_6:
        v8 = 0;
        goto LABEL_7;
      }
LABEL_12:
      *a3 = v9;
      goto LABEL_6;
    }
    v8 = -1073741801;
  }
LABEL_7:
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v5 )
    CemRcObjectDereference(v5);
  return v8;
}
