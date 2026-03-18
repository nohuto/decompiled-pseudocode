/*
 * XREFs of PnpRemoveLockedDeviceNode @ 0x1404926CC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A6B71C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404E6BC4 (PipRestoreDevNodeState.c)
 *     PipIsProblemReadonly @ 0x1407245A4 (PipIsProblemReadonly.c)
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeUserFlags @ 0x14098E9D4 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PnpDeleteAllDependencyRelations @ 0x140A0F124 (PnpDeleteAllDependencyRelations.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
 *     PiDmaGuardProcessPostRemove @ 0x140A8BD58 (PiDmaGuardProcessPostRemove.c)
 *     PnpUnloadAttachedDriver @ 0x140A90E60 (PnpUnloadAttachedDriver.c)
 *     PpHotSwapInitRemovalPolicy @ 0x140AA3DC0 (PpHotSwapInitRemovalPolicy.c)
 *     PipSetDevNodeUserFlags @ 0x140AC3794 (PipSetDevNodeUserFlags.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v22; // rax
  _QWORD *v23; // rdi
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  __int64 i; // rcx
  __int64 v27; // rax
  KIRQL v28; // al
  int v29; // eax
  __int64 *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // [rsp+60h] [rbp+8h]

  v3 = *(_QWORD *)(MaxDataSize + 32);
  v32 = v3;
  v6 = 0;
  PpHotSwapInitRemovalPolicy();
  v8 = *(__int64 **)(v7 + 8);
  if ( v8 )
  {
    do
    {
      v29 = *((_DWORD *)v8 + 99);
      v30 = (__int64 *)*v8;
      if ( (v29 & 0x10) != 0 )
      {
        v29 &= ~0x10u;
        *((_DWORD *)v8 + 99) = v29;
      }
      if ( v8[52] || v8[68] || (v29 & 0x40) != 0 )
      {
        PipSetDevNodeUserFlags(v8, 512LL);
        IopRemoveDevice((PDEVICE_OBJECT)v8[4]);
        PipClearDevNodeUserFlags(v8, 512LL);
        IopReleaseDeviceResources(v8, 0LL);
      }
      PipSetDevNodeState(v8, 790LL);
      v8 = v30;
    }
    while ( v30 );
  }
  result = (unsigned int)(*(_DWORD *)(MaxDataSize + 300) - 784);
  if ( (unsigned int)result <= 1 )
  {
    if ( *(_DWORD *)(MaxDataSize + 304) == 787 )
      return result;
    PipRestoreDevNodeState(MaxDataSize);
  }
  if ( *(_DWORD *)(MaxDataSize + 300) != 790 )
    JUMPOUT(0x14049274FLL);
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
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v22 = ExAllocatePool2(0x100uLL);
      v11 = (_BYTE *)v22;
      if ( v22 )
      {
        v23 = *(_QWORD **)(v3 + 24);
        v24 = Pool2;
        v25 = (_QWORD *)v22;
        while ( v23 )
        {
          ObfReferenceObjectWithTag(v23, 0x746C6644u);
          *v24++ = v23;
          *v25++ = v23[1];
          v23 = (_QWORD *)v23[3];
        }
        v3 = v32;
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
      v27 = *v13++;
      *(_DWORD *)(*(_QWORD *)(v27 + 312) + 32LL) |= 8u;
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
        v28 = KeAcquireQueuedSpinLock(0xAuLL);
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) &= ~8u;
        *(_DWORD *)(*((_QWORD *)*v15 + 39) + 32LL) |= 0x10u;
        KeReleaseQueuedSpinLock(0xAuLL, v28);
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
     && !(unsigned int)PipIsProblemReadonly(v31, *(unsigned int *)(MaxDataSize + 404))) )
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
