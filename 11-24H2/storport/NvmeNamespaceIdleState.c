/*
 * XREFs of NvmeNamespaceIdleState @ 0x140133760
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x14002B0C0 (RaidGetStorPoFxComponent.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 */

void __fastcall NvmeNamespaceIdleState(struct _SLIST_ENTRY *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebp
  _SLIST_ENTRY *Next; // rdi
  int *StorPoFxComponent; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  signed __int32 v11; // r11d
  _SLIST_ENTRY *v12; // rdx
  int v13; // r9d
  int v14; // eax
  _SLIST_ENTRY *v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 1;
  Next = a1[1].Next[8].Next;
  if ( NvmeNamespaceCheckAndAcquirePoFx((__int64)a1) )
  {
    *(_DWORD *)(*((_QWORD *)&a1[8].Next->Next + 1) + 16LL) = a3;
    StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*((_QWORD *)&a1[8].Next->Next + 1) + 8LL), a2);
    if ( StorPoFxComponent && *StorPoFxComponent == 2 )
      v6 = StorPoFxComponent[8];
    v12 = Next[10].Next;
    v13 = (int)v12[11].Next;
    if ( (v13 & 1) != 0 )
      v6 = 1;
    if ( (*(_DWORD *)(&Next[25].Next[11].Next + 1) & 0x40000000) == 0 )
      goto LABEL_24;
    v14 = *(_DWORD *)(v10 + 32);
    if ( (v14 & 2) != 0 )
    {
      if ( a3 <= v6 )
      {
        if ( LOBYTE(v12->Next) != 1 )
          goto LABEL_24;
        goto LABEL_11;
      }
      if ( LOBYTE(v12->Next) != 1 )
        goto LABEL_24;
    }
    else
    {
      if ( (v13 & 0x20) == 0 || (v14 & 0x200) == 0 || LOBYTE(v12->Next) != 1 )
        goto LABEL_24;
      if ( !a3 )
      {
LABEL_11:
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v9 + 96), 1, 0) )
        {
          PoFxActivateComponent(**((_QWORD **)&Next[10].Next->Next + 1), 0LL, 0LL);
          v15 = Next[10].Next;
          if ( *(_BYTE *)(*((_QWORD *)&v15->Next + 1) + 64LL) != 1 )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&v15[7].Next + 1, &LockHandle);
            if ( SHIDWORD(Next[10].Next[4].Next) > 1 )
            {
              BYTE2(a1[8].Next[3].Next) |= 1u;
              LOWORD(a1[8].Next[3].Next) = a3;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[10].Next[6], a1 + 9);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_25:
              NvmeNamespaceReleasePoFx((__int64)a1);
              return;
            }
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
        }
LABEL_24:
        PoFxCompleteIdleState(**((_QWORD **)&a1[8].Next->Next + 1), a2);
        goto LABEL_25;
      }
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 96), v11, 1) == 1 )
      PoFxIdleComponent(**((_QWORD **)&Next[10].Next->Next + 1), 0LL, 0LL);
    goto LABEL_24;
  }
}
