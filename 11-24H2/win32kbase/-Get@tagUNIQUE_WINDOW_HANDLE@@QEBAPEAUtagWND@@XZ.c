/*
 * XREFs of ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x1401A7390
 * Callers:
 *     <none>
 * Callees:
 *     _HMPkheFromObjectWorker @ 0x1400E1208 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ReValidateHwndStrict @ 0x1401A92E0 (ReValidateHwndStrict.c)
 */

struct tagWND *__fastcall tagUNIQUE_WINDOW_HANDLE::Get(tagUNIQUE_WINDOW_HANDLE *this)
{
  int *v2; // rax
  int *v3; // rbx

  if ( *(_QWORD *)this )
  {
    v2 = (int *)ReValidateHwndStrict();
    v3 = v2;
    if ( v2 )
    {
      if ( *(_QWORD *)(HMPkheFromObjectWorker(v2) + 32) == *((_QWORD *)this + 1) )
        return (struct tagWND *)v3;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1302);
    }
  }
  return 0LL;
}
