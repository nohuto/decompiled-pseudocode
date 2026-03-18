/*
 * XREFs of ACPICMButtonSetPower @ 0x14004BAF0
 * Callers:
 *     ACPICMLidSetPowerCompletion @ 0x14004BA00 (ACPICMLidSetPowerCompletion.c)
 * Callees:
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x140028718 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIBusIrpSetPower @ 0x140028AB0 (ACPIBusIrpSetPower.c)
 */

__int64 __fastcall ACPICMButtonSetPower(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  __int64 DeviceExtension; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // r8d
  int v8; // eax
  char v9; // r11
  __int64 v10; // r8
  const char *v11; // rcx
  const char *v12; // r10
  unsigned __int16 v13; // r9
  NTSTATUS v14; // eax
  __int64 v15; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v5 = a2[23];
  *(_BYTE *)(v5 + 3) |= 1u;
  if ( *(_DWORD *)(v5 + 16) != 1 && (*(_DWORD *)(DeviceExtension + 200) & 4) != 0 )
  {
    v6 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v6 & 0x10000) != 0 )
    {
      v7 = (*(_DWORD *)(v5 + 8) >> 8) & 0xF;
      if ( v7 == 1 )
      {
        v8 = OSNotifyDeviceWake(*(__int64 **)(DeviceExtension + 760));
        v9 = v8;
        if ( v8 < 0 )
        {
          v10 = *(_QWORD *)(DeviceExtension + 8);
          v11 = byte_1400753E8;
          v12 = byte_1400753E8;
          if ( (v10 & 0x200000000000LL) != 0 )
          {
            v11 = *(const char **)(DeviceExtension + 608);
            if ( (v10 & 0x400000000000LL) != 0 )
              v12 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 11;
LABEL_19:
            WPP_RECORDER_SF_qLqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              v13,
              (__int64)&WPP_14d801cc74893723bea673682ddc6690_Traceguids,
              (char)a2,
              v9,
              DeviceExtension,
              v11,
              v12);
          }
        }
      }
      else if ( *(_DWORD *)(DeviceExtension + 536) >= v7 && (v6 & 0x1000000000000000LL) == 0 )
      {
        v14 = PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v7, ACPICMButtonWaitWakeComplete, 0LL, 0LL);
        v9 = v14;
        if ( v14 < 0 )
        {
          v15 = *(_QWORD *)(DeviceExtension + 8);
          v11 = byte_1400753E8;
          v12 = byte_1400753E8;
          if ( (v15 & 0x200000000000LL) != 0 )
          {
            v11 = *(const char **)(DeviceExtension + 608);
            if ( (v15 & 0x400000000000LL) != 0 )
              v12 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 12;
            goto LABEL_19;
          }
        }
      }
    }
  }
  ACPIBusIrpSetPower(DeviceObject, a2);
  return 259LL;
}
