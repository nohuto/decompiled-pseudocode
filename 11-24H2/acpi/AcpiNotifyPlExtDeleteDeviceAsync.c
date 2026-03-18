/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceAsync @ 0x140064BA8
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x140064D88 (AcpiNotifyPlExtDeleteDeviceSync.c)
 * Callees:
 *     AcpiQueryPlatformExtensionRegistered @ 0x140020868 (AcpiQueryPlatformExtensionRegistered.c)
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x140064834 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x140064AA0 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     WPP_RECORDER_SF_qqD @ 0x140065620 (WPP_RECORDER_SF_qqD.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 *Pool2; // rax
  int v9; // edx
  __int64 *v10; // rdi
  int v11; // edx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  P[0] = 0LL;
  if ( qword_140089E48 && (unsigned __int8)AcpiQueryPlatformExtensionRegistered() )
  {
    Pool2 = (__int64 *)ExAllocatePool2(64LL, 72LL, 1315988289LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      Pool2[1] = (__int64)Pool2;
      *Pool2 = (__int64)Pool2;
      Pool2[4] = a2;
      Pool2[6] = a4;
      Pool2[5] = (__int64)AcpiInterpreterPausedSignalEventCallback;
      Pool2[2] = a1;
      v7 = AcpiCreateDiscoveryDeleteParameters(Pool2, 0, (__int64 *)P);
      if ( v7 >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(PVOID))xmmword_140089E50)(P[0]);
        if ( v7 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion((char *)P[0]);
          v7 = 259;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x13u,
            0x10u,
            (__int64)&WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids,
            a1,
            v7);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v11, 19, 15);
        ExFreePoolWithTag(v10, 0x4E706341u);
        if ( P[0] )
          ExFreePoolWithTag(P[0], 0x4E706341u);
      }
    }
    else
    {
      v7 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v9, 19, 14);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
