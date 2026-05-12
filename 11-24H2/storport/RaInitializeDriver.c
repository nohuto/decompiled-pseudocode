/*
 * XREFs of RaInitializeDriver @ 0x140184138
 * Callers:
 *     StorPortInitialize @ 0x14006FD50 (StorPortInitialize.c)
 * Callees:
 *     RaDuplicateUnicodeString @ 0x1400547E0 (RaDuplicateUnicodeString.c)
 *     McGenEventRegister_EtwRegister @ 0x14006B1E0 (McGenEventRegister_EtwRegister.c)
 *     RaidAddPortDriver @ 0x14006F310 (RaidAddPortDriver.c)
 *     StorpRegisterTraceLogging @ 0x14018C91C (StorpRegisterTraceLogging.c)
 */

__int64 __fastcall RaInitializeDriver(__int64 a1, __int64 *a2, __int64 a3, const UNICODE_STRING *a4)
{
  if ( MEMORY[0xFFFFF780000003C6] )
    UseQPCTime = 1;
  if ( _InterlockedIncrement(&g_RaidEtwRefCount) == 1 )
  {
    McGenEventRegister_EtwRegister();
    StorpRegisterTraceLogging();
  }
  a2[14] = (__int64)RaDriverCreateIrp;
  a2[16] = (__int64)RaDriverCloseIrp;
  a2[17] = (__int64)RaDriverIoIrp;
  a2[18] = (__int64)RaDriverIoIrp;
  a2[23] = (__int64)RaDriverFlushIrp;
  a2[30] = (__int64)RaDriverShutdownIrp;
  a2[28] = (__int64)RaDriverDeviceControlIrp;
  a2[29] = (__int64)RaDriverScsiIrp;
  a2[41] = (__int64)RaDriverPnpIrp;
  a2[36] = (__int64)RaDriverPowerIrp;
  a2[37] = (__int64)RaDriverSystemControlIrp;
  *(_QWORD *)(a2[6] + 8) = RaDriverAddDevice;
  a2[12] = 0LL;
  a2[13] = (__int64)RaDriverUnload;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  RaDuplicateUnicodeString((PUNICODE_STRING)(a1 + 40), a4, a3, a2[1]);
  RaidAddPortDriver(a3, a1);
  return 0LL;
}
