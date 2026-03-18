/*
 * XREFs of ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400B78F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_ssssssqss @ 0x1400414FC (WPP_RECORDER_SF_ssssssqss.c)
 *     AcpiDeviceResetInvokeReset @ 0x14005D938 (AcpiDeviceResetInvokeReset.c)
 *     AcpiDeviceResetMarkDeviceRemoved @ 0x14005DA80 (AcpiDeviceResetMarkDeviceRemoved.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpQueryPnpDeviceState(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v6; // r15
  __int64 DeviceExtension; // rax
  __int64 v8; // rbx
  bool v9; // si
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rbp
  const char *v19; // r11
  __int64 v21; // rax
  const char *v22; // r10
  const char *v23; // r9
  const char *v24; // r8
  const char *v25; // rdx
  const char *v26; // rcx
  const char *v27; // rax
  char *IrpText; // rax
  const char *v29; // r8
  bool v30; // zf
  __int64 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+A8h] [rbp+10h] BYREF

  v32 = 0LL;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = DeviceExtension;
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x33u) )
    v9 = 0;
  else
    v9 = AMLIIsNamedChildPresent(*(__int64 **)(DeviceExtension + 760), 1096045407);
  v10 = ACPIGet(v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v32, 0LL);
  if ( v10 < 0 )
    goto LABEL_20;
  v11 = *(_QWORD *)(v8 + 8);
  if ( (v11 & 0x40000000) != 0 || (v11 & 0x20000000) != 0 )
  {
    *(_QWORD *)(a2 + 56) |= 2uLL;
  }
  else if ( v9 || !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~2uLL;
  }
  if ( _bittest64((const signed __int64 *)(v8 + 8), 0x37u) )
  {
    *(_QWORD *)(a2 + 56) |= 4uLL;
  }
  else if ( v9 && !a4 )
  {
    *(_QWORD *)(a2 + 56) &= ~4uLL;
  }
  v12 = *(_QWORD *)(v8 + 8);
  if ( (v12 & 0x8001008040000LL) != 0 )
  {
    if ( (v12 & 0x200000) == 0 )
      goto LABEL_19;
    v30 = (*(_QWORD *)(v8 + 8) & 0x4000LL) == 0;
    goto LABEL_50;
  }
  if ( !a4 )
  {
    v13 = 1;
    if ( (*(_DWORD *)(v8 + 1120) & 0x40000) == 0 )
    {
      if ( !AMLIIsNamedChildPresent(*(__int64 **)(v8 + 760), 1397310559)
        && !AMLIIsNamedChildPresent(*(__int64 **)(v8 + 760), 861098079)
        && !AMLIIsNamedChildPresent(*(__int64 **)(v8 + 760), 810700895)
        || (v14 = *(_QWORD *)(v8 + 8), (v14 & 0x200000) != 0) && (v14 & 0x4000) == 0 )
      {
        v13 = 0;
      }
    }
    if ( *(int *)(v8 + 740) <= 0 && *(int *)(v8 + 744) <= 0 )
    {
      v30 = v13 == 0;
LABEL_50:
      if ( !v30 )
        goto LABEL_19;
    }
LABEL_17:
    *(_QWORD *)(a2 + 56) |= 0x20uLL;
    goto LABEL_19;
  }
  if ( *(int *)(v8 + 740) > 0 || *(int *)(v8 + 744) > 0 )
    goto LABEL_17;
LABEL_19:
  v15 = *(_QWORD *)(v8 + 952);
  if ( v15
    && (*(_DWORD *)(*(_QWORD *)(v8 + 784) + 48LL) & 0x4000000) != 0
    && (*(_BYTE *)(v15 + 18) || AcpiDeviceResetMarkDeviceRemoved(v8)) )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    AcpiDeviceResetInvokeReset(v8, a2);
    v10 = 259;
  }
LABEL_20:
  v16 = *(_QWORD *)(v8 + 8);
  v17 = byte_140075488;
  v18 = byte_140075488;
  v19 = byte_140075488;
  if ( (v16 & 0x200000000000LL) != 0 )
  {
    v18 = *(const char **)(v8 + 608);
    if ( (v16 & 0x400000000000LL) != 0 )
      v19 = *(const char **)(v8 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *(_QWORD *)(a2 + 56);
    v22 = " NoDisable";
    v23 = " ResourceChanged";
    if ( (v21 & 0x20) == 0 )
      v22 = byte_140075488;
    v24 = " Removed";
    if ( (v21 & 0x10) == 0 )
      v23 = byte_140075488;
    v25 = " Failed";
    v26 = " NoShowInUi";
    if ( (v21 & 8) == 0 )
      v24 = byte_140075488;
    if ( (v21 & 4) == 0 )
      v25 = byte_140075488;
    if ( (v21 & 2) == 0 )
      v26 = byte_140075488;
    v30 = (v21 & 1) == 0;
    v27 = " Disabled";
    if ( v30 )
      v27 = byte_140075488;
    WPP_RECORDER_SF_ssssssqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v25,
      (__int64)v24,
      (__int64)v23,
      v31,
      v27,
      v26,
      (__int64)v25,
      (__int64)v24,
      (__int64)v23,
      (__int64)v22,
      v8,
      (__int64)v18,
      (__int64)v19);
  }
  if ( (*(_QWORD *)(v8 + 8) & 0x200000000000LL) != 0 )
    v17 = *(const char **)(v8 + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x200000000000LL, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x17u,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      a2,
      IrpText,
      v10,
      v8,
      v17,
      v29);
  }
  return (unsigned int)v10;
}
