/*
 * XREFs of IommupDomainDetachPasidDevice @ 0x14054E420
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140566590 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405668B0 (IommuDomainDetachDeviceEx.c)
 *     IommuDomainDetachPasidDevice @ 0x140703CE0 (IommuDomainDetachPasidDevice.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE03C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140553A18 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x140563850 (IommuDisableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x140564A30 (IommuSetAddressSpace.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x140565B84 (IommupHvDetachPasidDeviceDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDomainDetachPasidDevice(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r12
  char v5; // bl
  KIRQL v6; // al
  _QWORD *i; // rdx
  __int64 v8; // r9
  unsigned int *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  KIRQL v14; // al
  __int64 v15; // r9
  _QWORD *v16; // r8
  int v17; // eax
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 3221225711LL;
  v5 = 0;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 88));
  for ( i = *(_QWORD **)(v2 + 72); i != (_QWORD *)(v2 + 72); i = (_QWORD *)*i )
  {
    if ( i - 4 == (_QWORD *)a1 )
    {
      v5 = 1;
      break;
    }
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v2 + 88), v6);
  if ( !v5 )
    return 3221225711LL;
  if ( HalpHvIommu )
  {
    v9 = (unsigned int *)(a1 + 48);
    v10 = *(unsigned int *)(a1 + 48);
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      guard_dispatch_icall_no_overrides(0LL, v10, 0LL, v8);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v11 + 32), *v9, v12, v13);
    }
    else
    {
      IommupHvDetachPasidDeviceDomain(v3, v10);
    }
  }
  else
  {
    IommuSetAddressSpace(v4, 0LL);
    v9 = (unsigned int *)(a1 + 48);
  }
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
  v15 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v15 + 8) != a1 + 32 || (v16 = *(_QWORD **)(a1 + 40), *v16 != a1 + 32) )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88), v14);
  v17 = *v9;
  if ( HalpHvIommu )
  {
    if ( !v17 )
      IommupHvDetachPasidDeviceDomain(v3, 1LL);
  }
  else
  {
    if ( v17 )
      IommuDisableDevicePasid(v4, v3);
    HalpIommuGetHardwareDomain(v2, *(_QWORD *)(v3 + 32), 0, 0, 0, &v19);
    if ( v19 )
      HalpIommuDereferenceHardwareDomain(v2, v19);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
