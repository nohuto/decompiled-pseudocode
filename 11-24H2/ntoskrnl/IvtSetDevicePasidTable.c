/*
 * XREFs of IvtSetDevicePasidTable @ 0x14056E5E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404C4D8C (IvtUpdateScalableModeContextEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 */

void __fastcall IvtSetDevicePasidTable(__int64 a1, __int64 a2, char a3)
{
  bool v6; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  v8 = *(_QWORD *)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 64);
  if ( v8 )
  {
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 44);
      v6 = v8 != v9;
    }
    else
    {
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 44LL);
    }
    *(_QWORD *)(a2 + 64) = v8;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 44);
    v8 = *(_QWORD *)(a2 + 64);
  }
  *(_QWORD *)(a2 + 72) = 0LL;
  v11 = v10;
  if ( a3 )
  {
    v12 = 4;
    *(_DWORD *)(v8 + 48) = 3;
  }
  else
  {
    v12 = *(_DWORD *)(v8 + 48);
  }
  IvtUpdateScalableModeContextEntry(
    a1,
    *(unsigned int **)(a2 + 56),
    *(_QWORD *)(a2 + 64),
    *(_DWORD *)(a2 + 80),
    v12,
    v14,
    v15,
    0,
    v11);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v13);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v6 )
    IvtFreeScalableModePasidTables(a1, v9);
}
