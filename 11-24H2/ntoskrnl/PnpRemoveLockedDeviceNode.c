/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x14048D53C
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A64C7C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404DD2C0 (PipRestoreDevNodeState.c)
 *     PipIsProblemReadonly @ 0x140722134 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x14072B72C (PpProfileCommitTransitioningDock.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeUserFlags @ 0x140979A0C (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PnpDeleteAllDependencyRelations @ 0x1409BD534 (PnpDeleteAllDependencyRelations.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A88248 (PiDmaGuardProcessPostRemove.c)
 *     PnpUnloadAttachedDriver @ 0x140A8D55C (PnpUnloadAttachedDriver.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140A9F150 (PpHotSwapInitRemovalPolicy.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRemoveLockedDeviceNode(__int64 MaxDataSize, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  int v6; // r14d
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 result; // rax
  _QWORD *Pool2; // rsi
  _BYTE *v11; // r12
  KIRQL v12; // r8
  __int64 *v13; // rdx
  _DWORD *v14; // rdi
  PVOID *v15; // r14
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  __int64 i; // rcx
  __int64 v28; // rax
  KIRQL v29; // al
  int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v33 = v3;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(__int64 **)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v30 = *((_DWORD *)v8 + 99);
      v31 = (__int64 *)*v8;
      if ( (v30 & 0x10) != 0 )
      {
        v30 &= ~0x10u;
        *((_DWORD *)v8 + 99) = v30;
      }
      if ( v8[52] || v8[68] || (v30 & 0x40) != 0 )
      {
        PipSetDevNodeUserFlags(v8, 512LL);
        IopRemoveDevice((PDEVICE_OBJECT)v8[4]);
        PipClearDevNodeUserFlags(v8, 512LL);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 790LL);
      v8 = v31;
    }
    while ( v31 );
  }
  result = (unsigned int)(*(_DWORD *)(MaxDataSize + 300) - 784);
  if ( (unsigned int)result <= 1 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 787 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
  }
  if ( *(_DWORD *)(MaxDataSize + 300) != 790 )
    JUMPOUT(0x14048D5BFLL);
  v20 = *(_QWORD *)(v3 + 24);
  while ( v20 )
  {
    v20 = *(_QWORD *)(v20 + 24);
    ++v6;
  }
  Pool2 = 0LL;
  v11 = 0LL;
  if ( v6 )
  {
    v22 = 8 * v6 + 16;
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v22, 0x65647050u);
    if ( Pool2 )
    {
      v23 = ExAllocatePool2(0x100uLL, v22, 0x65647050u);
      v11 = (_BYTE *)v23;
      if ( v23 )
      {
        v24 = *(_QWORD **)(v3 + 24);
        v25 = Pool2;
        v26 = (_QWORD *)v23;
        while ( v24 )
        {
          ObfReferenceObjectWithTag(v24, 0x746C6644u);
          *v25++ = v24;
          *v26++ = v24[1];
          v24 = (_QWORD *)v24[3];
        }
        v3 = v33;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
  }
  v12 = KeAcquireQueuedSpinLock(0xAuLL);
  v13 = Pool2;
  if ( Pool2 )
  {
    for ( i = *Pool2; i; i = *v13 )
    {
      *(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) &= ~4u;
      v28 = *v13++;
      *(_DWORD *)(*(_QWORD *)(v28 + 312) + 32LL) |= 8u;
    }
  }
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~4u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 8u;
  KeReleaseQueuedSpinLock(0xAuLL, v12);
  v14 = (_DWORD *)(MaxDataSize + 396);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
  {
    v21 = *(_DWORD *)(MaxDataSize + 568);
    if ( v21 != 3 )
    {
      if ( v21 != 4 )
        goto LABEL_9;
      v14 = (_DWORD *)(MaxDataSize + 396);
    }
    PpProfileCommitTransitioningDock(MaxDataSize);
  }
LABEL_9:
  v15 = (PVOID *)Pool2;
  if ( Pool2 )
  {
    if ( *Pool2 )
    {
      do
      {
        v29 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v29);
        PnpUnloadAttachedDriver(*(PVOID *)((char *)v15 + v11 - (_BYTE *)Pool2));
        ObfDereferenceObjectWithTag(*v15++, 0x746C6644u);
      }
      while ( *v15 );
    }
    ExFreePoolWithTag(Pool2, 0);
    ExFreePoolWithTag(v11, 0);
    v14 = (_DWORD *)(MaxDataSize + 396);
  }
  v16 = KeAcquireQueuedSpinLock(0xAuLL);
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) &= ~8u;
  *(_DWORD *)(*(_QWORD *)(v3 + 312) + 32LL) |= 0x10u;
  KeReleaseQueuedSpinLock(0xAuLL, v16);
  v17 = 788LL;
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    v17 = 790LL;
  PipSetDevNodeState(MaxDataSize, v17);
  if ( a2
    && ((*v14 & 0x6000) == 0
     || ((a2 - 22) & 0xFFFFFFFD) == 0
     || (unsigned int)PipIsProblemReadonly(MaxDataSize, a2)
     && !(unsigned int)PipIsProblemReadonly(v32, *(unsigned int *)(MaxDataSize + 404))) )
  {
    PipClearDevNodeProblem(MaxDataSize);
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
  }
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    PnpDeleteAllDependencyRelations(v3);
  result = PiDmaGuardProcessPostRemove(MaxDataSize);
  v19 = *(_QWORD *)(MaxDataSize + 48);
  *(_DWORD *)(MaxDataSize + 704) &= ~0x20000u;
  if ( v19 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, v19, 23LL);
  return result;
}
