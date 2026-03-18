/*
 * XREFs of AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x14001E1D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x140020340 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x140054FE8 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x140055404 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x140059060 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x140059CF0 (ACPIBuildProcessThermalZonePep.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 *     AcpiQueryPlatformExtensionRegistered @ 0x140020868 (AcpiQueryPlatformExtensionRegistered.c)
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x140064834 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x140064AA0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiNotifyPlExtDiscoverDeviceAsync(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // rsi
  char v4; // r15
  _QWORD *v5; // rdi
  int v9; // ebx
  int v11; // edx
  __int64 Pool2; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdx
  int v15; // edx
  PVOID v16; // rsi
  int v17; // edx
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( !qword_140089EC8 || !(unsigned __int8)AcpiQueryPlatformExtensionRegistered() )
  {
    v9 = 0;
LABEL_4:
    if ( P[1] )
      ExFreePoolWithTag(P[1], 0x53706341u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4E706341u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x4E706341u);
    if ( v9 < 0 && v4 )
      AMLIDereferenceHandleEx(a1);
    return (unsigned int)v9;
  }
  v9 = ACPIAmliBuildObjectPathnameUnicode(a1, P, 1LL);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        19,
        11,
        (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
        a1,
        v9);
    }
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(64LL, 72LL, 1315988289LL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_4;
  }
  v13 = *(_OWORD *)P;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_OWORD *)(Pool2 + 56) = v13;
  *(_QWORD *)(Pool2 + 40) = a2;
  *(_QWORD *)(Pool2 + 48) = a3;
  AMLIReferenceHandleEx(a1);
  v4 = 1;
  v5[2] = a1;
  LOBYTE(v14) = 1;
  v9 = AcpiCreateDiscoveryDeleteParameters(v5, v14, &v19);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        19,
        12,
        (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
        a1,
        v9);
    }
    v3 = v19;
    goto LABEL_4;
  }
  v16 = v19;
  v9 = ((__int64 (__fastcall *)(PVOID))xmmword_140089ED0)(v19);
  if ( v9 != 259 )
  {
    AcpiNotifyDiscoverDeleteMainCompletion(v16);
    v9 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      19,
      13,
      (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
      a1,
      v9);
  }
  return (unsigned int)v9;
}
