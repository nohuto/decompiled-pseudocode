/*
 * XREFs of IommupDomainAttachPasidDevice @ 0x14054B814
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140563D20 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainAttachPasidDevice @ 0x1406F7CE0 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE25C (HalpIommuGetHardwareDomain.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053997C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551118 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x140560FB0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140561280 (IommuEnableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x1405621A0 (IommuSetAddressSpace.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x140562FFC (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x140563374 (IommupHvDetachPasidDeviceDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x140564F30 (HalpIommuGetDmarptRootAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int DmarptRootAddress; // edi
  __int64 v4; // r15
  __int64 v5; // r12
  bool v8; // zf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  int HardwareDomain; // eax
  _DWORD *v14; // r14
  KIRQL v15; // al
  __int64 **v16; // rdx
  __int64 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rbx
  KIRQL v20; // al
  __int64 *v21; // r8
  __int64 **v22; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  char v26; // [rsp+88h] [rbp+10h]
  char v27; // [rsp+90h] [rbp+18h]
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  DmarptRootAddress = 0;
  v24 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 56);
  v27 = 0;
  v8 = *(_DWORD *)(v2 + 392) == 1;
  v28 = 0LL;
  v25 = v5;
  v26 = 0;
  if ( v8 )
    return (unsigned int)-1073741637;
  if ( *(_DWORD *)(a1 + 8) != 3 )
    return (unsigned int)-1073741585;
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 )
  {
    if ( v10 != a1 )
      return (unsigned int)-1073741823;
    return (unsigned int)DmarptRootAddress;
  }
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL);
  else
    v11 = 4LL;
  DmarptRootAddress = HalpIommuGetDmarptRootAddress(*(_QWORD *)(a1 + 40), v11, &v24);
  if ( DmarptRootAddress >= 0 )
  {
    v12 = v24;
    if ( HalpHvIommu )
    {
      v14 = (_DWORD *)(a2 + 48);
      if ( !*(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, v24, 0LL);
        if ( DmarptRootAddress < 0 )
          return (unsigned int)DmarptRootAddress;
        v26 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
      HardwareDomain = HalpIommuGetHardwareDomain(a1, *(_QWORD *)(v2 + 32), 1, 1, 1, &v28);
      v4 = v28;
      DmarptRootAddress = HardwareDomain;
      if ( HardwareDomain < 0 )
        goto LABEL_40;
      if ( *(_DWORD *)(v28 + 80) != *(_DWORD *)(*(_QWORD *)v5 + 16LL) )
      {
        DmarptRootAddress = -1073741823;
        goto LABEL_40;
      }
      v14 = (_DWORD *)(a2 + 48);
      if ( *(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommuEnableDevicePasid(v5, v2);
        if ( DmarptRootAddress < 0 )
        {
LABEL_40:
          if ( v4 )
            HalpIommuDereferenceHardwareDomain(a1, v4);
          return (unsigned int)DmarptRootAddress;
        }
        v27 = 1;
      }
    }
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
    v16 = *(__int64 ***)(a1 + 80);
    v17 = (__int64 *)(a2 + 32);
    if ( *v16 == (__int64 *)(a1 + 72) )
    {
      *v17 = a1 + 72;
      *(_QWORD *)(a2 + 40) = v16;
      *v16 = v17;
      *(_QWORD *)(a1 + 80) = v17;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v15);
      if ( HalpHvIommu )
      {
        if ( *v14 )
        {
          v28 = *(_QWORD *)(a2 + 16);
          DmarptRootAddress = guard_dispatch_icall_no_overrides(*(_QWORD *)(v28 + 32));
          if ( DmarptRootAddress >= 0 )
          {
            DmarptRootAddress = guard_dispatch_icall_no_overrides(0LL);
            if ( DmarptRootAddress < 0 )
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v28 + 32));
          }
        }
        else
        {
          DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, 0LL, 1LL);
        }
        if ( DmarptRootAddress >= 0 )
          goto LABEL_26;
        v19 = v25;
      }
      else
      {
        v18 = v12;
        v19 = v25;
        DmarptRootAddress = IommuSetAddressSpace(v25, v18);
        if ( DmarptRootAddress >= 0 )
        {
LABEL_26:
          *(_QWORD *)(a2 + 24) = a1;
          return (unsigned int)DmarptRootAddress;
        }
      }
      v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
      v21 = (__int64 *)*v17;
      if ( *(__int64 **)(*v17 + 8) == v17 )
      {
        v22 = *(__int64 ***)(a2 + 40);
        if ( *v22 == v17 )
        {
          *v22 = v21;
          v21[1] = (__int64)v22;
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v20);
          if ( v26 )
          {
            IsEnabledDeviceUsageNoInline = Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
            IommupHvDetachPasidDeviceDomain(v2, IsEnabledDeviceUsageNoInline == 0);
            IommupHvDetachPasidDeviceDomain(v2, 1LL);
          }
          if ( v27 )
            IommuDisableDevicePasid(v19, v2);
          goto LABEL_40;
        }
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)DmarptRootAddress;
}
