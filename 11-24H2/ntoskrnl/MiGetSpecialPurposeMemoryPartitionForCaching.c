/*
 * XREFs of MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140459B70
 * Callers:
 *     MiCreatePagefileMemoryExtents @ 0x1407FDE8C (MiCreatePagefileMemoryExtents.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiGetSpecialPurposeMemoryPartitionForCaching(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rsi
  __int64 v4; // rax
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rbp
  signed __int64 *v8; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v13; // rcx

  if ( a2 )
    *a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) != 0 )
    return 0LL;
  v3 = (_QWORD *)(a1 + 17640);
  v4 = *(_QWORD *)(a1 + 17640);
  if ( v4 == a1 + 17640 )
    return 0LL;
  if ( !a2 )
    return *(_QWORD *)(v4 - 8);
  CurrentThread = KeGetCurrentThread();
  v8 = (signed __int64 *)(a1 + 17672);
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = KeAbPreAcquire(a1 + 17672, 0LL);
  if ( _InterlockedCompareExchange64(v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, 0, v9, (__int64)v8);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  if ( (_QWORD *)*v3 != v3 )
  {
    v10 = *v3 - 72LL;
    ++*(_QWORD *)(v10 + 88);
    *a2 = v10;
    v6 = *(_QWORD *)(v10 + 64);
  }
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v13 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v13->ApcState.ApcListHead[0].Flink != v13 )
      KiCheckForKernelApcDelivery((__int64)v13, v11);
  }
  return v6;
}
