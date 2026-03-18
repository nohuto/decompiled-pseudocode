/*
 * XREFs of ??B?$SGINPUTTRACINGgRimLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x1400E8908
 * Callers:
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGINPUTTRACINGgRimLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 19392);
}
