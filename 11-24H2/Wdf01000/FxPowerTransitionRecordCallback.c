/*
 * XREFs of FxPowerTransitionRecordCallback @ 0x1400AA1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPowerTransitionRecordCallback(
        unsigned int WatchdogTimeout,
        PEPROCESS *BlameProcess,
        _ETHREAD **BlameThread,
        _QWORD *Context)
{
  _ETHREAD *v4; // rcx

  v4 = (_ETHREAD *)Context[4];
  *BlameThread = v4;
  *BlameProcess = IoThreadToProcess(v4);
}
