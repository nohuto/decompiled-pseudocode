/*
 * XREFs of IommuDomainAttachDeviceEx @ 0x140563D20
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404B4FB8 (HalpIommuLeaveDmaDomain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B4C8 (HalpIommuDeviceGetDomainTypes.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B6BC (IommupDeviceGetPasidDevice.c)
 *     IommupDomainAttachPasidDevice @ 0x14054B814 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BB10 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405517A8 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x1405649B0 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDeviceEx(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 v6; // rdx
  int DomainTypes; // r8d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 *v12; // rax
  char v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes(a2);
  if ( !_bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
    return (unsigned int)-1073741790;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    if ( v9 == a1 )
      return 0;
    IommupFindAndPopCachedDevice(a2, &v15);
    v3 = v15;
  }
  if ( !*(_BYTE *)(a2 + 274) )
  {
    v8 = HalpIommuJoinDmaDomain(a2, a1, &v14);
    if ( v8 < 0 )
      goto LABEL_21;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a2 + 24) || !IommupDeviceGetPasidDevice(a2, v6, 0, &v16) )
  {
    v8 = -1073741823;
    goto LABEL_21;
  }
  v4 = v16;
  v8 = IommupDomainAttachPasidDevice(a1, (__int64)v16);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(a2 + 24) = a1;
LABEL_15:
    if ( v3 || (v3 = HalpMmAllocCtxAlloc(v10, 56LL)) != 0 )
    {
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_OWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_QWORD *)(v3 + 32) = a2;
      *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v3 + 24) = 0;
      *(_DWORD *)(v3 + 28) = 1;
      *(_QWORD *)(v3 + 40) = a1;
      *(_QWORD *)(v3 + 48) = *(_QWORD *)a2;
    }
    else
    {
      v8 = -1073741670;
      if ( *(_BYTE *)(a2 + 274) )
        IommupDomainDetachPasidDevice((__int64)v4);
      else
        HalpIommuLeaveDmaDomain(a2, a1);
    }
  }
LABEL_21:
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v12 = (__int64 *)qword_140F8E548;
    if ( *(__int64 **)qword_140F8E548 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v3 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v3 + 8) = v12;
    *v12 = v3;
    qword_140F8E548 = v3;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v8;
}
