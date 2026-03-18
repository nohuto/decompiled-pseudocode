/*
 * XREFs of ACPIAmliEvaluateDsm @ 0x1400B9FBC
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1400688AC (ACPIThermalGetSensorDevice.c)
 *     ACPIFanSetTripPoints @ 0x1400964E8 (ACPIFanSetTripPoints.c)
 *     ACPIEvaluateDsmMethodOnBurstModeThreshold @ 0x14009CC5C (ACPIEvaluateDsmMethodOnBurstModeThreshold.c)
 *     ACPIFanPrepareImpactZoneSupport @ 0x14009DCC8 (ACPIFanPrepareImpactZoneSupport.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1400A0A60 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIPepEpmNotify @ 0x1400A1250 (ACPIPepEpmNotify.c)
 *     ACPIPepInitializeEpmNotificationSupport @ 0x1400A1328 (ACPIPepInitializeEpmNotificationSupport.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1400A1578 (ACPIPepInitializePlatformNotificationSupport.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400A5090 (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1400A6348 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus @ 0x1400A64C4 (ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1400B5660 (ACPIThermalWorker.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1400B9DA0 (ACPIPepPlatformEntryExitNotify.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1400B9E94 (AcpiQueryPciDeviceChassisLabel.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIAmliEvaluateDsm(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rbp
  __int64 Pool2; // rsi
  _WORD *v11; // rdi
  int v12; // eax
  int v13; // ebx

  v7 = a4;
  v8 = a3;
  v9 = AMLIGetNamedChild(a1, 1297302623);
  if ( v9 )
  {
    Pool2 = ExAllocatePool2(64LL, 160LL, 1097884481LL);
    if ( Pool2 )
    {
      v11 = (_WORD *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
      if ( v11 )
      {
        *(_WORD *)(Pool2 + 2) = 3;
        *(_WORD *)(Pool2 + 42) = 1;
        *(_WORD *)(Pool2 + 82) = 1;
        *(_DWORD *)(Pool2 + 24) = 16;
        *(_QWORD *)(Pool2 + 32) = a2;
        *(_QWORD *)(Pool2 + 56) = v8;
        *(_QWORD *)(Pool2 + 96) = v7;
        *(_WORD *)(Pool2 + 122) = 4;
        if ( *a5 )
          v12 = 40 * *a5 + 8;
        else
          v12 = 48;
        *(_QWORD *)(Pool2 + 152) = a5;
        *(_DWORD *)(Pool2 + 144) = v12;
        v13 = AMLIEvalNameSpaceObject(v9, (__int64)v11, 4, Pool2);
        if ( v13 >= 0 )
        {
          if ( (_DWORD)v7 || v11[1] == 3 )
          {
            *a6 = v11;
            v13 = 0;
          }
          else
          {
            v13 = -1073741823;
          }
        }
      }
      else
      {
        v13 = -1073741670;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0x41706341u);
      if ( v13 < 0 && v11 )
        ExFreePoolWithTag(v11, 0x52706341u);
    }
    else
    {
      v13 = -1073741670;
    }
    AMLIDereferenceHandleEx((__int64)v9);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v13;
}
