/*
 * XREFs of PopBatteryQueryStatus @ 0x1407594B4
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline @ 0x1404F6FAC (Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPrepareIoctl @ 0x140A54F18 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryQueryStatus(__int64 a1, char a2)
{
  int v2; // r14d
  unsigned int v5; // r8d
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // r9d
  int v10; // r10d
  unsigned int v11; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  PIRP *v13; // rdi
  int v14; // edx
  int v15; // ecx
  PIRP v16; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax

  *(_QWORD *)(a1 + 192) = 0LL;
  v2 = a1 + 188;
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
    v9 = 100;
    v10 = 199;
    while ( v9 )
    {
      v11 = *(_DWORD *)(a1 + 128) * v10 / 0xC8u;
      if ( v11 - 1 >= v5 && v11 - 1 < v6 )
        v6 = v11 - 1;
      if ( v11 <= v5 )
      {
        if ( v11 > v7 )
          v7 = *(_DWORD *)(a1 + 128) * v10 / 0xC8u;
        break;
      }
      --v9;
      v10 -= 2;
    }
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
  v13 = (PIRP *)(a1 + 56);
  v14 = 16;
  if ( IsEnabledDeviceUsageNoInline )
  {
    v15 = 16 * (*(_DWORD *)(a1 + 248) & 1) + 20;
    v14 = (*(_DWORD *)(a1 + 248) & 1) != 0 ? 36 : 16;
  }
  else
  {
    v15 = 20;
  }
  PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703460, 0, v2, v15, v14);
  v16 = *v13;
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), v16);
    if ( result < 0 )
      return result;
    v19 = Feature_EE_MPTF_Functionality__private_IsEnabledDeviceUsageNoInline();
    v20 = *(_OWORD *)(a1 + 188);
    if ( v19 && (*(_DWORD *)(a1 + 248) & 1) != 0 )
    {
      v21 = *(_OWORD *)(a1 + 204);
      v22 = *(_DWORD *)(a1 + 220);
      *(_OWORD *)(a1 + 148) = v20;
      *(_OWORD *)(a1 + 164) = v21;
      *(_DWORD *)(a1 + 180) = v22;
    }
    else
    {
      *(_OWORD *)(a1 + 148) = v20;
    }
  }
  else
  {
    CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopBatteryIrpComplete;
    CurrentStackLocation[-1].Context = (PVOID)a1;
    CurrentStackLocation[-1].Control = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *v13);
  }
  return 0;
}
