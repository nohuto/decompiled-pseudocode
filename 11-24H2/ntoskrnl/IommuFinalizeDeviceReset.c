/*
 * XREFs of IommuFinalizeDeviceReset @ 0x1405619F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFinalizeDeviceReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  char v2; // r14
  _QWORD *v3; // rsi
  volatile signed __int32 *v4; // rbx
  char *v5; // rax
  char *v6; // rdi
  unsigned __int8 CurrentIrql; // r12
  KSPIN_LOCK i; // rdi
  KSPIN_LOCK *v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx

  v1 = *(KSPIN_LOCK **)(a1 + 96);
  v2 = 0;
  v3 = (_QWORD *)v1[3];
  if ( HalpHvIommu )
    return 3221225659LL;
  v4 = (volatile signed __int32 *)(v3 + 50);
  if ( !v3[41] || !v3[42] )
    return 3221225659LL;
  v5 = (char *)KeAbPreAcquire((__int64)(v3 + 50), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64(v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3 + 50, v5, (__int64)(v3 + 50));
  if ( v6 )
    v6[10] = 1;
  guard_dispatch_icall_no_overrides(v3[2], v1[5]);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KxAcquireSpinLock(v1 + 2);
  for ( i = v1[7]; (KSPIN_LOCK *)i != v1 + 7; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 40) )
    {
      *(_BYTE *)(i + 40) = 0;
      v2 = 1;
      KxAcquireSpinLock(v3 + 51);
      v9 = v1 + 11;
      v10 = 512LL;
      do
      {
        v11 = *((_DWORD *)v9 + 1);
        if ( (v11 & 1) != 0 && ((v11 >> 1) & 0xFFFFF) == *(_DWORD *)(*(_QWORD *)(i + 32) + 16LL) )
          *v9 = 0LL;
        ++v9;
        --v10;
      }
      while ( v10 );
      KxReleaseSpinLock(v3 + 51);
      guard_dispatch_icall_no_overrides(v3[2], v1[5]);
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)v1 + 2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3 + 50);
  KeAbPostRelease((ULONG_PTR)(v3 + 50));
  return v2 == 0 ? 0xC0000225 : 0;
}
