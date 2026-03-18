/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14020D8E4
 * Callers:
 *     SmKmStoreHelperWorker @ 0x14045E110 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C5A10 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmKmUnlockMdl @ 0x14020D154 (SmKmUnlockMdl.c)
 *     SmKmFreeMdlForLock @ 0x14020DBD4 (SmKmFreeMdlForLock.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14020DC08 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     PsSetPagePriorityThread @ 0x14020E16C (PsSetPagePriorityThread.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140601FCC (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060211C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     SmpFpReleaseResource @ 0x140602264 (SmpFpReleaseResource.c)
 *     ZwUnlockVirtualMemory @ 0x14069ED00 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5FD24 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r13
  int v6; // edx
  int v7; // edx
  int v8; // edx
  struct _MDL *v9; // r12
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  __int64 v14; // r14
  void *v15; // rcx
  int v16; // eax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  int v20; // edx
  int v21; // r12d
  int v22; // eax
  void *VirtualMemory; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  unsigned __int8 v25; // [rsp+88h] [rbp+48h]
  unsigned __int8 v26; // [rsp+88h] [rbp+48h]
  unsigned int PagePriorityThread; // [rsp+90h] [rbp+50h]
  unsigned __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  VirtualMemory = 0LL;
  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = a2 - 2;
  if ( !v6 )
  {
    v18 = *(unsigned int *)(a3 + 24);
    v28 = *(_QWORD *)(a3 + 8);
    VirtualMemory = (void *)MmStoreAllocateVirtualMemory(v28, v18);
    v19 = VirtualMemory;
    if ( !VirtualMemory )
      goto LABEL_32;
    if ( *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a3 + 40) & 1) == 0 )
    {
      v26 = CurrentThread[1].SavedApcStateFill[15];
      CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
      v21 = SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v28, 1LL, 0LL);
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
        MmStoreFreeVirtualMemory(VirtualMemory);
        if ( v21 )
          SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v28, 1LL, 1LL);
        goto LABEL_19;
      }
      SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v28, 1LL, 1LL);
      v19 = VirtualMemory;
    }
    *(_QWORD *)(a3 + 32) = v19;
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v15 = *(void **)a3;
    v28 = *(_QWORD *)(a3 + 8);
    v16 = *(_DWORD *)(a3 + 16);
    VirtualMemory = v15;
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
    VirtualMemory = *(void **)a3;
    v28 = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory(-1LL, &VirtualMemory, &v28, 1LL);
    goto LABEL_16;
  }
  VirtualMemory = *(void **)a3;
  v28 = *(_QWORD *)(a3 + 8);
  v9 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), *(_DWORD *)(a3 + 20) & 1);
  if ( !v9 )
  {
LABEL_32:
    v11 = -1073741670;
    goto LABEL_19;
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread(CurrentThread, *(unsigned int *)(a3 + 16));
  if ( PagePriorityThread != v10 )
    PagePriorityThread = PsSetPagePriorityThread(CurrentThread);
  v25 = CurrentThread[1].SavedApcStateFill[15];
  CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
  v11 = SmKmProbeAndLockAddress(VirtualMemory, v28, v9, 0);
  if ( v11 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
  {
    v24 = SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), 1);
    v22 = SmKmProbeAndLockAddress(VirtualMemory, v28, v9, 1u);
    v11 = v22;
    if ( v22 >= 0 )
      v9->Next = (struct _MDL *)v24;
    else
      SmFpFree(*(_QWORD *)(a1 + 128), 4LL, a1);
  }
  if ( PagePriorityThread != *(_DWORD *)(a3 + 16) )
  {
    v12 = PsGetPagePriorityThread(CurrentThread, PagePriorityThread);
    if ( v12 != v13 )
      PsSetPagePriorityThread(CurrentThread);
  }
  CurrentThread[1].SavedApcStateFill[15] = v25;
  if ( v11 >= 0 )
  {
    VirtualMemory = (void *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), *(_DWORD *)(a3 + 20) & 1);
    if ( VirtualMemory )
    {
      *(_QWORD *)(a3 + 32) = v9;
LABEL_16:
      v11 = 0;
      goto LABEL_19;
    }
    v11 = -1073741670;
    SmKmUnlockMdl(v9, *(PEX_SPIN_LOCK *)(a1 + 128), a1);
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
