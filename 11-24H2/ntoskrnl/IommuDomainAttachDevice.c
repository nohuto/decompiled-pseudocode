/*
 * XREFs of IommuDomainAttachDevice @ 0x140564090
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     HalpIommuGetDeviceId @ 0x14054FBC0 (HalpIommuGetDeviceId.c)
 *     HalpIommuJoinDmaDomain @ 0x1405519E8 (HalpIommuJoinDmaDomain.c)
 *     IommupFindAndPopCachedDevice @ 0x14056500C (IommupFindAndPopCachedDevice.c)
 */

__int64 __fastcall IommuDomainAttachDevice(__int64 a1, void *a2, int a3, int a4)
{
  __int64 *v6; // rsi
  __int64 v7; // rbx
  int DeviceId; // eax
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // edi
  int Device; // eax
  __int64 v15; // rax
  char v16; // r15
  unsigned __int8 CurrentIrql; // bp
  __int64 *v18; // rax
  __int64 *v20; // [rsp+38h] [rbp-40h] BYREF
  void *v21; // [rsp+40h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF

  v21 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  DeviceId = HalpIommuGetDeviceId((__int64)a2, &v21);
  v12 = (__int64)v21;
  v13 = DeviceId;
  if ( DeviceId < 0 )
    goto LABEL_29;
  if ( a3 || a4 != 1 )
  {
    v13 = -1073741583;
    v16 = 0;
  }
  else
  {
    Device = HalpIommuCreateDevice(v21, a2, 0LL, 0, (__int64 *)&v20);
    v6 = v20;
    v13 = Device;
    if ( Device < 0 )
      goto LABEL_25;
    v15 = v20[3];
    if ( v15 )
    {
      v16 = 1;
      if ( v15 == a1 )
      {
        v13 = 0;
        goto LABEL_28;
      }
      IommupFindAndPopCachedDevice(v20, &v22);
      v7 = v22;
    }
    else
    {
      v16 = 0;
    }
    v13 = HalpIommuJoinDmaDomain((__int64)v6, a1, 0LL);
    if ( v13 >= 0 )
    {
      if ( v7 || (v7 = HalpMmAllocCtxAlloc(v11, 56LL)) != 0 )
      {
        *(_OWORD *)v7 = 0LL;
        *(_OWORD *)(v7 + 16) = 0LL;
        *(_OWORD *)(v7 + 32) = 0LL;
        *(_QWORD *)(v7 + 48) = 0LL;
        *(_QWORD *)(v7 + 32) = v6;
        *(_QWORD *)(v7 + 16) = a2;
        *(_DWORD *)(v7 + 24) = 0;
        *(_DWORD *)(v7 + 28) = 1;
        *(_QWORD *)(v7 + 40) = a1;
        *(_QWORD *)(v7 + 48) = v12;
      }
      else
      {
        v13 = -1073741670;
      }
    }
  }
  if ( v7 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KxAcquireSpinLock(&HalpIommuParaVirtDeviceCacheLock);
    v18 = (__int64 *)qword_140F8EED8;
    if ( *(__int64 **)qword_140F8EED8 != &HalpIommuParaVirtDeviceCache )
      __fastfail(3u);
    *(_QWORD *)v7 = &HalpIommuParaVirtDeviceCache;
    *(_QWORD *)(v7 + 8) = v18;
    *v18 = v7;
    qword_140F8EED8 = v7;
    KxReleaseSpinLock((volatile signed __int64 *)&HalpIommuParaVirtDeviceCacheLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( v13 >= 0 )
  {
    if ( !v16 )
      return (unsigned int)v13;
    goto LABEL_28;
  }
LABEL_25:
  if ( v6 )
  {
LABEL_28:
    HalpIommuDeleteDevice(v6);
    if ( v13 >= 0 )
      return (unsigned int)v13;
  }
LABEL_29:
  if ( v12 )
    HalpMmAllocCtxFree(v11, v12);
  return (unsigned int)v13;
}
