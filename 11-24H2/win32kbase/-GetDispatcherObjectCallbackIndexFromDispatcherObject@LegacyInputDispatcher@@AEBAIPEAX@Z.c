/*
 * XREFs of ?GetDispatcherObjectCallbackIndexFromDispatcherObject@LegacyInputDispatcher@@AEBAIPEAX@Z @ 0x14020C4F4
 * Callers:
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x14020D9B0 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::GetDispatcherObjectCallbackIndexFromDispatcherObject(
        LegacyInputDispatcher *this,
        void *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d

  v2 = *((_DWORD *)this + 10);
  v3 = *((_DWORD *)this + 13);
  if ( v2 >= v3 )
  {
LABEL_4:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3108);
    return 0LL;
  }
  else
  {
    while ( *(void **)(*((_QWORD *)this + 1) + 8LL * v2) != a2 )
    {
      if ( ++v2 >= v3 )
        goto LABEL_4;
    }
    return v2;
  }
}
