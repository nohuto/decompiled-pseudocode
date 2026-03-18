/*
 * XREFs of MiCreateSlabIdentity @ 0x140686A04
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14024B8D0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiDeletePendingSlabIdentities @ 0x14068716C (MiDeletePendingSlabIdentities.c)
 *     MiInitializeSlabIdentities @ 0x140688308 (MiInitializeSlabIdentities.c)
 */

__int64 __fastcall MiCreateSlabIdentity(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v3; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  int v8; // esi
  ULONG ClearBitsAndSet; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 18296);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 18296, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v6, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  if ( !*(_DWORD *)(a1 + 18288) )
  {
    v8 = MiInitializeSlabIdentities(a1);
    if ( v8 < 0 )
      goto LABEL_11;
    *(_DWORD *)(a1 + 18288) = 1;
  }
  MiDeletePendingSlabIdentities(a1, 1LL);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 18264), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v8 = -1073741298;
  }
  else
  {
    *(_QWORD *)(a1 + 8LL * ClearBitsAndSet + 17752) = 1LL;
    v8 = 0;
    *a2 = ClearBitsAndSet;
  }
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v11, v10);
  return (unsigned int)v8;
}
