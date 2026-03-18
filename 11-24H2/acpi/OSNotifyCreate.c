/*
 * XREFs of OSNotifyCreate @ 0x140016320
 * Callers:
 *     <none>
 * Callees:
 *     OSNotifyCreateOperationRegion @ 0x14001648C (OSNotifyCreateOperationRegion.c)
 *     OSNotifyCreateDevice @ 0x1400165E0 (OSNotifyCreateDevice.c)
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qsL @ 0x1400290C0 (WPP_RECORDER_SF_qsL.c)
 *     OSNotifyCreateThermalZone @ 0x140052368 (OSNotifyCreateThermalZone.c)
 *     OSNotifyCreatePowerResource @ 0x140063C74 (OSNotifyCreatePowerResource.c)
 *     OSNotifyCreateProcessor @ 0x140063D1C (OSNotifyCreateProcessor.c)
 */

__int64 __fastcall OSNotifyCreate(int a1, ULONG_PTR a2)
{
  int v4; // edx
  KIRQL v5; // si
  char Device; // al
  char v7; // bl
  int v8; // edx

  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  switch ( a1 )
  {
    case 6:
      Device = OSNotifyCreateDevice(a2);
      goto LABEL_4;
    case 10:
      Device = OSNotifyCreateOperationRegion(a2);
LABEL_4:
      v7 = Device;
      goto LABEL_5;
    case 11:
      Device = OSNotifyCreatePowerResource(a2);
      goto LABEL_4;
    case 12:
      Device = OSNotifyCreateProcessor(a2, 0LL);
      goto LABEL_4;
    case 13:
      Device = OSNotifyCreateThermalZone(a2, 0LL);
      goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      21,
      10,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      a1);
  }
  v7 = 0;
LABEL_5:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_140088A00 = *(_DWORD *)(*(_QWORD *)a2 + 40LL);
    byte_140088A04 = 0;
    WPP_RECORDER_SF_qsL(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6,
      11,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      a2,
      (__int64)&dword_140088A00,
      v7);
  }
  return 0LL;
}
