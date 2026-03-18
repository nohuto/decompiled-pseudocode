/*
 * XREFs of IvtSetDevicePasidTable @ 0x14056DE50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     IvtUpdateScalableModeContextEntry @ 0x1404C9124 (IvtUpdateScalableModeContextEntry.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     IvtFreeScalableModePasidTables @ 0x14056B300 (IvtFreeScalableModePasidTables.c)
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
  int v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h]
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
    v13,
    v14,
    0,
    v11);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v6 )
    IvtFreeScalableModePasidTables(a1, v9);
}
