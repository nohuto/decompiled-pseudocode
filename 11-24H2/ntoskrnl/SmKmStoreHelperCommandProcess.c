/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x1402E7B10
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140452510 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404BF6E4 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     SmKmFreeMdlForLock @ 0x1402E7E04 (SmKmFreeMdlForLock.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1402E7E38 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     SmKmUnlockMdl @ 0x1402F9B04 (SmKmUnlockMdl.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060C5BC (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060C70C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ZwUnlockVirtualMemory @ 0x1406AAF70 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A56CE4 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  int v6; // edx
  int v7; // edx
  int v8; // edx
  struct _MDL *v9; // r12
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r14
  PVOID v15; // rcx
  int v16; // eax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  PVOID v19; // rcx
  int v20; // edx
  int v21; // r12d
  int v22; // eax
  PVOID BaseAddress; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  unsigned __int8 v25; // [rsp+88h] [rbp+48h]
  unsigned __int8 v26; // [rsp+88h] [rbp+48h]
  unsigned int PagePriorityThread; // [rsp+90h] [rbp+50h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+58h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a2 - 2;
  if ( !v6 )
  {
    v18 = *(unsigned int *)(a3 + 24);
    RegionSize = *(_QWORD *)(a3 + 8);
    BaseAddress = (PVOID)MmStoreAllocateVirtualMemory(RegionSize, v18);
    v19 = BaseAddress;
    if ( !BaseAddress )
      goto LABEL_35;
    if ( *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a3 + 40) & 1) == 0 )
    {
      v26 = CurrentThread[1].SavedApcStateFill[15];
      CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
      v21 = SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), RegionSize, 1LL);
      if ( !v21 )
      {
        v11 = -1073741670;
        goto LABEL_46;
      }
      v11 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 120));
      CurrentThread[1].SavedApcStateFill[15] = v26;
      if ( v11 < 0 )
      {
LABEL_46:
        MmStoreFreeVirtualMemory(BaseAddress);
        if ( v21 )
          SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), RegionSize, 1LL);
        goto LABEL_19;
      }
      SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), RegionSize, 1LL);
      v19 = BaseAddress;
    }
    *(_QWORD *)(a3 + 32) = v19;
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v15 = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v16 = *(_DWORD *)(a3 + 16);
    BaseAddress = v15;
    if ( (v16 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v15);
      v17 = *(_QWORD *)(a1 + 120);
      if ( v17 )
        SmKmVirtualLockCtxMemoryUnlocked(v17);
    }
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v20 = v8 - 1;
    if ( !v20 )
    {
      v11 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a3 + 8));
      goto LABEL_19;
    }
    if ( v20 != 1 )
    {
      v11 = -1073741811;
      goto LABEL_19;
    }
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    goto LABEL_16;
  }
  BaseAddress = *(PVOID *)a3;
  RegionSize = *(_QWORD *)(a3 + 8);
  v9 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), *(_DWORD *)(a3 + 20) & 1);
  if ( !v9 )
  {
LABEL_35:
    v11 = -1073741670;
    goto LABEL_19;
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread, *(unsigned int *)(a3 + 16));
  if ( PagePriorityThread != (_DWORD)v10 )
    PagePriorityThread = PsSetPagePriorityThread(CurrentThread, v10);
  v25 = CurrentThread[1].SavedApcStateFill[15];
  CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
  v11 = SmKmProbeAndLockAddress(BaseAddress, RegionSize, v9, 0);
  if ( v11 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
  {
    v24 = SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), 1);
    v22 = SmKmProbeAndLockAddress(BaseAddress, RegionSize, v9, 1u);
    v11 = v22;
    if ( v22 >= 0 )
      v9->Next = (struct _MDL *)v24;
    else
      SmFpFree(*(_QWORD *)(a1 + 128), 4LL, a1, v24);
  }
  if ( PagePriorityThread != *(_DWORD *)(a3 + 16) )
  {
    v12 = PsGetPagePriorityThread(CurrentThread, PagePriorityThread);
    if ( v12 != (_DWORD)v13 )
      PsSetPagePriorityThread(CurrentThread, v13);
  }
  CurrentThread[1].SavedApcStateFill[15] = v25;
  if ( v11 >= 0 )
  {
    BaseAddress = (PVOID)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), *(_DWORD *)(a3 + 20) & 1);
    if ( BaseAddress )
    {
      *(_QWORD *)(a3 + 32) = v9;
LABEL_16:
      v11 = 0;
      goto LABEL_19;
    }
    v11 = -1073741670;
    SmKmUnlockMdl(v9, *(PEX_SPIN_LOCK *)(a1 + 128));
  }
  v14 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(v14 + 112) == a1 && (unsigned int)SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 128)) )
  {
    if ( !*(_BYTE *)(v14 + 94) )
    {
      _InterlockedExchange64((volatile __int64 *)(v14 + 112), 0LL);
      KeSetEvent((PRKEVENT)(v14 + 8), 0, 0);
    }
  }
  else
  {
    SmKmFreeMdlForLock(*(_QWORD *)(v14 + 32), v9);
  }
LABEL_19:
  *(_DWORD *)(a3 + 48) = v11;
}
