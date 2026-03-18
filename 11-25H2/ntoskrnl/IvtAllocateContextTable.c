/*
 * XREFs of IvtAllocateContextTable @ 0x1404D46BC
 * Callers:
 *     IvtAllocateTranslationStructures @ 0x14056A5D8 (IvtAllocateTranslationStructures.c)
 *     IvtLegacyAllocateTranslationStructures @ 0x14056C7A8 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacySetDeviceSvmCapabilities @ 0x14056D930 (IvtLegacySetDeviceSvmCapabilities.c)
 *     IvtSetDeviceSvmCapabilities @ 0x14056DF80 (IvtSetDeviceSvmCapabilities.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14055D1A4 (ExtEnvAllocatePhysicalMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14055D3E0 (ExtEnvFreePhysicalMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall IvtAllocateContextTable(__int64 a1, unsigned int a2)
{
  char v2; // r9
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 result; // rax
  void *v11; // rbp
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // rax
  __int64 v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  void *v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v2 = *(_BYTE *)(a1 + 320);
  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a2 >> 8;
  v5 = (unsigned __int8)a2 >> 3;
  v6 = 2 * v4;
  if ( v2 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    a1 = v6 + (v5 >= 0x10);
    v8 = (_QWORD *)(v7 + 8 * a1);
  }
  else
  {
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6);
  }
  if ( *v8 )
    return 0LL;
  v9 = (unsigned __int64 *)(*(_QWORD *)(v3 + 16) + 8 * v6);
  if ( v2 && v5 >= 0x10 )
    ++v9;
  result = ExtEnvAllocatePhysicalMemory(
             a1,
             4096LL,
             4096LL,
             *(unsigned int *)(v3 + 272),
             &v20,
             &v19,
             LockHandle.LockQueue.Next,
             LockHandle.LockQueue.Lock,
             *(_QWORD *)&LockHandle.OldIrql);
  if ( (int)result >= 0 )
  {
    v11 = v19;
    memmove(v19, *(const void **)(v3 + 40), 0x1000uLL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 208), &LockHandle);
    if ( *v8 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      }
      __writecr8(CurrentIrql);
      ExtEnvFreePhysicalMemory(v15, v11, 4096LL, *(unsigned int *)(v3 + 272));
    }
    else
    {
      v16 = v20;
      *v8 = v11;
      *v9 = ((unsigned __int64)(v16 / 4096) << 12) | 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        LOBYTE(v17) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
