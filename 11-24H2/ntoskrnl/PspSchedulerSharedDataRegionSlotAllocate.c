/*
 * XREFs of PspSchedulerSharedDataRegionSlotAllocate @ 0x1408EAED0
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1404084E0 (ObReferenceObjectByPointerWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     KeSwappablePageGetLockedAddress @ 0x140470D90 (KeSwappablePageGetLockedAddress.c)
 *     KeSwappablePageReference @ 0x140470DA8 (KeSwappablePageReference.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PspSchedulerSharedDataRegionSlotAllocate(struct _KTHREAD *a1, __int64 a2, _QWORD *a3)
{
  _KPROCESS *v6; // rbx
  NTSTATUS v7; // esi
  struct _KTHREAD *CurrentThread; // rcx
  char *v10; // rax
  char *v11; // r15
  _DWORD *v12; // r12
  ULONG ClearBitsAndSet; // eax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 LockedAddress; // rax
  struct _KTHREAD *v19; // rax
  char *v20; // r14
  _DWORD *v21; // rax
  _DWORD *v22; // r8
  PVOID BaseAddress; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  if ( a1 != KeGetCurrentThread() )
    return (unsigned int)-1073741637;
  v6 = *(_KPROCESS **)(a2 + 160);
  if ( v6 != KeGetCurrentThread()->ApcState.Process || v6 != PsGetCurrentThreadProcess() || a1[1].Process )
    return (unsigned int)-1073741637;
  v7 = ObReferenceObjectByPointerWithTag((PVOID)a2, 1u, PspSchedulerSharedDataType, 0, 0x61537350u);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire(a2 + 200, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v10, a2 + 200);
    if ( v11 )
      v11[10] = 1;
    v12 = (_DWORD *)(a2 + 224);
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a2 + 208), 1u, *(_DWORD *)(a2 + 224));
    v14 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
    {
      v7 = -1073741670;
    }
    else
    {
      *v12 = ClearBitsAndSet + 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 200));
        v12 = (_DWORD *)(a2 + 224);
      }
      KeAbPostRelease(a2 + 200);
      KeLeaveCriticalRegion();
      v15 = (unsigned int)v14 >> 6;
      v16 = *(unsigned int *)(a2 + 192);
      if ( _bittest64(&v16, v15) )
        goto LABEL_16;
      RegionSize = 4096LL;
      BaseAddress = (PVOID)(*(_QWORD *)(a2 + 184) + (unsigned int)((_DWORD)v15 << 12));
      v7 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      if ( v7 >= 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 192), v15);
LABEL_16:
        memset_0((void *)((v14 << 6) + *(_QWORD *)(a2 + 176)), 0, 0x40uLL);
        v17 = a2 + 80 * v15;
        a1->SchedulerSharedOffset = (v14 & 0x3F) << 6;
        a1->SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)v17;
        KeSwappablePageReference(v17);
        LockedAddress = KeSwappablePageGetLockedAddress(&a1->SchedulerSharedSwappablePage->RegionStart);
        if ( LockedAddress )
          a1->SchedulerSharedSystemSlot = (void *)(LockedAddress + a1->SchedulerSharedOffset);
        a1[1].Process = (_KPROCESS *)a2;
        if ( a3 )
          *a3 = (v14 << 6) + *(_QWORD *)(a2 + 184);
        return (unsigned int)v7;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v20 = (char *)KeAbPreAcquire(a2 + 200, 0LL);
      v21 = v12;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 200), 0LL) )
      {
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 200), v20, a2 + 200);
        v21 = (_DWORD *)(a2 + 224);
      }
      v22 = v12;
      if ( v20 )
      {
        v20[10] = 1;
        v22 = v21;
      }
      *(_BYTE *)(*(_QWORD *)(a2 + 216) + (v14 >> 3)) &= ~(1 << (v14 & 7));
      if ( *v12 > (unsigned int)v14 )
        *v22 = v14;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 200));
    KeAbPostRelease(a2 + 200);
    KeLeaveCriticalRegion();
    ObfDereferenceObjectWithTag((PVOID)a2, 0x61537350u);
  }
  return (unsigned int)v7;
}
