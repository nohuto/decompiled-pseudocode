/*
 * XREFs of IommupFindAndPopCachedDevice @ 0x1405649B0
 * Callers:
 *     IommuDomainAttachDevice @ 0x140563B20 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140563D20 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x140564040 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall IommupFindAndPopCachedDevice(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbp
  char v4; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 *i; // rcx
  __int64 v8; // rdx
  __int64 **v9; // rax

  v2 = 0LL;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = (__int64 *)HalpIommuParaVirtDeviceCache; i != &HalpIommuParaVirtDeviceCache; i = (__int64 *)*i )
  {
    v2 = i;
    if ( i[4] == a1 && i[5] == *(_QWORD *)(a1 + 24) && !*((_DWORD *)i + 6) )
    {
      v8 = *i;
      v4 = 1;
      if ( *(__int64 **)(*i + 8) != i || (v9 = (__int64 **)i[1], *v9 != i) )
        __fastfail(3u);
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v4 )
    *a2 = v2;
  return v4;
}
