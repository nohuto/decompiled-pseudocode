/*
 * XREFs of IommuDomainAttachDeviceEx @ 0x140564290
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404AF300 (HalpIommuLeaveDmaDomain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x14054ACD4 (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054B68C (HalpIommuDeviceGetDomainTypes.c)
 *     IommupDeviceGetPasidDevice @ 0x14054B87C (IommupDeviceGetPasidDevice.c)
 *     IommupDomainAttachPasidDevice @ 0x14054B9D4 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054BD54 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405519E8 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x14056500C (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDeviceEx(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *v4; // r14
  int DomainTypes; // r8d
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
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
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    if ( v8 == a1 )
      return 0;
    IommupFindAndPopCachedDevice(a2, &v15);
    v3 = v15;
  }
  if ( !*(_BYTE *)(a2 + 274) )
  {
    v7 = HalpIommuJoinDmaDomain(a2, a1, &v14);
    if ( v7 < 0 )
      goto LABEL_22;
    goto LABEL_16;
  }
  if ( !(unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(a2 + 24)
    || !IommupDeviceGetPasidDevice(a2, v10, 0, &v16) )
  {
    v7 = -1073741823;
    goto LABEL_22;
  }
  v4 = v16;
  v7 = IommupDomainAttachPasidDevice(a1, (__int64)v16);
  if ( v7 >= 0 )
  {
    *(_QWORD *)(a2 + 24) = a1;
LABEL_16:
    if ( v3 || (v3 = HalpMmAllocCtxAlloc(v9, 56LL)) != 0 )
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
      v7 = -1073741670;
      if ( *(_BYTE *)(a2 + 274) )
        IommupDomainDetachPasidDevice((__int64)v4);
      else
        HalpIommuLeaveDmaDomain(a2, a1);
    }
  }
LABEL_22:
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v12 = (__int64 *)qword_140F8EED8;
    if ( *(__int64 **)qword_140F8EED8 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v3 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v3 + 8) = v12;
    *v12 = v3;
    qword_140F8EED8 = v3;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v7;
}
