/*
 * XREFs of PopShutdownSystem @ 0x140B60044
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404BB078 (DbgUnLoadImageSymbols.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405823F0 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14058D944 (VslNotifyShutdown.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B5B9D4 (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x140B5FFC0 (PopNotifyShutdownListener.c)
 *     PopInvokeSystemStateHandler @ 0x140B6552C (PopInvokeSystemStateHandler.c)
 */

void __fastcall __noreturn PopShutdownSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx

  v4 = a1;
  PopNotifyShutdownListener(a1, a2, a3, a4);
  VslNotifyShutdown(0);
  if ( HvlHypervisorConnected )
    HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  if ( (PopSimulate & 0x800) == 0 || ((v4 - 4) & 0xFFFFFFFD) != 0 )
  {
    v5 = v4 - 4;
    if ( !v5 )
    {
      if ( PopShutdownPowerOffPolicy )
        qword_140F0B908 = (__int64)PopShutdownHandler;
      goto LABEL_12;
    }
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
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
