/*
 * XREFs of PopShutdownSystem @ 0x140B62104
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 * Callees:
 *     DbgUnLoadImageSymbols @ 0x1404B5F18 (DbgUnLoadImageSymbols.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057F770 (HvlConfigureMemoryZeroingOnReset.c)
 *     VslNotifyShutdown @ 0x14058AC34 (VslNotifyShutdown.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B5DA44 (PopSetMemoryOverwriteRequestAction.c)
 *     PopNotifyShutdownListener @ 0x140B6208C (PopNotifyShutdownListener.c)
 *     PopInvokeSystemStateHandler @ 0x140B6766C (PopInvokeSystemStateHandler.c)
 */

void __fastcall __noreturn PopShutdownSystem(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // ebx
  int v4; // ebx

  v2 = a1;
  PopNotifyShutdownListener(a1, a2);
  VslNotifyShutdown(0);
  if ( HvlHypervisorConnected )
    HvlConfigureMemoryZeroingOnReset(0);
  PopSetMemoryOverwriteRequestAction();
  DbgUnLoadImageSymbols(0LL, -1LL, 0LL);
  if ( (PopSimulate & 0x800) == 0 || ((v2 - 4) & 0xFFFFFFFD) != 0 )
  {
    v3 = v2 - 4;
    if ( !v3 )
    {
      if ( PopShutdownPowerOffPolicy )
        qword_140F0B5E8 = (__int64)PopShutdownHandler;
      goto LABEL_12;
    }
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
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
