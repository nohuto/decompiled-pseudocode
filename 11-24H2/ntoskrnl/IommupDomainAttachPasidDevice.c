/*
 * XREFs of IommupDomainAttachPasidDevice @ 0x14054B9D4
 * Callers:
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainAttachPasidDevice @ 0x140701780 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C7308 (HalpIommuGetHardwareDomain.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline @ 0x14054ACD4 (Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x140551358 (HalpIommuDereferenceHardwareDomain.c)
 *     IommuDisableDevicePasid @ 0x140561480 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140561750 (IommuEnableDevicePasid.c)
 *     IommuSetAddressSpace @ 0x140562660 (IommuSetAddressSpace.c)
 *     IommupHvAttachPasidDeviceDomain @ 0x14056343C (IommupHvAttachPasidDeviceDomain.c)
 *     IommupHvAttachPasidSubDeviceDomain @ 0x1405635D4 (IommupHvAttachPasidSubDeviceDomain.c)
 *     IommupHvDetachPasidDeviceDomain @ 0x14056383C (IommupHvDetachPasidDeviceDomain.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1405655F0 (HalpIommuGetDmarptRootAddress.c)
 */

__int64 __fastcall IommupDomainAttachPasidDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  int DmarptRootAddress; // edi
  bool v7; // zf
  __int64 v8; // r15
  char v9; // bl
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int HardwareDomain; // eax
  KIRQL v15; // al
  _QWORD *v16; // rsi
  __int64 v17; // r8
  _QWORD *v18; // rdx
  _BOOL8 v19; // rdx
  KIRQL v20; // al
  _QWORD *v21; // r9
  _QWORD *v22; // rdx
  bool v23; // sf
  int v24; // eax
  KIRQL v25; // al
  _QWORD *v26; // rbx
  __int64 v27; // r8
  _QWORD *v28; // rdx
  KIRQL v29; // al
  _QWORD *v30; // r8
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF
  char v34; // [rsp+88h] [rbp+10h]
  char v35; // [rsp+90h] [rbp+18h]
  char v36; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 56);
  v33[0] = 0LL;
  DmarptRootAddress = 0;
  v36 = 0;
  v7 = *(_DWORD *)(v2 + 392) == 1;
  v8 = 0LL;
  v32 = 0LL;
  v9 = 0;
  v35 = 0;
  v10 = 0LL;
  v34 = 0;
  if ( v7 )
  {
    DmarptRootAddress = -1073741637;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 8) != 3 )
  {
    DmarptRootAddress = -1073741585;
    goto LABEL_23;
  }
  if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 == a1 )
      return (unsigned int)DmarptRootAddress;
    if ( v10 && (*(_DWORD *)(a2 + 48) || *(_BYTE *)(*(_QWORD *)(a2 + 16) + 273LL)) )
    {
LABEL_12:
      DmarptRootAddress = -1073741823;
      goto LABEL_23;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
    {
      if ( v11 == a1 )
        return (unsigned int)DmarptRootAddress;
      goto LABEL_12;
    }
  }
  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 24LL);
  else
    v12 = 4LL;
  DmarptRootAddress = HalpIommuGetDmarptRootAddress(*(_QWORD *)(a1 + 40), v12, v33);
  if ( DmarptRootAddress >= 0 )
  {
    v13 = v33[0];
    if ( HalpHvIommu )
    {
      if ( !*(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommupHvAttachPasidDeviceDomain(v2, a1, v33[0], 0LL);
        if ( DmarptRootAddress < 0 )
        {
          v9 = 0;
          goto LABEL_23;
        }
        v35 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(*(_QWORD *)v3 + 16LL);
      HardwareDomain = HalpIommuGetHardwareDomain(a1, *(_QWORD *)(v2 + 32), 1, 1, 1, &v32);
      v8 = v32;
      DmarptRootAddress = HardwareDomain;
      if ( HardwareDomain < 0 )
      {
LABEL_22:
        v9 = v34;
        goto LABEL_23;
      }
      if ( *(_DWORD *)(v32 + 80) != *(_DWORD *)(*(_QWORD *)v3 + 16LL) )
      {
        DmarptRootAddress = -1073741823;
        goto LABEL_22;
      }
      if ( *(_DWORD *)(a2 + 48) )
      {
        DmarptRootAddress = IommuEnableDevicePasid(v3, v2);
        if ( DmarptRootAddress < 0 )
          goto LABEL_22;
        v36 = 1;
      }
    }
    if ( !(unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
    {
      v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
      v21 = *(_QWORD **)(a1 + 80);
      v22 = (_QWORD *)(a2 + 32);
      if ( *v21 != a1 + 72 )
        goto LABEL_56;
      *v22 = a1 + 72;
      *(_QWORD *)(a2 + 40) = v21;
      *v21 = v22;
      *(_QWORD *)(a1 + 80) = v22;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v20);
      v34 = 1;
    }
    if ( HalpHvIommu )
    {
      if ( *(_DWORD *)(a2 + 48) )
        v24 = IommupHvAttachPasidSubDeviceDomain(a2, v13);
      else
        v24 = IommupHvAttachPasidDeviceDomain(v2, a1, 0LL, 1LL);
      DmarptRootAddress = v24;
      v23 = v24 < 0;
    }
    else
    {
      DmarptRootAddress = IommuSetAddressSpace(v3, v13);
      v23 = DmarptRootAddress < 0;
    }
    if ( !v23 )
    {
      if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v10 )
        {
          v25 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 88));
          v26 = (_QWORD *)(a2 + 32);
          v27 = *(_QWORD *)(a2 + 32);
          if ( *(_QWORD *)(v27 + 8) != a2 + 32 )
            goto LABEL_56;
          v28 = *(_QWORD **)(a2 + 40);
          if ( (_QWORD *)*v28 != v26 )
            goto LABEL_56;
          *v28 = v27;
          *(_QWORD *)(v27 + 8) = v28;
          *(_QWORD *)(a2 + 40) = a2 + 32;
          *v26 = v26;
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 88), v25);
        }
        else
        {
          v26 = (_QWORD *)(a2 + 32);
        }
        v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
        v30 = *(_QWORD **)(a1 + 80);
        if ( *v30 != a1 + 72 )
          goto LABEL_56;
        *v26 = a1 + 72;
        v26[1] = v30;
        *v30 = v26;
        *(_QWORD *)(a1 + 80) = v26;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v29);
      }
      *(_QWORD *)(a2 + 24) = a1;
      return (unsigned int)DmarptRootAddress;
    }
    goto LABEL_22;
  }
LABEL_23:
  if ( (unsigned int)Feature_DmaAdapterStage1DirectAttach__private_IsEnabledDeviceUsageNoInline() || !v9 )
    goto LABEL_28;
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v16 = (_QWORD *)(a2 + 32);
  v17 = *v16;
  if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v18 = (_QWORD *)v16[1], (_QWORD *)*v18 != v16) )
LABEL_56:
    __fastfail(3u);
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88), v15);
LABEL_28:
  if ( v35 )
  {
    v19 = (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() == 0;
    IommupHvDetachPasidDeviceDomain(v2, v19);
    IommupHvDetachPasidDeviceDomain(v2, 1LL);
  }
  if ( v36 )
    IommuDisableDevicePasid(v3, v2);
  if ( v8 )
    HalpIommuDereferenceHardwareDomain(a1, v8);
  return (unsigned int)DmarptRootAddress;
}
