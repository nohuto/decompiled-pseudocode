/*
 * XREFs of MiCreateSlabIdentity @ 0x140687B34
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiDeletePendingSlabIdentities @ 0x14068829C (MiDeletePendingSlabIdentities.c)
 *     MiInitializeSlabIdentities @ 0x140689438 (MiInitializeSlabIdentities.c)
 */

__int64 __fastcall MiCreateSlabIdentity(__int64 a1, _BYTE *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v3; // rbx
  char *v6; // rax
  char *v7; // rsi
  int v8; // esi
  ULONG ClearBitsAndSet; // eax
  bool v10; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 18296);
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire(a1 + 18296, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    v7[10] = 1;
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
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v8;
}
