/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004B7B0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_i @ 0x14005D394 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase4(_DWORD *a1)
{
  int v1; // edi
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  __int64 *v5; // rbp
  __int64 Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  __int64 result; // rax
  int v15; // [rsp+70h] [rbp+8h] BYREF
  int v16; // [rsp+74h] [rbp+Ch]

  v1 = 0;
  a1[53] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x43u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      0);
  v3 = a1[26];
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v4 = a1[27];
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( __PAIR64__(v4, v3) != 0x500000001LL || !Usb4ControlGranted )
    goto LABEL_14;
  v5 = AMLIGetNamedChild(*(__int64 **)(RootDeviceExtension + 760), 1129533279);
  if ( v5 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    v15 = 0;
    v7 = Pool2;
    v8 = 2LL;
    v9 = 1LL;
    v16 = AcpiRootFeaturesGranted;
    *(_QWORD *)(Pool2 + 32) = &SB_OSC_UUID;
    v10 = (_QWORD *)(Pool2 + 56);
    *(_WORD *)(v7 + 2) = 3;
    *(_DWORD *)(v7 + 24) = 16;
    do
    {
      *((_WORD *)v10 - 7) = 1;
      *v10 = v9++;
      v10 += 5;
      --v8;
    }
    while ( v8 );
    *(_WORD *)(v7 + 122) = 3;
    *(_DWORD *)(v7 + 144) = 8;
    *(_QWORD *)(v7 + 152) = &v15;
    v11 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
    v12 = AMLIAsyncEvalObject(v5, v11, 4, v7, &ACPIDeviceCompleteOscReevalPhase, (__int64)a1);
    v1 = v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        10,
        68,
        (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
        v12);
    }
    AMLIDereferenceHandleEx((__int64)v5);
    ExFreePoolWithTag((PVOID)v7, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x45u,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1);
  result = 259LL;
  if ( v1 != 259 )
  {
LABEL_14:
    ACPIDeviceCompleteGenericPhase(0LL, v1, 0LL, (__int64)a1);
    return 0LL;
  }
  return result;
}
