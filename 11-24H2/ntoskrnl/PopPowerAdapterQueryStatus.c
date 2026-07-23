/*
 * XREFs of PopPowerAdapterQueryStatus @ 0x14075A84C
 * Callers:
 *     PopPowerAdapterAdd @ 0x14075A030 (PopPowerAdapterAdd.c)
 *     PopPowerAdapterReinitialize @ 0x14075AA58 (PopPowerAdapterReinitialize.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline @ 0x1405D521C (Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopPowerAdapterQueryStatus(__int64 a1, char a2)
{
  __int64 v2; // rdi
  int v5; // eax
  IRP *v6; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8

  v2 = a1 + 64;
  *(_OWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( !a2 )
  {
    v5 = *(_DWORD *)(a1 + 180);
    *(_DWORD *)(a1 + 68) = -1;
    *(_DWORD *)(a1 + 72) = v5;
    *(_DWORD *)(a1 + 76) = PopPowerAdapterPeakPowerThresholdInMW;
  }
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703468, 0, v2, 16, 40);
  v6 = *(IRP **)(a1 + 56);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), v6);
    if ( result < 0 )
      return result;
    v9 = *(_OWORD *)(v2 + 16);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)v2;
    v10 = *(_QWORD *)(v2 + 32);
    *(_OWORD *)(a1 + 192) = v9;
    *(_QWORD *)(a1 + 208) = v10;
  }
  else
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopPowerAdapterIrpComplete;
    CurrentStackLocation[-1].Context = (PVOID)a1;
    CurrentStackLocation[-1].Control = -32;
    if ( (unsigned int)Feature_PowerAdapterIrpCompleteFlagFix__private_IsEnabledDeviceUsageNoInline() )
      KeResetEvent((PRKEVENT)(a1 + 104));
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
  }
  return 0;
}
