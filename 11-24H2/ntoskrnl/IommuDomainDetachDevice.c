/*
 * XREFs of IommuDomainDetachDevice @ 0x140566770
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404B4B04 (HalpIommuLeaveDmaDomain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx

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
    v16 = HalpIommuLeaveDmaDomain(v7, a1, v14, v15);
    if ( v16 >= 0 )
    {
      if ( v4 != 2 )
        v16 = HalpIommuDeleteDevice((__int64 *)v7);
      HalpMmAllocCtxFree(v17, *(_QWORD *)(v5 + 48));
      HalpMmAllocCtxFree(v18, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return (unsigned int)v16;
}
