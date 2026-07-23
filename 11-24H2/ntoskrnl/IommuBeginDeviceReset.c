/*
 * XREFs of IommuBeginDeviceReset @ 0x140561060
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
 */

__int64 __fastcall IommuBeginDeviceReset(__int64 a1, _DWORD *a2)
{
  char v2; // si
  __int64 v4; // rbp
  _QWORD *v5; // rax
  unsigned __int64 *v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  unsigned __int8 CurrentIrql; // di
  volatile signed __int64 *v10; // r14
  __int64 **v11; // rbp
  __int64 *i; // rdx

  v2 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD **)(v4 + 24);
  v6 = v5 + 50;
  if ( !v5[41] || !v5[42] )
    return 3221225659LL;
  v7 = (char *)KeAbPreAcquire((__int64)(v5 + 50), 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v8 )
    v8[10] = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v10 = (volatile signed __int64 *)(v4 + 16);
  KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 16));
  v11 = (__int64 **)(v4 + 56);
  for ( i = *v11; i != (__int64 *)v11; i = (__int64 *)*i )
  {
    if ( !a2 || *(_DWORD *)(i[4] + 16) == *a2 )
    {
      *((_BYTE *)i + 40) = 1;
      v2 = 1;
    }
  }
  KxReleaseSpinLock(v10);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v2 == 0 ? 0xC0000225 : 0;
}
