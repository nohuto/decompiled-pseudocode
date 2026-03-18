/*
 * XREFs of ??B?$SGTRACINGgBaseLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x1400E948C
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGTRACINGgBaseLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *(__int64 a1)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 69400);
}
