/*
 * XREFs of HalpIommuLeaveDmaDomain @ 0x1404AF300
 * Callers:
 *     HalpIommuBlockDevice @ 0x1404B9A40 (HalpIommuBlockDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDevice @ 0x140564470 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405645B0 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x1404F8050 (HalpIommuIsInPermanentPassthrough.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpIommuAttachDeviceDomain @ 0x14054F918 (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuLeaveDmaDomain(__int64 a1, ULONG_PTR a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  _QWORD *v9; // rbp
  KIRQL v10; // al
  _QWORD *i; // rdx
  __int64 result; // rax
  __int64 v13; // r14
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  if ( HalpHvIommu )
  {
    v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), a2);
    v5 = 0;
    if ( (_WORD)v4 != 118 )
      v5 = v4;
    if ( v5 < 0 )
      KeBugCheckEx(0x1D9u, 2uLL, v5, a2, 0LL);
    goto LABEL_22;
  }
  if ( (unsigned __int8)HalpIommuIsInPermanentPassthrough() )
  {
    v5 = 0;
LABEL_22:
    *(_QWORD *)(a1 + 24) = 0LL;
    return (unsigned int)v5;
  }
  v8 = *(_QWORD *)(v7 + 32);
  v9 = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 32));
  for ( i = *(_QWORD **)(a2 + 16); i != (_QWORD *)(a2 + 16); i = (_QWORD *)*i )
  {
    v9 = i;
    if ( i[3] == v8 )
      break;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v10);
  v5 = 0;
  if ( HalpIommuSecurityPolicy != 1 || !*(_BYTE *)(a1 + 88) )
  {
    v13 = *(_QWORD *)(a1 + 40);
    if ( !HalpHvIommu )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), *(_QWORD *)(a1 + 40));
      *(_QWORD *)(v13 + 16) = 0LL;
    }
LABEL_19:
    if ( v9 )
      HalpIommuDereferenceHardwareDomain(a2, v9);
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_22;
  }
  result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, *(_QWORD *)(a1 + 32), 0, 0, 0, (__int64)&v14);
  if ( (int)result >= 0 )
  {
    result = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v14 + 32);
    v5 = result;
    if ( (int)result >= 0 )
      goto LABEL_19;
  }
  return result;
}
