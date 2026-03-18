/*
 * XREFs of ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1400284D4 (ACPIDockIsDockDevice.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIGetD3Policy @ 0x14003E46C (ACPIGetD3Policy.c)
 *     AMLIGetNSObjectType @ 0x14003FE50 (AMLIGetNSObjectType.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     AcpiCheckSecureDevice @ 0x1400AE8CC (AcpiCheckSecureDevice.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryCapabilities(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  char v5; // bl
  char v7; // r15
  __int64 DeviceExtension; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rsi
  __int64 *v12; // r15
  _DWORD *v13; // rdi
  __int64 *v14; // rax
  __int64 v15; // r14
  int DeviceCapabilities; // r14d
  const char *v17; // rdi
  __int64 v18; // rax
  char *IrpText; // rax
  const char *v21; // r8
  __int64 v22; // r10
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // edx
  unsigned __int16 v28; // r9
  int v29; // eax
  __int64 v30; // rax
  const char *v31; // rdx
  const char *v32; // rcx
  __int64 v33; // rax
  bool v34; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int8 v35; // [rsp+61h] [rbp-48h]
  int v36; // [rsp+64h] [rbp-45h] BYREF
  __int64 v37; // [rsp+68h] [rbp-41h]
  __int64 v38; // [rsp+70h] [rbp-39h] BYREF
  __int128 *v39; // [rsp+78h] [rbp-31h] BYREF
  __int64 v40; // [rsp+80h] [rbp-29h] BYREF
  __int64 v41; // [rsp+88h] [rbp-21h] BYREF
  __int64 v42; // [rsp+90h] [rbp-19h] BYREF
  __int128 v43; // [rsp+98h] [rbp-11h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-1h] BYREF
  int v45; // [rsp+B8h] [rbp+Fh]

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0;
  v42 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v36 = 0;
  v7 = a2;
  v43 = 0LL;
  v39 = 0LL;
  v45 = 0;
  v35 = *(_BYTE *)(v4 + 1);
  v37 = a2;
  v34 = 0;
  v44 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v11 = DeviceExtension;
  if ( !DeviceExtension )
  {
    v17 = byte_140075488;
    DeviceCapabilities = -1073741823;
    goto LABEL_37;
  }
  v12 = *(__int64 **)(DeviceExtension + 760);
  if ( (*(_DWORD *)(DeviceExtension + 1120) & 0x800LL) != 0 && ACPIGetD3Policy(DeviceExtension, &v34) >= 0 && v34 )
    *(_QWORD *)(v11 + 8) &= ~0x800uLL;
  v13 = *(_DWORD **)(v4 + 8);
  if ( !_bittest64((const signed __int64 *)(v11 + 8), 0x27u) )
  {
    v14 = AMLIGetNamedChild(v12, 1447907935);
    v15 = (__int64)v14;
    if ( v14 )
    {
      if ( (unsigned int)AMLIGetNSObjectType((__int64)v14) == 8 )
      {
        if ( (int)ACPIGet(v11, 1447907935, 268713986, 0LL, 0, 0LL, 0LL, (__int64)&v38, 0LL) < 0 )
          v13[1] |= 0x10u;
        else
          v13[1] = (v38 != 0 ? 0x10 : 0) | v13[1] & 0xFFFFFFEF;
        AMLIDereferenceHandleEx(v15);
      }
      else
      {
        v13[1] |= 0x10u;
      }
    }
    if ( !ACPIDockIsDockDevice() )
    {
      if ( AMLIIsNamedChildPresent(v12, 810173791) )
      {
        v29 = v13[1];
        if ( (v29 & 0x10) == 0 )
          v29 |= 0x40000u;
        v13[1] = v29 | 0x18;
      }
      if ( AMLIIsNamedChildPresent(v12, 826951007)
        || AMLIIsNamedChildPresent(v12, 843728223)
        || AMLIIsNamedChildPresent(v12, 860505439)
        || AMLIIsNamedChildPresent(v12, 877282655) )
      {
        v23 = v13[1];
        if ( (v23 & 0x10) == 0 )
          v23 |= 0x40000u;
        v13[1] = v23 | 0x10010;
      }
    }
  }
  if ( AMLIIsNamedChildPresent(v12, 1129466207) )
    *(_DWORD *)(a1 + 48) |= 0x4000u;
  DeviceCapabilities = ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v40, 0LL);
  v10 = 0x400000000000LL;
  if ( DeviceCapabilities < 0 )
    goto LABEL_35;
  *(_QWORD *)&v43 = v11;
  v39 = &v43;
  DWORD2(v43) = 8;
  if ( (int)EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_IGNORE_STA_DISABLE, &v39, 1LL, &v36) >= 0 && v36 == 2 )
    goto LABEL_16;
  if ( _bittest64((const signed __int64 *)(v11 + 8), 0x36u) )
  {
    if ( !a4 )
    {
      v24 = v13[1];
      if ( (AcpiOverrideAttributes & 2) != 0 )
        v25 = v24 | 0x4000;
      else
        v25 = v24 & 0xFFFFBFFF;
      v13[1] = v25;
    }
  }
  else if ( !AMLIIsNamedChildPresent(v12, 1397900127) || AMLIIsNamedChildPresent(v12, 1397904223) )
  {
    if ( a4 )
LABEL_16:
      v13[1] &= ~0x4000u;
  }
  else
  {
    v13[1] |= 0x4000u;
  }
  if ( (v40 & 4) == 0 )
    v13[1] |= 0x20000u;
  if ( AMLIIsNamedChildPresent(v12, 1314214751)
    && (int)ACPIGet(v11, 1314214751, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v41, 0LL) >= 0 )
  {
    v13[3] = v41;
  }
  if ( AMLIIsNamedChildPresent(v12, 1380204895) )
  {
    DeviceCapabilities = ACPIGet(v11, 1380204895, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v42, 0LL);
    if ( DeviceCapabilities < 0 )
    {
      v30 = *(_QWORD *)(v11 + 8);
      v17 = byte_140075488;
      v31 = byte_140075488;
      v32 = byte_140075488;
      if ( (v30 & 0x200000000000LL) != 0 )
      {
        v31 = *(const char **)(v11 + 608);
        if ( (v30 & 0x400000000000LL) != 0 )
          v32 = *(const char **)(v11 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      v28 = 13;
      goto LABEL_65;
    }
    v13[2] = v42;
  }
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(v11);
  if ( DeviceCapabilities < 0 )
  {
    v33 = *(_QWORD *)(v11 + 8);
    v17 = byte_140075488;
    v31 = byte_140075488;
    v32 = byte_140075488;
    if ( (v33 & 0x200000000000LL) != 0 )
    {
      v31 = *(const char **)(v11 + 608);
      if ( (v33 & 0x400000000000LL) != 0 )
        v32 = *(const char **)(v11 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_62;
    v28 = 14;
LABEL_65:
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      v28,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      DeviceCapabilities,
      v11,
      v31,
      v32);
LABEL_62:
    v10 = 0x400000000000LL;
    goto LABEL_36;
  }
  if ( (unsigned __int8)AcpiCheckSecureDevice(v11) )
    v13[1] |= 0x100000u;
  if ( !a4 )
  {
    v26 = v13[1] | 0x80;
    v13[1] = v26;
    v27 = v26 & 0xFFFFFEFF | (*(_DWORD *)(v11 + 8) >> 9) & 0x100;
    v13[1] = v27;
    v13[1] = v27 & 0xFFFFFFBF | (*(_QWORD *)(v11 + 616) != 0LL ? 0x40 : 0);
  }
  if ( (int)ACPIProcessPhysicalDeviceLocation(v11, &v44, 0LL) >= 0 && (v44 & 0x7F) != 0 )
  {
    if ( (BYTE8(v44) & 1) == 0 )
      v13[1] |= 0x40000u;
    if ( SDWORD2(v44) < 0 )
      v13[1] |= 0x40000u;
  }
  DeviceCapabilities = 0;
  v10 = 0x400000000000LL;
LABEL_35:
  v17 = byte_140075488;
LABEL_36:
  v18 = *(_QWORD *)(v11 + 8);
  v7 = v37;
  v5 = v11;
  if ( (v18 & 0x200000000000LL) != 0 && (v18 & 0x400000000000LL) != 0 )
    v17 = *(const char **)(v11 + 616);
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v10, v35);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      v22,
      v7,
      IrpText,
      DeviceCapabilities,
      v5,
      v21,
      v17);
  }
  return (unsigned int)DeviceCapabilities;
}
