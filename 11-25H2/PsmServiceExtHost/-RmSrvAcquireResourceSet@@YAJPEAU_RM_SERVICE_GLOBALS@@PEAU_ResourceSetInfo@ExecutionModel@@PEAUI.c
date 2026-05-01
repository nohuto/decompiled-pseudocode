/*
 * XREFs of ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18005A594
 * Callers:
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18005A290 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 * Callees:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18000E274 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18005FA4C (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z @ 0x180090DA4 (-RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmSrvAcquireResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        struct _RM_ACTIVITY_HOST *a4,
        unsigned __int64 a5)
{
  HANDLE v6; // rdi
  int v10; // ebx
  int v11; // ebx
  unsigned int v13; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  struct ExecutionModel::ResourceSet *v15; // [rsp+50h] [rbp-38h] BYREF

  v13 = 0;
  v15 = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  if ( !RmpResourceSetInfoIsValid(a2) )
  {
    v10 = -1073741584;
LABEL_22:
    v11 = v10 | 0x10000000;
    goto LABEL_23;
  }
  if ( (*((_WORD *)a2 + 8) & 0x200) != 0 && (*((_BYTE *)a1 + 508) & 8) == 0
    || (*((_WORD *)a2 + 8) & 0x400) != 0 && (*((_WORD *)a2 + 8) & 0x100) == 0 )
  {
    v10 = -1073741585;
    goto LABEL_22;
  }
  if ( a5 == -1LL )
  {
    v10 = -1073741574;
    goto LABEL_22;
  }
  v10 = RmpSystemQueryPackagePartitions((const unsigned __int16 *)a4 + 44, *((_DWORD *)a4 + 156), 0LL, &Handle, &v13);
  if ( v10 < 0 )
  {
    v6 = Handle;
    goto LABEL_22;
  }
  if ( (v13 & 1) != 0 )
    *((_BYTE *)a2 + 42) |= 0x80u;
  v6 = Handle;
  if ( Handle && (Handle == (HANDLE)-2LL || (int)NtCompareObjects(*((_QWORD *)a1 + 45), Handle) >= 0) )
  {
    v10 = -1073741733;
    goto LABEL_22;
  }
  RmpAcquireGlobalLock();
  v11 = ExecutionModel::ResourceManager::AcquireResourceSet(
          *((ExecutionModel::ResourceManager **)a1 + 442),
          a2,
          a4,
          v6,
          a3,
          a5,
          &v15);
  if ( v11 >= 0 )
    v11 = 0;
  RmpReleaseGlobalLock();
  if ( v15 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_23:
  if ( (((unsigned __int64)v6 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v6);
  return (unsigned int)v11;
}
