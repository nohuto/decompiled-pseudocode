/*
 * XREFs of IommuDomainDetachDevice @ 0x140564470
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404AF300 (HalpIommuLeaveDmaDomain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDomainDetachDevice(ULONG_PTR a1, __int64 a2, int a3)
{
  char v3; // r14
  __int32 v4; // ebp
  __int64 v5; // rsi
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 *i; // rax
  __int64 v12; // rdx
  __int64 **v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
  for ( i = (__int64 *)HalpIommuParaVirtDeviceCache; i != &HalpIommuParaVirtDeviceCache; i = (__int64 *)*i )
  {
    v5 = (__int64)i;
    if ( i[5] == a1 && i[2] == a2 && *((_DWORD *)i + 6) == a3 )
    {
      v7 = i[4];
      v3 = 1;
      v4 = _InterlockedExchange((volatile __int32 *)(v7 + 16), 1);
      v12 = *i;
      if ( *(__int64 **)(*i + 8) != i || (v13 = (__int64 **)i[1], *v13 != i) )
        __fastfail(3u);
      *v13 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      break;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v3 )
  {
    v14 = HalpIommuLeaveDmaDomain(v7, a1);
    if ( v14 >= 0 )
    {
      if ( v4 != 2 )
        v14 = HalpIommuDeleteDevice((__int64 *)v7);
      HalpMmAllocCtxFree(v15, *(_QWORD *)(v5 + 48));
      HalpMmAllocCtxFree(v16, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v14;
}
