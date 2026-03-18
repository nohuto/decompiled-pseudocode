/*
 * XREFs of CiSchedulerInitialize @ 0x1C000FDC0
 * Callers:
 *     CsInitialize @ 0x1C000F040 (CsInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0004620 (WPP_SF_.c)
 */

__int64 CiSchedulerInitialize()
{
  NTSTATUS v1; // ebx
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  void *ThreadHandle; // [rsp+70h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  ThreadHandle = 0LL;
  HIDWORD(WPP_MAIN_CB.SecurityDescriptor) = *(&WPP_MAIN_CB.ActiveThreadCount + 1) * CiSystemResponsiveness / 0x64;
  LODWORD(WPP_MAIN_CB.SecurityDescriptor) = *(&WPP_MAIN_CB.ActiveThreadCount + 1)
                                          - *(&WPP_MAIN_CB.ActiveThreadCount + 1) * CiSystemResponsiveness / 0x64;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ExAllocateTimer(0LL, 0LL, 12LL);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = -1LL;
    CiProcessorIdleHistoryBits = 0;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v1 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           0LL,
           0LL,
           (PKSTART_ROUTINE)CiSchedulerThreadFunction,
           &Event);
    if ( v1 < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
      return (unsigned int)v1;
    }
    else
    {
      ZwClose(ThreadHandle);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      return (unsigned int)v1;
    }
  }
  else
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
    return 3221225495LL;
  }
}
