/*
 * XREFs of PipRemoveDevicesInRelationList @ 0x14082F020
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     IopRemoveRelationFromList @ 0x1407276CC (IopRemoveRelationFromList.c)
 *     IopFreeRelationList @ 0x14082F144 (IopFreeRelationList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     IopSortRelationListForRemove @ 0x140832318 (IopSortRelationListForRemove.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A68A14 (PnpDeleteLockedDeviceNodes.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipRemoveDevicesInRelationList(char *P)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  bool v4; // si
  unsigned int ***v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rcx

  v1 = *((_QWORD *)P + 7);
  if ( v1 && (v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL)) != 0 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(v3 + 396) & 0x10) == 0 )
      v4 = *(_QWORD *)(v3 + 16) != 0LL;
    v5 = (unsigned int ***)(P + 64);
    v6 = IopSortRelationListForRemove(*((_QWORD *)P + 8));
    PnpDeleteLockedDeviceNodes(*((_QWORD *)P + 7), (int)*v5, 2, 0, *((_DWORD *)P + 21), 0, 0LL, 0LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(v3 + 300) == 784 )
        IopRemoveRelationFromList(*v5, *((_QWORD *)P + 7));
      PnpUnlinkDeviceRemovalRelations(v7, *v5);
    }
  }
  else
  {
    v6 = -1073741823;
    v5 = (unsigned int ***)(P + 64);
  }
  IopFreeRelationList(*v5);
  ExFreePoolWithTag(P, 0);
  return v6;
}
