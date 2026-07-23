/*
 * XREFs of IommuSetDeviceFaultReporting @ 0x140564C70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IommuSetDeviceFaultReporting(__int64 a1, int a2, char a3, _QWORD *a4)
{
  char v4; // si
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 i; // rax
  __int64 result; // rax

  v4 = 0;
  if ( !HalpHvIommu || !HalpHvParaVirtIommuDomain )
    return 3221225659LL;
  v9 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = HalpIommuParaVirtDeviceCache; (__int64 *)i != &HalpIommuParaVirtDeviceCache; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 16) == a1 && *(_DWORD *)(i + 24) == a2 )
    {
      v9 = *(_QWORD *)(i + 32);
      v4 = 1;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( !v4 )
    return 3221225485LL;
  if ( a3 )
    *(_QWORD *)(v9 + 104) = *a4;
  *(_QWORD *)(v9 + 104) = 0LL;
  result = 3221225474LL;
  *(_QWORD *)(v9 + 112) = 0LL;
  return result;
}
