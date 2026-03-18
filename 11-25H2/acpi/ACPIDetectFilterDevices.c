/*
 * XREFs of ACPIDetectFilterDevices @ 0x140016708
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400B3C10 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400B50A8 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400BA750 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDevicePowerFlushQueue @ 0x14003DF5C (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildMissingChildren @ 0x140040DF0 (ACPIBuildMissingChildren.c)
 *     ACPIBuildFilter @ 0x140046B74 (ACPIBuildFilter.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1400AF558 (ACPIFilterQueryBusD3ColdSupport.c)
 *     AcpiQueryPciBusInterface @ 0x1400AF830 (AcpiQueryPciBusInterface.c)
 *     ACPIDetectFilterMatch @ 0x1400AFA94 (ACPIDetectFilterMatch.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     ACPIBuildFlushQueue @ 0x1400B67FC (ACPIBuildFlushQueue.c)
 *     ACPIInternalIsPci @ 0x1400C0C40 (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v3; // si
  __int64 v4; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  int v7; // edx
  int v8; // ebx
  KIRQL v9; // dl
  __int64 v10; // rbp
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v15; // r8
  KIRQL v16; // al
  __int64 v17; // rbx
  KIRQL v18; // dl
  const char *v20; // r14
  const char *v21; // rcx
  int v22; // eax
  ULONG_PTR v23; // rbx
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  const char *v28; // rdx
  const char *v29; // rcx
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v3 = 0;
  v36 = 0LL;
  v4 = DeviceExtension;
  v35 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x29u) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v4);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  v8 = ACPIBuildFlushQueue(v4, v6);
  if ( v8 < 0 )
  {
    v20 = byte_140075488;
    v21 = byte_140075488;
    if ( v4 )
    {
      v24 = *(_QWORD *)(v4 + 8);
      v3 = v4;
      if ( (v24 & 0x200000000000LL) != 0 )
      {
        v20 = *(const char **)(v4 + 608);
        if ( (v24 & 0x400000000000LL) != 0 )
          v21 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v8;
    v25 = 16;
    goto LABEL_34;
  }
  v8 = ACPIDevicePowerFlushQueue(v4);
  if ( v8 < 0 )
  {
    v20 = byte_140075488;
    v21 = byte_140075488;
    if ( v4 )
    {
      v26 = *(_QWORD *)(v4 + 8);
      v3 = v4;
      if ( (v26 & 0x200000000000LL) != 0 )
      {
        v20 = *(const char **)(v4 + 608);
        if ( (v26 & 0x400000000000LL) != 0 )
          v21 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v8;
    v25 = 17;
LABEL_34:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v25,
      (__int64)&WPP_588943f8ee273fe6f3e6467e1f1953a3_Traceguids,
      v8,
      v3,
      (__int64)v20,
      (__int64)v21);
    return (unsigned int)v8;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v10 = *(_QWORD *)(v4 + 800);
  if ( v10 == v4 + 800 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)(v10 - 816);
    ACPIInitReferenceDeviceExtension(v11);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  while ( v11 )
  {
    v35 = 0LL;
    if ( (int)ACPIGet((__int64)v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v35, 0LL) >= 0
      && ((v11[1] & 0x2000000000002LL) == 0
       || (((*(_QWORD *)(v4 + 8) & 0x2000000LL) != 0) & _bittest(&AcpiOverrideAttributes, 0x17u)) != 0) )
    {
      v14 = ACPIDetectFilterMatch(v11, a2, &v36);
      v15 = v14;
      if ( v14 < 0 )
      {
        v31 = v11[1];
        v28 = byte_140075488;
        v29 = byte_140075488;
        if ( (v31 & 0x200000000000LL) != 0 )
        {
          v28 = (const char *)v11[76];
          if ( (v31 & 0x400000000000LL) != 0 )
            v29 = (const char *)v11[77];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = 19;
          goto LABEL_51;
        }
      }
      else
      {
        if ( !v36 )
          goto LABEL_13;
        v22 = ACPIBuildFilter(*(_QWORD *)(a1 + 8), v11);
        v15 = v22;
        if ( v22 < 0 )
        {
          v27 = v11[1];
          v28 = byte_140075488;
          v29 = byte_140075488;
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v28 = (const char *)v11[76];
            if ( (v27 & 0x400000000000LL) != 0 )
              v29 = (const char *)v11[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v30 = 18;
LABEL_51:
            v32 = (__int64)v28;
            LOBYTE(v28) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v28,
              22,
              v30,
              (__int64)&WPP_588943f8ee273fe6f3e6467e1f1953a3_Traceguids,
              v15,
              (char)v11,
              v32,
              (__int64)v29);
          }
        }
        else
        {
          v23 = v11[96];
          if ( (int)AcpiQueryPciBusInterface(v23) >= 0 )
            ACPIInternalIsPci(v23);
          ACPIFilterQueryBusD3ColdSupport(v23);
        }
      }
    }
LABEL_13:
    v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v17 = v11[102];
    if ( v17 == v4 + 800 )
    {
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
      break;
    }
    ACPIInitReferenceDeviceExtension(v17 - 816);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
    ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v11);
    v11 = (_QWORD *)(v17 - 816);
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 1120) & 0x8000LL) != 0 )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v13) = (*(_QWORD *)(v4 + 1120) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 760), v12, v13);
  }
  return 0LL;
}
