/*
 * XREFs of PopShutdownSystem @ 0x140B4FF14
 * Callers:
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404BBC28 (DbgUnLoadImageSymbols.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057EC40 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14058A224 (VslNotifyShutdown.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B4BA64 (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x140B4FE94 (PopNotifyShutdownListener.c)
 *     PopInvokeSystemStateHandler @ 0x140B5541C (PopInvokeSystemStateHandler.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  if ( HvlHypervisorConnected )
    HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  if ( (PopSimulate & 0x800) == 0 || ((a1 - 4) & 0xFFFFFFFD) != 0 )
  {
    v2 = a1 - 4;
    if ( !v2 )
    {
      if ( PopShutdownPowerOffPolicy )
        qword_140F0B5A8 = (__int64)PopShutdownHandler;
      goto LABEL_12;
    }
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
LABEL_13:
        HalReturnToFirmware(3);
LABEL_12:
      PopInvokeSystemStateHandler(4LL);
      HalReturnToFirmware(1);
    }
  }
  PopInvokeSystemStateHandler(5LL);
  goto LABEL_13;
}
