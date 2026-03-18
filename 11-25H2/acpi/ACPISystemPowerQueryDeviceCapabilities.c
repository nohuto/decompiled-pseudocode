/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0
 * Callers:
 *     ACPIDockIrpQueryCapabilities @ 0x140099350 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1400ADDC0 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIInternalClearFlags @ 0x14003E7CC (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x14003FF48 (ACPIInternalSetFlags.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1400444A4 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1400AFD10 (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __int64 a2)
{
  const signed __int64 *v4; // r14
  char v5; // si
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  void *v13; // rcx
  __m128i *v15; // rdx
  int DeviceCapabilities; // ebp
  const char *v17; // rcx
  const char *v18; // r10
  const char *v19; // rcx
  const char *v20; // r10
  const char *v21; // rcx
  _BYTE v22[64]; // [rsp+50h] [rbp-68h] BYREF

  memset(v22, 0, sizeof(v22));
  v4 = BugCheckParameter2 + 1;
  v5 = 0;
  v6 = BugCheckParameter2[1];
  if ( (v6 & 0x400000000000000LL) != 0 )
    goto LABEL_2;
  if ( (v6 & 0x60) == 0x40 )
  {
    v15 = (__m128i *)a2;
  }
  else
  {
    DeviceCapabilities = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[99] + 768LL), v22);
    if ( DeviceCapabilities < 0 )
    {
      v17 = byte_140075488;
      v18 = byte_140075488;
      if ( (*v4 & 0x200000000000LL) != 0 )
      {
        v17 = (const char *)BugCheckParameter2[76];
        if ( (*v4 & 0x400000000000LL) != 0 )
          v18 = (const char *)BugCheckParameter2[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x12u,
          (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
          DeviceCapabilities,
          (char)BugCheckParameter2,
          v17,
          v18);
      return (unsigned int)DeviceCapabilities;
    }
    v15 = (__m128i *)v22;
  }
  DeviceCapabilities = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, v15, a2);
  if ( DeviceCapabilities < 0 )
  {
    v19 = byte_140075488;
    v20 = byte_140075488;
    if ( BugCheckParameter2 )
    {
      v5 = (char)BugCheckParameter2;
      if ( (*v4 & 0x200000000000LL) != 0 )
      {
        v19 = (const char *)BugCheckParameter2[76];
        if ( (*v4 & 0x400000000000LL) != 0 )
          v20 = (const char *)BugCheckParameter2[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x13u,
        (__int64)&WPP_d6652a4346ea3569847e2fcd20d541a2_Traceguids,
        DeviceCapabilities,
        v5,
        v19,
        v20);
    if ( (*(_BYTE *)v4 & 0x20) != 0 )
      ACPIInternalError(0xB043DuLL);
    return (unsigned int)DeviceCapabilities;
  }
  ACPIInternalSetFlags(BugCheckParameter2 + 1, 0x400000000000000uLL);
LABEL_2:
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 508);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 524);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)BugCheckParameter2 + 133);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)BugCheckParameter2 + 134);
  *(_DWORD *)(a2 + 48) = *((_DWORD *)BugCheckParameter2 + 135);
  if ( (AcpiOverrideAttributes & 0x10000000) != 0 )
  {
    if ( _bittest64(v4, 0x2Du) )
    {
      v21 = (const char *)BugCheckParameter2[76];
      if ( v21 )
      {
        if ( strstr(v21, "ACPI000E") )
          *(_DWORD *)(a2 + 44) = 6;
      }
    }
  }
  v7 = *(_DWORD *)(a2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 150) ^ *(_DWORD *)(a2 + 4)) & 1;
  *(_DWORD *)(a2 + 4) = v7;
  v8 = v7 ^ (*((_DWORD *)BugCheckParameter2 + 150) ^ v7) & 2;
  *(_DWORD *)(a2 + 4) = v8;
  v9 = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x400;
  *(_DWORD *)(a2 + 4) = v9;
  v10 = v9 ^ ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x800;
  *(_DWORD *)(a2 + 4) = v10;
  v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x1000;
  *(_DWORD *)(a2 + 4) = v11;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x2000;
  v13 = BugCheckParameter2 + 140;
  *(_DWORD *)(a2 + 4) = v12;
  if ( _bittest64(BugCheckParameter2 + 140, 0x20u) )
  {
    if ( (v12 & 0x80000) != 0 )
      ACPIInternalClearFlags(v13, 0x100000LL);
    else
      ACPIInternalSetFlags(v13, 0x100000uLL);
  }
  return 0LL;
}
