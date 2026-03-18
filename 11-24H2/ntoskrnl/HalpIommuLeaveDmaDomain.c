/*
 * XREFs of HalpIommuLeaveDmaDomain @ 0x1404B4B04
 * Callers:
 *     HalpIommuBlockDevice @ 0x1404BE880 (HalpIommuBlockDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140566590 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDevice @ 0x140566770 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405668B0 (IommuDomainDetachDeviceEx.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE03C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuIsInPermanentPassthrough @ 0x1404FA770 (HalpIommuIsInPermanentPassthrough.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpIommuAttachDeviceDomain @ 0x140551FD8 (HalpIommuAttachDeviceDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140553A18 (HalpIommuDereferenceHardwareDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpIommuLeaveDmaDomain(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD *v11; // rbp
  KIRQL v12; // al
  _QWORD *i; // rdx
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // r14
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  if ( HalpHvIommu )
  {
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), a2, a3, a4);
    v7 = 0;
    if ( (_WORD)v6 != 118 )
      v7 = v6;
    if ( v7 < 0 )
      KeBugCheckEx(0x1D9u, 2uLL, v7, a2, 0LL);
    goto LABEL_22;
  }
  if ( (unsigned __int8)HalpIommuIsInPermanentPassthrough() )
  {
    v7 = 0;
LABEL_22:
    *(_QWORD *)(a1 + 24) = 0LL;
    return (unsigned int)v7;
  }
  v10 = *(_QWORD *)(v9 + 32);
  v11 = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 32));
  for ( i = *(_QWORD **)(a2 + 16); i != (_QWORD *)(a2 + 16); i = (_QWORD *)*i )
  {
    v11 = i;
    if ( i[3] == v10 )
      break;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 32), v12);
  v7 = 0;
  if ( HalpIommuSecurityPolicy != 1 || !*(_BYTE *)(a1 + 88) )
  {
    v16 = *(_QWORD *)(a1 + 40);
    if ( !HalpHvIommu )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL), *(_QWORD *)(a1 + 40), 0LL, v14);
      *(_QWORD *)(v16 + 16) = 0LL;
    }
LABEL_19:
    if ( v11 )
      HalpIommuDereferenceHardwareDomain(a2, v11);
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_22;
  }
  result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, *(_QWORD *)(a1 + 32), 0, 0, 0, (__int64)&v17);
  if ( (int)result >= 0 )
  {
    result = HalpIommuAttachDeviceDomain(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v17 + 32);
    v7 = result;
    if ( (int)result >= 0 )
      goto LABEL_19;
  }
  return result;
}
