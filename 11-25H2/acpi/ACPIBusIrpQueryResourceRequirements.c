/*
 * XREFs of ACPIBusIrpQueryResourceRequirements @ 0x1400AC9B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1400307B0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIDebugGetIrpText @ 0x140040AF4 (ACPIDebugGetIrpText.c)
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x14004C540 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIRangeValidatePciResources @ 0x14004CEF8 (ACPIRangeValidatePciResources.c)
 *     ACPIRangeFilterPICInterrupt @ 0x140066AC4 (ACPIRangeFilterPICInterrupt.c)
 *     ACPIInternalSetSpare @ 0x1400AD5B4 (ACPIInternalSetSpare.c)
 *     PnpBiosGetDeviceResourceList @ 0x1400AD6F8 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1400AD988 (ACPIInternalSetProximityDomain.c)
 */

__int64 __fastcall ACPIBusIrpQueryResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  char v2; // si
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rdi
  const char *v7; // r14
  __int64 v8; // rcx
  int DeviceResourceList; // ebx
  const char *v10; // r8
  __int64 v11; // rax
  char *IrpText; // rax
  const char *v13; // r8
  char v14; // r10
  const char *v15; // r11
  __int64 v16; // rcx
  _DWORD *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rax
  const char *v21; // r8
  int v22; // eax
  char v23; // r8
  const char *v24; // r10
  const char *v25; // rdx
  __int64 v26; // rcx
  _DWORD *v27; // r8
  unsigned int i; // r10d
  _DWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 j; // rax
  _DWORD *v33; // rcx
  unsigned int k; // r8d
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  const char *v38; // rdx
  const char *v39; // rcx
  __int64 v40; // rcx
  char *v41; // rax
  const char *v42; // r8
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  P = 0LL;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  v7 = byte_140075488;
  DeviceResourceList = PnpBiosGetDeviceResourceList(a1, 1LL, &P);
  v10 = byte_140075488;
  if ( DeviceExtension )
  {
    v11 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v11 & 0x200000000000LL) != 0 && (v11 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(v8, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x32u,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      (char)a2,
      IrpText,
      DeviceResourceList,
      v14,
      v15,
      v13);
  }
  if ( DeviceResourceList < 0 )
    goto LABEL_12;
  v16 = *(_QWORD *)(DeviceExtension + 8);
  v17 = P;
  v18 = v16 & 0x2000000;
  if ( P )
  {
    if ( (v16 & 0x2000000) != 0 )
    {
      ACPIRangeValidatePciResources(DeviceExtension, (ULONG_PTR)P, (unsigned __int64)v10);
    }
    else if ( (v16 & 0x200000000LL) != 0 )
    {
      v22 = ACPIRangeFilterPICInterrupt((__int64)P);
      if ( v22 < 0 )
      {
        v23 = 0;
        v24 = byte_140075488;
        v25 = byte_140075488;
        if ( DeviceExtension )
        {
          v26 = *(_QWORD *)(DeviceExtension + 8);
          v23 = DeviceExtension;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v24 = *(const char **)(DeviceExtension + 608);
            if ( (v26 & 0x400000000000LL) != 0 )
              v25 = *(const char **)(DeviceExtension + 616);
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x33u,
            (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
            (char)a2,
            v22,
            v23,
            v24,
            v25);
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
      }
    }
    if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
    {
      if ( *(_BYTE *)(DeviceExtension + 184) )
      {
        v27 = v17 + 8;
        for ( i = 0; i < v17[7]; v27 += 8 * (unsigned int)v27[1] + 2 )
        {
          v29 = v27 + 2;
          v30 = (unsigned __int64)&v27[8 * v27[1] + 2];
          if ( (unsigned __int64)(v27 + 2) < v30 )
          {
            do
            {
              v31 = (unsigned __int64)(v29 + 8);
              if ( ((*((_BYTE *)v29 + 1) - 3) & 0xFB) == 0 )
              {
                for ( j = (unsigned __int64)(v29 + 8); j < v30 && *(_BYTE *)(j + 1) == 0x81; j += 32LL )
                {
                  if ( *(_WORD *)(j + 4) == 1 )
                  {
                    *((_WORD *)v29 + 2) |= 0x100u;
                    break;
                  }
                }
              }
              v29 += 8;
            }
            while ( v31 < v30 );
          }
          ++i;
        }
      }
    }
    if ( (*(_DWORD *)(DeviceExtension + 8) & 0x8000LL) != 0 )
    {
      v33 = v17 + 8;
      for ( k = 0; k < v17[7]; v33 += 8 * (unsigned int)v33[1] + 2 )
      {
        v35 = (unsigned __int64)(v33 + 2);
        v36 = (unsigned __int64)&v33[8 * v33[1] + 2];
        while ( v35 < v36 )
        {
          if ( *(_BYTE *)(v35 + 1) == 2 )
            *(_WORD *)(v35 + 4) |= 8u;
          v35 += 32LL;
        }
        ++k;
      }
    }
    DeviceResourceList = ACPIInternalInterruptPolarityCacheStorePolaritiesFromList(DeviceExtension, (__int64)v17);
    if ( DeviceResourceList >= 0 )
    {
      a2->IoStatus.Information = (unsigned __int64)v17;
      goto LABEL_59;
    }
    v37 = *(_QWORD *)(DeviceExtension + 8);
    v38 = byte_140075488;
    v39 = byte_140075488;
    if ( (v37 & 0x200000000000LL) != 0 )
    {
      v38 = *(const char **)(DeviceExtension + 608);
      if ( (v37 & 0x400000000000LL) != 0 )
        v39 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x34u,
        (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
        (char)a2,
        DeviceResourceList,
        DeviceExtension,
        v38,
        v39);
    ExFreePoolWithTag(v17, 0);
    goto LABEL_12;
  }
  v8 = 3221225473LL;
  if ( v18 )
    DeviceResourceList = -1073741823;
  if ( DeviceResourceList < 0 )
  {
LABEL_12:
    if ( DeviceResourceList != -1073741670 )
    {
      v19 = *(_QWORD *)(DeviceExtension + 8);
      if ( (v19 & 0x2000000) != 0 )
      {
        if ( (v19 & 0x200000000000LL) != 0 )
          v7 = *(const char **)(DeviceExtension + 608);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v20 = ACPIDebugGetIrpText(v8, MinorFunction);
          WPP_RECORDER_SF_qsLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x35u,
            (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
            (char)a2,
            v20,
            DeviceResourceList,
            DeviceExtension,
            v7,
            v21);
        }
        KeBugCheckEx(0xA5u, 2uLL, DeviceExtension, 1uLL, (ULONG_PTR)a2);
      }
    }
  }
LABEL_59:
  a2->IoStatus.Status = DeviceResourceList;
  IofCompleteRequest(a2, 0);
  if ( DeviceExtension )
  {
    v2 = DeviceExtension;
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
      v7 = *(const char **)(DeviceExtension + 608);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v41 = ACPIDebugGetIrpText(v40, MinorFunction);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x36u,
      (__int64)&WPP_8cdc3461262e3bc90d1da38d947f0571_Traceguids,
      (char)a2,
      v41,
      DeviceResourceList,
      v2,
      v7,
      v42);
  }
  return (unsigned int)DeviceResourceList;
}
