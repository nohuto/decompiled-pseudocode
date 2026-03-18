/*
 * XREFs of PopBatteryQueryStatus @ 0x140AC26B4
 * Callers:
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IoSynchronousCallDriver @ 0x14035DF20 (IoSynchronousCallDriver.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1405C86A4 (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPrepareIoctl @ 0x140A5AE80 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryQueryStatus(__int64 a1, char a2)
{
  struct _IRP *v2; // r14
  unsigned int v5; // ecx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r8d
  unsigned int v11; // r9d
  int v12; // r10d
  unsigned int v13; // edx
  unsigned int v14; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  PIRP *v16; // rdi
  ULONG v17; // edx
  ULONG v18; // ecx
  PIRP v19; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  int v22; // eax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax

  *(_QWORD *)(a1 + 192) = 0LL;
  v2 = (struct _IRP *)(a1 + 188);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a1 + 108);
  if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_DWORD *)(a1 + 192) = 0;
    *(_BYTE *)(a1 + 208) = 1;
  }
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 192) = -1;
    v5 = *(_DWORD *)(a1 + 152);
    v6 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a1 + 148);
    if ( v5 <= v6 )
    {
      v8 = *(_DWORD *)(a1 + 132);
      if ( v5 <= v8 )
      {
        v7 = 0;
        v6 = *(_DWORD *)(a1 + 132);
      }
      else
      {
        v7 = v8 + 1;
      }
    }
    else
    {
      v7 = v6 + 1;
      v6 = -1;
    }
    v9 = *(_DWORD *)(a1 + 128);
    v10 = 100;
    v11 = 199 * v9;
    v12 = 2 * v9;
    while ( 1 )
    {
      v13 = v11 / 0xC8;
      v14 = v11 / 0xC8 - 1;
      if ( v14 >= v5 && v14 < v6 )
        v6 = v11 / 0xC8 - 1;
      if ( v13 <= v5 )
        break;
      v11 -= v12;
      if ( !--v10 )
        goto LABEL_18;
    }
    if ( v13 > v7 )
      v7 = v11 / 0xC8;
LABEL_18:
    *(_DWORD *)(a1 + 204) = v6;
    *(_DWORD *)(a1 + 200) = v7;
    if ( (unsigned int)Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a1 + 192) = -1;
      *(_DWORD *)(a1 + 212) = PopBatteryInstantaneousPeakPowerThresholdInMW;
      *(_DWORD *)(a1 + 216) = PopBatterySustainablePeakPowerThresholdInMW;
      *(_DWORD *)(a1 + 220) = PopBatteryPresentRateThreshold;
    }
    DbgPrintEx(0x92u, 2u, "\nBattery Triggers [%p]\n|- High = %u\n|- Low  = %u\n", (const void *)a1, v6, v7);
  }
  IsEnabledDeviceUsageNoInline = Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
  v16 = (PIRP *)(a1 + 56);
  v17 = 16;
  if ( IsEnabledDeviceUsageNoInline )
  {
    v18 = 16 * (*(_DWORD *)(a1 + 248) & 1) + 20;
    v17 = (*(_DWORD *)(a1 + 248) & 1) != 0 ? 36 : 16;
  }
  else
  {
    v18 = 20;
  }
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294064u, 0, v2, v18, v17);
  v19 = *v16;
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), v19);
    if ( result < 0 )
      return result;
    v22 = Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
    v23 = *(_OWORD *)(a1 + 188);
    if ( v22 && (*(_DWORD *)(a1 + 248) & 1) != 0 )
    {
      v24 = *(_OWORD *)(a1 + 204);
      v25 = *(_DWORD *)(a1 + 220);
      *(_OWORD *)(a1 + 148) = v23;
      *(_OWORD *)(a1 + 164) = v24;
      *(_DWORD *)(a1 + 180) = v25;
    }
    else
    {
      *(_OWORD *)(a1 + 148) = v23;
    }
  }
  else
  {
    CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopBatteryIrpComplete;
    CurrentStackLocation[-1].Context = (PVOID)a1;
    CurrentStackLocation[-1].Control = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *v16);
  }
  return 0;
}
