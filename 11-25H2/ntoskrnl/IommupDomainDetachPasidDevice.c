/*
 * XREFs of IommupDomainDetachPasidDevice @ 0x14054BB10
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140563D20 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x140564040 (IommuDomainDetachDeviceEx.c)
 *     IommuDomainDetachPasidDevice @ 0x1406F7E00 (IommuDomainDetachPasidDevice.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE25C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551118 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x140560FB0 (IommuDisableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x1405621A0 (IommuSetAddressSpace.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x140563374 (IommupHvDetachPasidDeviceDomain.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDomainDetachPasidDevice(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r12
  char v5; // bl
  KIRQL v6; // al
  _QWORD *i; // rdx
  int *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rbx
  KIRQL v11; // al
  __int64 v12; // r9
  _QWORD *v13; // r8
  int v14; // eax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0LL;
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
    v8 = (int *)(a1 + 48);
    v9 = *(unsigned int *)(a1 + 48);
    if ( (_DWORD)v9 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      guard_dispatch_icall_no_overrides(0LL);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 32));
    }
    else
    {
      IommupHvDetachPasidDeviceDomain(v3, v9);
    }
  }
  else
  {
    IommuSetAddressSpace(v4, 0LL);
    v8 = (int *)(a1 + 48);
  }
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
  v12 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v12 + 8) != a1 + 32 || (v13 = *(_QWORD **)(a1 + 40), *v13 != a1 + 32) )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88), v11);
  v14 = *v8;
  if ( HalpHvIommu )
  {
    if ( !v14 )
      IommupHvDetachPasidDeviceDomain(v3, 1LL);
  }
  else
  {
    if ( v14 )
      IommuDisableDevicePasid(v4, v3);
    HalpIommuGetHardwareDomain(v2, *(_QWORD *)(v3 + 32), 0, 0, 0, &v16);
    if ( v16 )
      HalpIommuDereferenceHardwareDomain(v2, v16);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
