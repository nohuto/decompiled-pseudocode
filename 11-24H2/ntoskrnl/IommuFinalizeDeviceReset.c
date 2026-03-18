/*
 * XREFs of IommuFinalizeDeviceReset @ 0x140563DC0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuFinalizeDeviceReset(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  char v3; // r14
  _QWORD *v4; // rsi
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // rdi
  unsigned __int8 CurrentIrql; // r12
  KSPIN_LOCK i; // rdi
  KSPIN_LOCK *v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r9

  v1 = *(KSPIN_LOCK **)(a1 + 96);
  v3 = 0;
  v4 = (_QWORD *)v1[3];
  if ( HalpHvIommu )
    return 3221225659LL;
  v5 = (volatile signed __int32 *)(v4 + 50);
  if ( !v4[41] || !v4[42] )
    return 3221225659LL;
  v6 = KeAbPreAcquire((__int64)(v4 + 50), 0LL);
  v8 = v6;
  if ( _interlockedbittestandset64(v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4 + 50, (__int64)v6, (__int64)(v4 + 50));
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  guard_dispatch_icall_no_overrides(v4[2], v1[5], *(unsigned int *)(a1 + 60), v7);
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
      v3 = 1;
      KxAcquireSpinLock(v4 + 51);
      v11 = v1 + 11;
      v12 = 512LL;
      do
      {
        v13 = *((_DWORD *)v11 + 1);
        if ( (v13 & 1) != 0 && ((v13 >> 1) & 0xFFFFF) == *(_DWORD *)(*(_QWORD *)(i + 32) + 16LL) )
          *v11 = 0LL;
        ++v11;
        --v12;
      }
      while ( v12 );
      KxReleaseSpinLock(v4 + 51);
      guard_dispatch_icall_no_overrides(v4[2], v1[5], *(unsigned int *)(*(_QWORD *)(i + 32) + 16LL), v14);
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)v1 + 2);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4 + 50);
  KeAbPostRelease((ULONG_PTR)(v4 + 50));
  return v3 == 0 ? 0xC0000225 : 0;
}
