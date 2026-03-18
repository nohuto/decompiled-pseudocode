/*
 * XREFs of MmCleanProcessAddressSpace @ 0x140A06E44
 * Callers:
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiGetNextVad @ 0x1402614BC (MiGetNextVad.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReturnProcessQuota @ 0x1403CD728 (PsReturnProcessQuota.c)
 *     MiGetFirstVad @ 0x1404043B8 (MiGetFirstVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140404438 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404044B8 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiBeginProcessClean @ 0x140405D10 (MiBeginProcessClean.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     MiGetSharedVm @ 0x14040C800 (MiGetSharedVm.c)
 *     MiVadDeleted @ 0x140428540 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiCleanWorkingSet @ 0x140469A70 (MiCleanWorkingSet.c)
 *     MiCleanCfg @ 0x14048643C (MiCleanCfg.c)
 *     MiDeleteCloneZombies @ 0x14048F544 (MiDeleteCloneZombies.c)
 *     ExFreeSvmAsid @ 0x140491AF4 (ExFreeSvmAsid.c)
 *     MiClearCommitReleaseState @ 0x140669C3C (MiClearCommitReleaseState.c)
 *     VmCleanProcessAddressSpace @ 0x14079E568 (VmCleanProcessAddressSpace.c)
 *     MiCleanVad @ 0x1408E5224 (MiCleanVad.c)
 *     MiCleanEmbryonicProcess @ 0x140A070F0 (MiCleanEmbryonicProcess.c)
 *     MiCleanProcessPhysicalPages @ 0x140A071B8 (MiCleanProcessPhysicalPages.c)
 *     PsDereferenceSession @ 0x140A07200 (PsDereferenceSession.c)
 *     MiContractWsSwapPageFile @ 0x140A07248 (MiContractWsSwapPageFile.c)
 */

unsigned __int64 __fastcall MmCleanProcessAddressSpace(ULONG_PTR a1)
{
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ProcessPartition; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // ebp
  _QWORD *FirstVad; // rax
  void *v9; // rbx
  void *v10; // r12
  unsigned __int64 NextVad; // rax
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  ULONG_PTR v18; // rbx
  __int64 v19; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  BOOL v21; // [rsp+80h] [rbp+8h]

  memset(&Event, 0, sizeof(Event));
  if ( *(_QWORD *)(a1 + 1648) )
    VmCleanProcessAddressSpace(a1);
  result = MiCleanEmbryonicProcess(a1);
  if ( !(_DWORD)result )
  {
    MiGetSharedVm(a1 + 1024);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    CurrentThread = KeGetCurrentThread();
    v21 = MiBeginProcessClean((__int64)CurrentThread, a1);
    ProcessPartition = MiGetProcessPartition(a1);
    v5 = *(_QWORD *)(a1 + 1040);
    v6 = ProcessPartition;
LABEL_5:
    while ( 1 )
    {
      v7 = 0;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      FirstVad = MiGetFirstVad(a1);
      v9 = FirstVad;
      if ( !FirstVad )
        break;
      MiReferenceVad((__int64)FirstVad);
      while ( 1 )
      {
        v10 = v9;
        NextVad = MiGetNextVad((unsigned __int64)v9);
        v9 = (void *)NextVad;
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
    ExFreeSvmAsid(v14, v13, v15, v16);
    MiCleanCfg();
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    *(_QWORD *)(v5 + 1024) = 0LL;
    MiCleanProcessPhysicalPages(a1);
    v17 = *(_QWORD **)(a1 + 784);
    if ( v17 && *v17 )
      *v17 = 0LL;
    MiDeleteCloneZombies(a1, 0);
    v18 = MiCleanWorkingSet(a1);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    PsReturnProcessQuota(a1, v19, v18);
    result = MiReturnResident(v6, v18);
    if ( (*(_DWORD *)(a1 + 500) & 0x10000) != 0 )
      result = PsDereferenceSession();
    if ( v21 )
      return MiContractWsSwapPageFile(v6);
  }
  return result;
}
