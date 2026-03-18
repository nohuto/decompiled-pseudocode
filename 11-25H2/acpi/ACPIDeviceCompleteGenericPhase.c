/*
 * XREFs of ACPIDeviceCompleteGenericPhase @ 0x14001D4D0
 * Callers:
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x140014800 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1400161D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x14001C1D0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x14001C360 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x14001C620 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x14001CE80 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x14001D100 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x14001D940 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x14001DA70 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x140022970 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1400313E0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1400314A0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x140031560 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x140034590 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x140049510 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase3 @ 0x140049FB0 (ACPIDevicePowerProcessPhase2SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x14004B120 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004B7B0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     ACPIDeviceCompleteInterpreterRequest @ 0x14004BE50 (ACPIDeviceCompleteInterpreterRequest.c)
 *     ACPIWakeRestoreEnablesCompletion @ 0x140053170 (ACPIWakeRestoreEnablesCompletion.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x14005CE50 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005CFE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x14001D478 (ACPIDeviceCompletePhase3Common.c)
 *     ACPIPowerScheduleDpc @ 0x14001D5EC (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r10
  const char *v7; // rdx
  const char *v8; // r8
  __int64 v10; // rcx
  KIRQL v11; // bl
  __int64 v12; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD **)(a4 + 40);
  LOBYTE(v6) = 0;
  v7 = byte_140075488;
  v8 = byte_140075488;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v4[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = (__int64)v7;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      10,
      14,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a2,
      v6,
      v12,
      (__int64)v8);
  }
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 < 0 )
  {
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), 2);
  }
  else
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(a4 + 208), *(_DWORD *)(a4 + 212), 1);
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    ACPIPowerScheduleDpc();
    KeReleaseSpinLock(&AcpiPowerQueueLock, v11);
  }
}
