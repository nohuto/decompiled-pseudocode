/*
 * XREFs of IommupDomainAttachPasidDevice @ 0x14054E124
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140566590 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainAttachPasidDevice @ 0x140703BC0 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x1404CE03C (HalpIommuGetHardwareDomain.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x14053C180 (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140553A18 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x140563850 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140563B20 (IommuEnableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x140564A30 (IommuSetAddressSpace.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x14056580C (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x140565B84 (IommupHvDetachPasidDeviceDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x140567B00 (HalpIommuGetDmarptRootAddress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  unsigned int *v14; // r14
  KIRQL v15; // al
  __int64 **v16; // rdx
  __int64 *v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  KIRQL v26; // al
  __int64 *v27; // r8
  __int64 **v28; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+38h] [rbp-40h]
  char v32; // [rsp+88h] [rbp+10h]
  char v33; // [rsp+90h] [rbp+18h]
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  DmarptRootAddress = 0;
  v30 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 56);
  v33 = 0;
  v8 = *(_DWORD *)(v2 + 392) == 1;
  v34 = 0LL;
  v31 = v5;
  v32 = 0;
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
  DmarptRootAddress = HalpIommuGetDmarptRootAddress(*(_QWORD *)(a1 + 40), v11, &v30);
  if ( DmarptRootAddress >= 0 )
  {
    v12 = v30;
    if ( HalpHvIommu )
    {
      v14 = (unsigned int *)(a2 + 48);
      if ( !*(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, v30, 0LL);
        if ( DmarptRootAddress < 0 )
          return (unsigned int)DmarptRootAddress;
        v32 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(*(_QWORD *)v5 + 16LL);
      HardwareDomain = HalpIommuGetHardwareDomain(a1, *(_QWORD *)(v2 + 32), 1, 1, 1, &v34);
      v4 = v34;
      DmarptRootAddress = HardwareDomain;
      if ( HardwareDomain < 0 )
        goto LABEL_40;
      if ( *(_DWORD *)(v34 + 80) != *(_DWORD *)(*(_QWORD *)v5 + 16LL) )
      {
        DmarptRootAddress = -1073741823;
        goto LABEL_40;
      }
      v14 = (unsigned int *)(a2 + 48);
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
        v33 = 1;
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
        v22 = *v14;
        if ( (_DWORD)v22 )
        {
          v34 = *(_QWORD *)(a2 + 16);
          DmarptRootAddress = guard_dispatch_icall_no_overrides(*(_QWORD *)(v34 + 32), v22, v18, v19);
          if ( DmarptRootAddress >= 0 )
          {
            DmarptRootAddress = guard_dispatch_icall_no_overrides(0LL, *v14, v12 | 1, v23);
            if ( DmarptRootAddress < 0 )
              guard_dispatch_icall_no_overrides(*(_QWORD *)(v34 + 32), *v14, v24, v25);
          }
        }
        else
        {
          DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, 0LL, 1LL);
        }
        if ( DmarptRootAddress >= 0 )
          goto LABEL_26;
        v21 = v31;
      }
      else
      {
        v20 = v12;
        v21 = v31;
        DmarptRootAddress = IommuSetAddressSpace(v31, v20);
        if ( DmarptRootAddress >= 0 )
        {
LABEL_26:
          *(_QWORD *)(a2 + 24) = a1;
          return (unsigned int)DmarptRootAddress;
        }
      }
      v26 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
      v27 = (__int64 *)*v17;
      if ( *(__int64 **)(*v17 + 8) == v17 )
      {
        v28 = *(__int64 ***)(a2 + 40);
        if ( *v28 == v17 )
        {
          *v28 = v27;
          v27[1] = (__int64)v28;
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v26);
          if ( v32 )
          {
            IsEnabledDeviceUsageNoInline = Feature_Test57481295__private_IsEnabledDeviceUsageNoInline();
            IommupHvDetachPasidDeviceDomain(v2, IsEnabledDeviceUsageNoInline == 0);
            IommupHvDetachPasidDeviceDomain(v2, 1LL);
          }
          if ( v33 )
            IommuDisableDevicePasid(v21, v2);
          goto LABEL_40;
        }
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)DmarptRootAddress;
}
