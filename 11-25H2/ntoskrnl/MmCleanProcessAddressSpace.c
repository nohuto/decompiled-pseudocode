/*
 * XREFs of MmCleanProcessAddressSpace @ 0x140A04D48
 * Callers:
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiCleanCfg @ 0x1402A62C8 (MiCleanCfg.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiGetNextVad @ 0x1402A96D8 (MiGetNextVad.c)
 *     MiCleanWorkingSet @ 0x1403C3D9C (MiCleanWorkingSet.c)
 *     PsReturnProcessQuota @ 0x1403C5C8C (PsReturnProcessQuota.c)
 *     MiBeginProcessClean @ 0x1403D80B8 (MiBeginProcessClean.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiGetFirstVad @ 0x14047FEF0 (MiGetFirstVad.c)
 *     MiDeleteCloneZombies @ 0x14048FC24 (MiDeleteCloneZombies.c)
 *     ExFreeSvmAsid @ 0x140492894 (ExFreeSvmAsid.c)
 *     MiClearCommitReleaseState @ 0x14065E11C (MiClearCommitReleaseState.c)
 *     VmCleanProcessAddressSpace @ 0x14078F1A8 (VmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x1408B4DF0 (MiCleanVad.c)
 *     MiCleanEmbryonicProcess @ 0x140A04FF4 (MiCleanEmbryonicProcess.c)
 *     MiCleanProcessPhysicalPages @ 0x140A050BC (MiCleanProcessPhysicalPages.c)
 *     PsDereferenceSession @ 0x140A05104 (PsDereferenceSession.c)
 *     MiContractWsSwapPageFile @ 0x140A0514C (MiContractWsSwapPageFile.c)
 */

unsigned __int64 __fastcall MmCleanProcessAddressSpace(__int64 a1)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ProcessPartition; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // ebp
  char *FirstVad; // rax
  char *v9; // rbx
  char *v10; // r12
  unsigned __int64 NextVad; // rax
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  BOOL v19; // [rsp+80h] [rbp+8h]

  memset(&Event, 0, sizeof(Event));
  if ( *(_QWORD *)(a1 + 1648) )
    VmCleanProcessAddressSpace(a1);
  result = MiCleanEmbryonicProcess(a1);
  if ( !(_DWORD)result )
  {
    MiGetSharedVm(a1 + 1024);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    CurrentThread = KeGetCurrentThread();
    v19 = MiBeginProcessClean((__int64)CurrentThread, a1);
    ProcessPartition = MiGetProcessPartition(a1);
    v5 = *(_QWORD *)(a1 + 1040);
    v6 = ProcessPartition;
LABEL_5:
    while ( 1 )
    {
      v7 = 0;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      FirstVad = (char *)MiGetFirstVad(a1);
      v9 = FirstVad;
      if ( !FirstVad )
        break;
      MiReferenceVad((__int64)FirstVad);
      while ( 1 )
      {
        v10 = v9;
        NextVad = MiGetNextVad((unsigned __int64)v9);
        v9 = (char *)NextVad;
        if ( NextVad )
          MiReferenceVad(NextVad);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)v10);
        if ( (unsigned int)MiCleanVad(v10) )
          v7 = 1;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        if ( !v9 )
          break;
        MiLockVad((__int64)CurrentThread, (__int64)v9);
        if ( (unsigned int)MiVadDeleted((__int64)v9) )
        {
          MiUnlockVad((__int64)CurrentThread, (__int64)v9);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          MiLockVad((__int64)CurrentThread, (__int64)v9);
          MiCleanVad(v9);
          goto LABEL_5;
        }
        MiUnlockVad((__int64)CurrentThread, (__int64)v9);
      }
      if ( !v7 )
        break;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    *(_QWORD *)(v5 + 1024) = &Event;
    v12 = _InterlockedAdd((volatile signed __int32 *)(v5 + 1000), 0xFFFFFFFF) != 0;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( v12 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( (HIBYTE(*(_DWORD *)(a1 + 1208)) & 0x30) == 0x30 )
      MiClearCommitReleaseState(a1 + 1024);
    ExFreeSvmAsid(v14, v13);
    MiCleanCfg();
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    *(_QWORD *)(v5 + 1024) = 0LL;
    MiCleanProcessPhysicalPages(a1);
    v15 = *(_QWORD **)(a1 + 784);
    if ( v15 && *v15 )
      *v15 = 0LL;
    MiDeleteCloneZombies(a1, 0);
    v16 = MiCleanWorkingSet(a1);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    PsReturnProcessQuota((struct _KPROCESS *)a1, v17, v16);
    result = MiReturnResident(v6, v16);
    if ( (*(_DWORD *)(a1 + 500) & 0x10000) != 0 )
      result = PsDereferenceSession();
    if ( v19 )
      return MiContractWsSwapPageFile(v6);
  }
  return result;
}
