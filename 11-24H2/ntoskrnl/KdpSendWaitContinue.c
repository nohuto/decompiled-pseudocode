/*
 * XREFs of KdpSendWaitContinue @ 0x140B7A32C
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x140B77AAC (KdpReportCommandStringStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140B77C44 (KdpReportLoadSymbolsStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140B7A1E0 (KdpReportExceptionStateChange.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     KdpGetContextEx @ 0x1405AFC80 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1405AFD64 (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x1405AFE9C (KdpWriteCustomBreakpoint.c)
 *     KeSwitchFrozenProcessor @ 0x1405C1B30 (KeSwitchFrozenProcessor.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdpCheckLowMemory @ 0x140B770B0 (KdpCheckLowMemory.c)
 *     KdpFillMemory @ 0x140B77108 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x140B77230 (KdpGetBusData.c)
 *     KdpGetContextOrig @ 0x140B77404 (KdpGetContextOrig.c)
 *     KdpGetVersion @ 0x140B77470 (KdpGetVersion.c)
 *     KdpNotSupported @ 0x140B774E4 (KdpNotSupported.c)
 *     KdpQueryMemory @ 0x140B77534 (KdpQueryMemory.c)
 *     KdpReadControlSpace @ 0x140B775AC (KdpReadControlSpace.c)
 *     KdpReadIoSpace @ 0x140B77668 (KdpReadIoSpace.c)
 *     KdpReadIoSpaceExtended @ 0x140B776E4 (KdpReadIoSpaceExtended.c)
 *     KdpReadMachineSpecificRegister @ 0x140B77764 (KdpReadMachineSpecificRegister.c)
 *     KdpReadPhysicalMemory @ 0x140B777D8 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x140B77924 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x140B779E8 (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x140B77D80 (KdpRestoreBreakPointEx.c)
 *     KdpRestoreBreakpoint @ 0x140B77E90 (KdpRestoreBreakpoint.c)
 *     KdpSearchMemory @ 0x140B77EF4 (KdpSearchMemory.c)
 *     KdpSetBusData @ 0x140B78398 (KdpSetBusData.c)
 *     KdpSetContext @ 0x140B78424 (KdpSetContext.c)
 *     KdpWriteBreakPointEx @ 0x140B786D4 (KdpWriteBreakPointEx.c)
 *     KdpWriteBreakpoint @ 0x140B78898 (KdpWriteBreakpoint.c)
 *     KdpWriteControlSpace @ 0x140B7890C (KdpWriteControlSpace.c)
 *     KdpWriteIoSpace @ 0x140B78998 (KdpWriteIoSpace.c)
 *     KdpWriteIoSpaceExtended @ 0x140B78A14 (KdpWriteIoSpaceExtended.c)
 *     KdpWriteMachineSpecificRegister @ 0x140B78A90 (KdpWriteMachineSpecificRegister.c)
 *     KdpWritePhysicalMemory @ 0x140B78B00 (KdpWritePhysicalMemory.c)
 *     KdpWriteVirtualMemory @ 0x140B78BA0 (KdpWriteVirtualMemory.c)
 *     KdpGetStateChange @ 0x140B795E4 (KdpGetStateChange.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v7; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  void *v14[2]; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v17; // [rsp+58h] [rbp-11h] BYREF
  __int128 v18; // [rsp+68h] [rbp-1h]
  __int128 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+88h] [rbp+1Fh]

  v15 = 0;
  v20 = 0LL;
  v14[0] = (void *)805306368;
  KdpContextSent = 0;
  v16[0] = 3670016LL;
  v16[1] = &v17;
  v14[1] = &KdpMessageBuffer;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    KdSendPacket(7LL, a2, a3, &KdpContext);
    if ( (_BYTE)KdDebuggerNotPresent )
      return 1LL;
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v16, v14, &v15, &KdpContext);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( (int)v17 )
        {
          case 12592:
            KdpReadVirtualMemory((__int64)&v17, v14, v8);
            continue;
          case 12593:
            KdpWriteVirtualMemory((__int64)&v17);
            continue;
          case 12594:
            KdpGetContextOrig((__int64)&v17, (__int64)v14, (__int64)a4);
            continue;
          case 12595:
            KdpSetContext((__int64)&v17, (unsigned __int16 *)v14, a4);
            continue;
          case 12596:
            KdpWriteBreakpoint((__int64)&v17, 0x140000000LL, v8);
            continue;
          case 12597:
            KdpRestoreBreakpoint((__int64)&v17);
            continue;
          case 12598:
            if ( (int)v18 >= 0 )
              return 1LL;
            goto LABEL_35;
          case 12599:
            KdpReadControlSpace((__int64)&v17, (__int64)v14, v8);
            continue;
          case 12600:
            KdpWriteControlSpace((__int64)&v17, (unsigned __int16 *)v14, v8);
            continue;
          case 12601:
            KdpReadIoSpace((__int64)&v17);
            continue;
          case 12602:
            KdpWriteIoSpace((__int64)&v17);
            continue;
          case 12603:
            KiResumeForReboot = 1;
            KdExitDebugger(0LL, 0x140000000uLL, v8);
            guard_dispatch_icall_no_overrides(0LL, v10, v11, v12);
            HalReturnToFirmware(3);
          case 12604:
            if ( (int)v18 < 0 )
              goto LABEL_35;
            KdpGetStateChange((__int64)&v17, (__int64)a4);
            return 1LL;
          case 12605:
            KdpReadPhysicalMemory((__int64)&v17, (__int64)v14, v8, (__int64)&KdpContext);
            continue;
          case 12606:
            KdpWritePhysicalMemory((__int64)&v17);
            continue;
          case 12608:
          case 12609:
          case 12610:
          case 12634:
            continue;
          case 12612:
            KdpReadIoSpaceExtended((__int64)&v17);
            continue;
          case 12613:
            KdpWriteIoSpaceExtended((__int64)&v17);
            continue;
          case 12614:
            KdpGetVersion((__int64)&v17);
            continue;
          case 12615:
            if ( !(unsigned int)KdpWriteBreakPointEx(&v17, v14) )
              continue;
LABEL_35:
            result = 0LL;
            break;
          case 12616:
            KdpRestoreBreakPointEx((__int64)&v17, v14);
            continue;
          case 12617:
            KdExitDebugger(0LL, 0x140000000uLL, v8);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 12624:
            return KeSwitchFrozenProcessor(WORD3(v17));
          case 12625:
            KdpNotSupported((__int64)&v17);
            continue;
          case 12626:
            KdpReadMachineSpecificRegister((__int64)&v17);
            continue;
          case 12627:
            KdpWriteMachineSpecificRegister(&v17, 0x140000000LL, v8);
            continue;
          case 12630:
            KdpSearchMemory((__int64)&v17, (__int64)v14);
            continue;
          case 12631:
            KdpGetBusData(&v17, (__int64)v14, v8);
            continue;
          case 12632:
            KdpSetBusData(&v17, (__int64)v14, v8);
            continue;
          case 12633:
            KdpCheckLowMemory((__int64)&v17);
            continue;
          case 12635:
            KdpFillMemory((__int64)&v17, (__int64)v14);
            continue;
          case 12636:
            KdpQueryMemory((__int64)&v17);
            continue;
          case 12639:
            KdpGetContextEx(&v17, (unsigned __int16 *)v14);
            continue;
          case 12640:
            KdpSetContextEx((__int64)&v17, (__int64)v14, (__int64)a4);
            continue;
          case 12641:
            KdpWriteCustomBreakpoint((__int64)&v17, 0x140000000LL, v8, v9);
            continue;
          case 12642:
            KdpReadPhysicalMemoryLong((__int64)&v17, v14, v8);
            continue;
          default:
            LOWORD(v14[0]) = 0;
            DWORD2(v17) = -1073741823;
            KdSendPacket(2LL, v16, v14, &KdpContext);
            continue;
        }
        return result;
      }
    }
  }
}
