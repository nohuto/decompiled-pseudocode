/*
 * XREFs of PnpRestoreResourcesInternal @ 0x1407327F0
 * Callers:
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpFindBestConfiguration @ 0x14071FD40 (PnpFindBestConfiguration.c)
 *     PnpCmResourcesToIoResources @ 0x140731264 (PnpCmResourcesToIoResources.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140732598 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpDetermineResourceListSize @ 0x140979290 (PnpDetermineResourceListSize.c)
 *     IopResourceRequirementsListToReqList @ 0x140A65214 (IopResourceRequirementsListToReqList.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A89C08 (IopWriteAllocatedResourcesToRegistry.c)
 *     IopRearrangeReqList @ 0x140AA06C8 (IopRearrangeReqList.c)
 *     IopCommitConfiguration @ 0x140AA1FD4 (IopCommitConfiguration.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestoreResourcesInternal(__int64 a1)
{
  _DWORD *v1; // rdx
  void *v4; // rbx
  int BestConfiguration; // esi
  __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+3Ch] [rbp-34h]
  PVOID v12; // [rsp+48h] [rbp-28h]
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h]
  PVOID v15; // [rsp+60h] [rbp-10h]
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  v1 = *(_DWORD **)(a1 + 416);
  v9 = 0LL;
  if ( !v1 )
    return 0LL;
  v4 = (void *)PnpCmResourcesToIoResources(a1, v1, 0);
  if ( !v4 )
    return 3221225626LL;
  memset_0(&v10, 0, 0x40uLL);
  v10 = *(_QWORD *)(a1 + 32);
  v12 = v4;
  v11 = 4;
  BestConfiguration = IopResourceRequirementsListToReqList(&v10, &v13);
  if ( BestConfiguration >= 0 && (v6 = v13) != 0 )
  {
    IopRearrangeReqList(v13);
    if ( !*(_QWORD *)(v6 + 24) )
    {
      PnpFreeResourceRequirementsForAssignTable((unsigned __int64)&v10, (unsigned __int64)&vars0);
      return 3221225858LL;
    }
    BestConfiguration = PnpFindBestConfiguration((__int64)&v10, 1u, (__int64)&v9);
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)&v10, (unsigned __int64)&vars0);
    if ( BestConfiguration >= 0 )
      BestConfiguration = IopCommitConfiguration(&v9);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v7 = *(_QWORD *)(a1 + 416);
    v8 = PnpDetermineResourceListSize(v7);
    IopWriteAllocatedResourcesToRegistry(a1, v7, v8);
  }
  else
  {
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)BestConfiguration;
}
