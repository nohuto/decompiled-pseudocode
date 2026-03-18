/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1401E1800
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x1400C7244 (RIMSetDeviceOutputConfig.c)
 *     RIMGetQDCActivePathsData @ 0x1400C7BC8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1400C7E10 (RIMFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E23E4 (rimFindMonitorForDigitizerWithQDCData.c)
 */

void __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        __int64 a4)
{
  unsigned int *v8; // rsi
  unsigned int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v9 = 0LL;
  v8 = RIMGetQDCActivePathsData(v9);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( a3 )
    RIMSetDeviceOutputConfig(a1, a2, 1u, (__int64)v8);
  RIMFreeQDCActivePathsData((__int64)v8);
}
