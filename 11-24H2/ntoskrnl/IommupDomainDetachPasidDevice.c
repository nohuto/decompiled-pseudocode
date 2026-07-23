/*
 * XREFs of IommupDomainDetachPasidDevice @ 0x14054BD54
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDeviceEx @ 0x1405645B0 (IommuDomainDetachDeviceEx.c)
 *     IommuDomainDetachPasidDevice @ 0x1407018A0 (IommuDomainDetachPasidDevice.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x14054ACD4 (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x140561480 (IommuDisableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x140562660 (IommuSetAddressSpace.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x14056383C (IommupHvDetachPasidDeviceDomain.c)
 *     IommupHvDetachPasidSubDeviceDomain @ 0x140563910 (IommupHvDetachPasidSubDeviceDomain.c)
 */

__int64 __fastcall IommupDomainDetachPasidDevice(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r15
  char v5; // di
  KIRQL v6; // al
  _QWORD *i; // rdx
  _QWORD *v8; // rdi
  KIRQL v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  int v12; // eax
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
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
    if ( *(_DWORD *)(a1 + 48) )
      IommupHvDetachPasidSubDeviceDomain(a1);
    else
      IommupHvDetachPasidDeviceDomain(v3, 0LL);
  }
  else
  {
    IommuSetAddressSpace(v4, 0LL);
  }
  v8 = (_QWORD *)(a1 + 32);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
  v10 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v10 + 8) != a1 + 32 || (v11 = *(_QWORD **)(a1 + 40), (_QWORD *)*v11 != v8) )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)(a1 + 40) = a1 + 32;
    *v8 = v8;
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88), v9);
  v12 = *(_DWORD *)(a1 + 48);
  if ( HalpHvIommu )
  {
    if ( !v12 )
      IommupHvDetachPasidDeviceDomain(v3, 1LL);
  }
  else
  {
    if ( v12 )
      IommuDisableDevicePasid(v4, v3);
    HalpIommuGetHardwareDomain(v2, *(_QWORD *)(v3 + 32), 0, 0, 0, &v14);
    if ( v14 )
      HalpIommuDereferenceHardwareDomain(v2, v14);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  return 0LL;
}
