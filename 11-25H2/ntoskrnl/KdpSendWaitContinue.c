/*
 * XREFs of KdpSendWaitContinue @ 0x140B6A32C
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x140B67AAC (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140B67C44 (KdpReportLoadSymbolsStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140B6A1E0 (KdpReportExceptionStateChange.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     KdpGetContextEx @ 0x1405AC2F0 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1405AC3D4 (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x1405AC50C (KdpWriteCustomBreakpoint.c)
 *     KeSwitchFrozenProcessor @ 0x1405BDAC0 (KeSwitchFrozenProcessor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     KdExitDebugger @ 0x140B65008 (KdExitDebugger.c)
 *     KdpCheckLowMemory @ 0x140B670B0 (KdpCheckLowMemory.c)
 *     KdpFillMemory @ 0x140B67108 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x140B67230 (KdpGetBusData.c)
 *     KdpGetContextOrig @ 0x140B67404 (KdpGetContextOrig.c)
 *     KdpGetVersion @ 0x140B67470 (KdpGetVersion.c)
 *     KdpNotSupported @ 0x140B674E4 (KdpNotSupported.c)
 *     KdpQueryMemory @ 0x140B67534 (KdpQueryMemory.c)
 *     KdpReadControlSpace @ 0x140B675AC (KdpReadControlSpace.c)
 *     KdpReadIoSpace @ 0x140B67668 (KdpReadIoSpace.c)
 *     KdpReadIoSpaceExtended @ 0x140B676E4 (KdpReadIoSpaceExtended.c)
 *     KdpReadMachineSpecificRegister @ 0x140B67764 (KdpReadMachineSpecificRegister.c)
 *     KdpReadPhysicalMemory @ 0x140B677D8 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x140B67924 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x140B679E8 (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x140B67D80 (KdpRestoreBreakPointEx.c)
 *     KdpRestoreBreakpoint @ 0x140B67E90 (KdpRestoreBreakpoint.c)
 *     KdpSearchMemory @ 0x140B67EF4 (KdpSearchMemory.c)
 *     KdpSetBusData @ 0x140B68398 (KdpSetBusData.c)
 *     KdpSetContext @ 0x140B68424 (KdpSetContext.c)
 *     KdpWriteBreakPointEx @ 0x140B686D4 (KdpWriteBreakPointEx.c)
 *     KdpWriteBreakpoint @ 0x140B68898 (KdpWriteBreakpoint.c)
 *     KdpWriteControlSpace @ 0x140B6890C (KdpWriteControlSpace.c)
 *     KdpWriteIoSpace @ 0x140B68998 (KdpWriteIoSpace.c)
 *     KdpWriteIoSpaceExtended @ 0x140B68A14 (KdpWriteIoSpaceExtended.c)
 *     KdpWriteMachineSpecificRegister @ 0x140B68A90 (KdpWriteMachineSpecificRegister.c)
 *     KdpWritePhysicalMemory @ 0x140B68B00 (KdpWritePhysicalMemory.c)
 *     KdpWriteVirtualMemory @ 0x140B68BA0 (KdpWriteVirtualMemory.c)
 *     KdpGetStateChange @ 0x140B695E4 (KdpGetStateChange.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v7; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  void *v11[2]; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v14; // [rsp+58h] [rbp-11h] BYREF
  __int128 v15; // [rsp+68h] [rbp-1h]
  __int128 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v12 = 0;
  v17 = 0LL;
  v11[0] = (void *)805306368;
  KdpContextSent = 0;
  v13[0] = 3670016LL;
  v13[1] = &v14;
  v11[1] = &KdpMessageBuffer;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    KdSendPacket(7LL, a2, a3, &KdpContext);
    if ( (_BYTE)KdDebuggerNotPresent )
      return 1LL;
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v13, v11, &v12, &KdpContext);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( (int)v14 )
        {
          case 12592:
            KdpReadVirtualMemory((__int64)&v14, v11, v8);
            continue;
          case 12593:
            KdpWriteVirtualMemory((__int64)&v14);
            continue;
          case 12594:
            KdpGetContextOrig((__int64)&v14, (__int64)v11, (__int64)a4);
            continue;
          case 12595:
            KdpSetContext((__int64)&v14, (unsigned __int16 *)v11, a4);
            continue;
          case 12596:
            KdpWriteBreakpoint((__int64)&v14, 0x140000000LL, v8);
            continue;
          case 12597:
            KdpRestoreBreakpoint((__int64)&v14);
            continue;
          case 12598:
            if ( (int)v15 >= 0 )
              return 1LL;
            goto LABEL_35;
          case 12599:
            KdpReadControlSpace((__int64)&v14, (__int64)v11, v8);
            continue;
          case 12600:
            KdpWriteControlSpace((__int64)&v14, (unsigned __int16 *)v11, v8);
            continue;
          case 12601:
            KdpReadIoSpace((__int64)&v14);
            continue;
          case 12602:
            KdpWriteIoSpace((__int64)&v14);
            continue;
          case 12603:
            KiResumeForReboot = 1;
            KdExitDebugger(0LL);
            guard_dispatch_icall_no_overrides(0LL);
            HalReturnToFirmware(3);
          case 12604:
            if ( (int)v15 < 0 )
              goto LABEL_35;
            KdpGetStateChange((__int64)&v14, (__int64)a4);
            return 1LL;
          case 12605:
            KdpReadPhysicalMemory((__int64)&v14, (__int64)v11, v8, (__int64)&KdpContext);
            continue;
          case 12606:
            KdpWritePhysicalMemory((__int64)&v14);
            continue;
          case 12608:
          case 12609:
          case 12610:
          case 12634:
            continue;
          case 12612:
            KdpReadIoSpaceExtended((__int64)&v14);
            continue;
          case 12613:
            KdpWriteIoSpaceExtended((__int64)&v14);
            continue;
          case 12614:
            KdpGetVersion((__int64)&v14);
            continue;
          case 12615:
            if ( !(unsigned int)KdpWriteBreakPointEx(&v14, v11) )
              continue;
LABEL_35:
            result = 0LL;
            break;
          case 12616:
            KdpRestoreBreakPointEx((__int64)&v14, v11);
            continue;
          case 12617:
            KdExitDebugger(0LL);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 12624:
            return KeSwitchFrozenProcessor(WORD3(v14));
          case 12625:
            KdpNotSupported((__int64)&v14);
            continue;
          case 12626:
            KdpReadMachineSpecificRegister((__int64)&v14);
            continue;
          case 12627:
            KdpWriteMachineSpecificRegister(&v14, 0x140000000LL, v8);
            continue;
          case 12630:
            KdpSearchMemory((__int64)&v14, (__int64)v11);
            continue;
          case 12631:
            KdpGetBusData(&v14, (__int64)v11, v8);
            continue;
          case 12632:
            KdpSetBusData(&v14, (__int64)v11, v8);
            continue;
          case 12633:
            KdpCheckLowMemory((__int64)&v14);
            continue;
          case 12635:
            KdpFillMemory((__int64)&v14, (__int64)v11);
            continue;
          case 12636:
            KdpQueryMemory((__int64)&v14);
            continue;
          case 12639:
            KdpGetContextEx(&v14, (unsigned __int16 *)v11);
            continue;
          case 12640:
            KdpSetContextEx((__int64)&v14, (__int64)v11, (__int64)a4);
            continue;
          case 12641:
            KdpWriteCustomBreakpoint((__int64)&v14, 0x140000000LL, v8, v9);
            continue;
          case 12642:
            KdpReadPhysicalMemoryLong((__int64)&v14, v11, v8);
            continue;
          default:
            LOWORD(v11[0]) = 0;
            DWORD2(v14) = -1073741823;
            KdSendPacket(2LL, v13, v11, &KdpContext);
            continue;
        }
        return result;
      }
    }
  }
}
