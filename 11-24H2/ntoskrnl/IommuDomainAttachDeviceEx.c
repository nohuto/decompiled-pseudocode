/*
 * XREFs of IommuDomainAttachDeviceEx @ 0x140566590
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404B4B04 (HalpIommuLeaveDmaDomain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14054DDE0 (HalpIommuDeviceGetDomainTypes.c)
 *     IommupDeviceGetPasidDevice @ 0x14054DFCC (IommupDeviceGetPasidDevice.c)
 *     IommupDomainAttachPasidDevice @ 0x14054E124 (IommupDomainAttachPasidDevice.c)
 *     IommupDomainDetachPasidDevice @ 0x14054E420 (IommupDomainDetachPasidDevice.c)
 *     HalpIommuJoinDmaDomain @ 0x1405540A8 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x140567580 (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDeviceEx(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 *v6; // r14
  __int64 v8; // rdx
  int DomainTypes; // r8d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 CurrentIrql; // si
  __int64 *v16; // rax
  char v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v20; // [rsp+68h] [rbp+20h] BYREF

  v18 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  DomainTypes = HalpIommuDeviceGetDomainTypes(a2, a2, a3, a4);
  if ( !_bittest(&DomainTypes, *(_DWORD *)(a1 + 8)) )
    return (unsigned int)-1073741790;
  v11 = *(_QWORD *)(a2 + 24);
  if ( v11 )
  {
    if ( v11 == a1 )
      return 0;
    IommupFindAndPopCachedDevice(a2, &v19);
    v5 = v19;
  }
  if ( !*(_BYTE *)(a2 + 274) )
  {
    v10 = HalpIommuJoinDmaDomain(a2, a1, &v18);
    if ( v10 < 0 )
      goto LABEL_21;
    goto LABEL_15;
  }
  if ( *(_QWORD *)(a2 + 24) || !IommupDeviceGetPasidDevice(a2, v8, 0, &v20) )
  {
    v10 = -1073741823;
    goto LABEL_21;
  }
  v6 = v20;
  v10 = IommupDomainAttachPasidDevice(a1, (__int64)v20);
  if ( v10 >= 0 )
  {
    *(_QWORD *)(a2 + 24) = a1;
LABEL_15:
    if ( v5 || (v5 = HalpMmAllocCtxAlloc(v12, 56LL)) != 0 )
    {
      *(_OWORD *)v5 = 0LL;
      *(_OWORD *)(v5 + 16) = 0LL;
      *(_OWORD *)(v5 + 32) = 0LL;
      *(_QWORD *)(v5 + 48) = 0LL;
      *(_QWORD *)(v5 + 32) = a2;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v5 + 24) = 0;
      *(_DWORD *)(v5 + 28) = 1;
      *(_QWORD *)(v5 + 40) = a1;
      *(_QWORD *)(v5 + 48) = *(_QWORD *)a2;
    }
    else
    {
      v10 = -1073741670;
      if ( *(_BYTE *)(a2 + 274) )
        IommupDomainDetachPasidDevice((__int64)v6);
      else
        HalpIommuLeaveDmaDomain(a2, a1, v13, v14);
    }
  }
LABEL_21:
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v16 = (__int64 *)qword_140F8ECE8;
    if ( *(__int64 **)qword_140F8ECE8 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v5 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v5 + 8) = v16;
    *v16 = v5;
    qword_140F8ECE8 = v5;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v10;
}
