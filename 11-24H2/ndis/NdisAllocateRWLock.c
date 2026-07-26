/*
 * XREFs of NdisAllocateRWLock @ 0x14004E810
 * Callers:
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x14004E500 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x14008CE30 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x14018D7A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14002C200 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x14004E8C0 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 *     ??$?0$00X@?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@QEAA@$$T@Z @ 0x14008C3C0 (--$-0$00X@-$unique_ptr@VRegistryKnobCollection@@U-$KFreePool@VRegistryKnobCollection@@@@@wistd@@.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  __int64 Pool2; // rax
  struct _NDIS_RW_LOCK_EX *v3; // rbx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  Pool2 = ExAllocatePool2(64LL, 40LL, 2003977294LL);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      &P,
      Pool2);
  }
  else
  {
    wistd::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>(&P);
  }
  v3 = (struct _NDIS_RW_LOCK_EX *)P;
  if ( P )
  {
    *(_DWORD *)P = 827086674;
    if ( ndisInitializeRWLock(v3, NdisHandle) )
      return v3;
    ExFreePoolWithTag(v3, 0);
  }
  return 0LL;
}
