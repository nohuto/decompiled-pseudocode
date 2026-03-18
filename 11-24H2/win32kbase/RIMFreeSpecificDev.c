/*
 * XREFs of RIMFreeSpecificDev @ 0x1401D1E88
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     RIMRemoveDevOfInputType @ 0x1401D24A8 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x14012EC64 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimFreeSpecificDevFinal @ 0x14017A888 (rimFreeSpecificDevFinal.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_UNKNOWN **__fastcall RIMFreeSpecificDev(struct RawInputManagerObject *a1, __int64 a2)
{
  if ( !*(_QWORD *)(a2 + 320) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 860);
  if ( a1 != *(struct RawInputManagerObject **)(a2 + 320) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 861);
  if ( !*((_QWORD *)a1 + 104) || *((_DWORD *)a1 + 264) || (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) & 0xC) == 0 )
      return rimQueueRimDevChangeAsyncWorkItem(a1, a2, 4);
    rimDoRimDevChange((__int64)a1, a2, 4u);
  }
  return (_UNKNOWN **)rimFreeSpecificDevFinal((__int64)a1, a2);
}
