/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14037AA90
 * Callers:
 *     SmKmStoreHelperWorker @ 0x14045D450 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1404C6288 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     SmKmFreeMdlForLock @ 0x14037AD84 (SmKmFreeMdlForLock.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14037ADB8 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmFpAllocate @ 0x14037C660 (SmFpAllocate.c)
 *     SmKmUnlockMdl @ 0x14039C804 (SmKmUnlockMdl.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     SmpFpReleaseResource @ 0x1404F9720 (SmpFpReleaseResource.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14060DFFC (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14060E14C (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ZwUnlockVirtualMemory @ 0x1406A9FD0 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140A5EAF4 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  int v7; // edx
  int v8; // edx
  int v9; // edx
  struct _MDL *v10; // r12
  int v11; // edx
  int v12; // ebx
  int v13; // eax
  int v14; // edx
  __int64 v15; // r14
  void *v16; // rcx
  int v17; // eax
  ULONG_PTR v18; // rcx
  __int64 v19; // rdx
  void *v20; // rcx
  int v21; // edx
  int v22; // r12d
  int v23; // eax
  void *VirtualMemory; // [rsp+30h] [rbp-10h] BYREF
  __int64 v25; // [rsp+38h] [rbp-8h]
  unsigned __int8 v26; // [rsp+88h] [rbp+48h]
  unsigned __int8 v27; // [rsp+88h] [rbp+48h]
  int PagePriorityThread; // [rsp+90h] [rbp+50h]
  unsigned __int64 v29; // [rsp+98h] [rbp+58h] BYREF

  VirtualMemory = 0LL;
  v29 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a2 - 2;
  if ( !v7 )
  {
    v19 = *(unsigned int *)(a3 + 24);
    v29 = *(_QWORD *)(a3 + 8);
    VirtualMemory = (void *)MmStoreAllocateVirtualMemory(v29, v19);
    v20 = VirtualMemory;
    if ( !VirtualMemory )
      goto LABEL_35;
    if ( *(_QWORD *)(a1 + 120) && (*(_DWORD *)(a3 + 40) & 1) == 0 )
    {
      v27 = CurrentThread[1].SavedApcStateFill[15];
      CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
      v22 = SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v29, 1, 0);
      if ( !v22 )
      {
        v12 = -1073741670;
        goto LABEL_46;
      }
      v12 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 120));
      CurrentThread[1].SavedApcStateFill[15] = v27;
      if ( v12 < 0 )
      {
LABEL_46:
        MmStoreFreeVirtualMemory(VirtualMemory);
        if ( v22 )
          SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v29, 1, 1);
        goto LABEL_19;
      }
      SmAcquireReleaseCharges(*(_QWORD *)(a3 + 16), v29, 1, 1);
      v20 = VirtualMemory;
    }
    *(_QWORD *)(a3 + 32) = v20;
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v16 = *(void **)a3;
    v29 = *(_QWORD *)(a3 + 8);
    v17 = *(_DWORD *)(a3 + 16);
    VirtualMemory = v16;
    if ( (v17 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v16);
      v18 = *(_QWORD *)(a1 + 120);
      if ( v18 )
        SmKmVirtualLockCtxMemoryUnlocked(v18);
    }
    goto LABEL_16;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v21 = v9 - 1;
    if ( !v21 )
    {
      v12 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(a3 + 8), 0LL, a4);
      goto LABEL_19;
    }
    if ( v21 != 1 )
    {
      v12 = -1073741811;
      goto LABEL_19;
    }
    VirtualMemory = *(void **)a3;
    v29 = *(_QWORD *)(a3 + 8);
    ZwUnlockVirtualMemory(-1LL, &VirtualMemory, &v29, 1LL);
    goto LABEL_16;
  }
  VirtualMemory = *(void **)a3;
  v29 = *(_QWORD *)(a3 + 8);
  v10 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), *(_DWORD *)(a3 + 20) & 1);
  if ( !v10 )
  {
LABEL_35:
    v12 = -1073741670;
    goto LABEL_19;
  }
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( PagePriorityThread != v11 )
    PagePriorityThread = PsSetPagePriorityThread((__int64)CurrentThread, v11);
  v26 = CurrentThread[1].SavedApcStateFill[15];
  CurrentThread[1].SavedApcStateFill[15] = *(_BYTE *)(a1 + 136);
  v12 = SmKmProbeAndLockAddress(VirtualMemory, v29, v10, 0);
  if ( v12 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
  {
    v25 = SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), 1);
    v23 = SmKmProbeAndLockAddress(VirtualMemory, v29, v10, 1u);
    v12 = v23;
    if ( v23 >= 0 )
      v10->Next = (struct _MDL *)v25;
    else
      SmFpFree(*(_QWORD *)(a1 + 128), 4LL, a1, v25);
  }
  if ( PagePriorityThread != *(_DWORD *)(a3 + 16) )
  {
    v13 = PsGetPagePriorityThread((__int64)CurrentThread);
    if ( v13 != v14 )
      PsSetPagePriorityThread((__int64)CurrentThread, v14);
  }
  CurrentThread[1].SavedApcStateFill[15] = v26;
  if ( v12 >= 0 )
  {
    VirtualMemory = (void *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 128), *(_DWORD *)(a3 + 20) & 1);
    if ( VirtualMemory )
    {
      *(_QWORD *)(a3 + 32) = v10;
LABEL_16:
      v12 = 0;
      goto LABEL_19;
    }
    v12 = -1073741670;
    SmKmUnlockMdl(v10, *(PEX_SPIN_LOCK *)(a1 + 128));
  }
  v15 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(v15 + 112) == a1 && (unsigned int)SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 128)) )
  {
    if ( !*(_BYTE *)(v15 + 94) )
    {
      _InterlockedExchange64((volatile __int64 *)(v15 + 112), 0LL);
      KeSetEvent((PRKEVENT)(v15 + 8), 0, 0);
    }
  }
  else
  {
    SmKmFreeMdlForLock(*(_QWORD *)(v15 + 32), v10);
  }
LABEL_19:
  *(_DWORD *)(a3 + 48) = v12;
}
