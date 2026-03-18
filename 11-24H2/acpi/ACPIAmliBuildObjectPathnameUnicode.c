/*
 * XREFs of ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiDiagTraceButtonNotification @ 0x14002442C (AcpiDiagTraceButtonNotification.c)
 *     AcpiDiagTraceButtonIrpCompletion @ 0x1400246E0 (AcpiDiagTraceButtonIrpCompletion.c)
 *     AcpiDiagTraceFanEvent @ 0x14002D078 (AcpiDiagTraceFanEvent.c)
 *     AcpiDiagTraceTemperatureChange @ 0x140038544 (AcpiDiagTraceTemperatureChange.c)
 *     AcpiDiagTraceThermalNotification @ 0x1400386B4 (AcpiDiagTraceThermalNotification.c)
 *     AcpiDiagTraceThermalZoneRundown @ 0x140038E40 (AcpiDiagTraceThermalZoneRundown.c)
 *     AcpiDiagTraceDeviceCoolingRundown @ 0x140039394 (AcpiDiagTraceDeviceCoolingRundown.c)
 *     AcpiDiagTraceConstraintEvent @ 0x140039A4C (AcpiDiagTraceConstraintEvent.c)
 *     AcpiDiagTraceDevicePassiveCooling @ 0x14004ECC0 (AcpiDiagTraceDevicePassiveCooling.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x14004FF4C (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTraceDeviceActiveCooling @ 0x140056C74 (AcpiDiagTraceDeviceActiveCooling.c)
 *     AcpiDiagTraceTemperatureTelemetry @ 0x140057534 (AcpiDiagTraceTemperatureTelemetry.c)
 *     ACPIReserveDependencies @ 0x14005A964 (ACPIReserveDependencies.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x140066080 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1400662F0 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIThermalGetOverrideHandle @ 0x1400B6754 (ACPIThermalGetOverrideHandle.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 */

__int64 __fastcall ACPIAmliBuildObjectPathnameUnicode(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // si
  __int16 *Pool2; // rdi
  __int64 result; // rax
  unsigned int v6; // ebx
  char *v7; // r12
  int v8; // r15d
  unsigned __int16 v9; // bp
  char *v10; // r8
  __int16 *v11; // r9
  char v12; // dl
  char v13; // cl
  __int16 v14; // ax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v3 = 0;
  Pool2 = 0LL;
  result = ACPIAmliBuildObjectPathname(a1, &P);
  v6 = result;
  if ( (int)result < 0 )
    return result;
  v7 = (char *)P;
  v8 = 0;
LABEL_3:
  if ( v8 >= 2 )
  {
    *(_WORD *)a2 = v3 - 2;
    goto LABEL_27;
  }
  v9 = 0;
  v10 = v7;
  v11 = Pool2;
  v12 = 1;
  v6 = 0;
  while ( 1 )
  {
    if ( !v12 )
    {
      if ( v9 > v3 )
      {
        if ( Pool2 )
        {
          ExFreePoolWithTag(Pool2, 0x53706341u);
          Pool2 = 0LL;
        }
        if ( v8 )
        {
          v6 = -2147483643;
          goto LABEL_41;
        }
        Pool2 = (__int16 *)ExAllocatePool2(64LL, v9, 1399874369LL);
        if ( !Pool2 )
        {
          v6 = -1073741670;
          goto LABEL_39;
        }
        v3 = v9;
      }
      ++v8;
      goto LABEL_3;
    }
    if ( v9 > 0xFFFDu )
    {
      v6 = -1073741675;
      goto LABEL_41;
    }
    v13 = *v10;
    v9 += 2;
    if ( v3 < v9 )
    {
      v12 = v13 != 0 ? v12 : 0;
      goto LABEL_20;
    }
    if ( (unsigned __int8)(v13 - 97) > 0x19u )
    {
      if ( v13 >= 65 )
      {
        if ( v13 > 90 )
        {
          if ( v13 == 95 )
          {
            v14 = 95;
          }
          else
          {
            if ( v13 != 92 )
              break;
            v14 = 92;
          }
          goto LABEL_19;
        }
        goto LABEL_36;
      }
      if ( v13 < 48 )
      {
        v14 = 46;
        if ( v13 != 46 )
        {
          if ( v13 )
            break;
          v14 = 0;
          v12 = 0;
        }
        goto LABEL_19;
      }
      if ( v13 > 57 )
        break;
    }
LABEL_36:
    v14 = *v10;
LABEL_19:
    *v11++ = v14;
LABEL_20:
    ++v10;
  }
  v6 = -1073741811;
LABEL_41:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x53706341u);
LABEL_39:
  Pool2 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v3 = 0;
LABEL_27:
  *(_WORD *)(a2 + 2) = v3;
  *(_QWORD *)(a2 + 8) = Pool2;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x53706341u);
  return v6;
}
