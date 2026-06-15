/*
 * XREFs of ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18000A538
 * Callers:
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BDD8 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800625BC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     wil::details::lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___::_lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___ @ 0x1800A1858 (wil--details--lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___--_lambda_call__lambda_3cfe.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800C5C9C (--1CAudioSessionManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(
        CAudioSessionManager *this,
        struct CAudioSession *a2)
{
  _QWORD *i; // rbx

  for ( i = (_QWORD *)*((_QWORD *)this + 36); i; i = (_QWORD *)*i )
    (*(void (__fastcall **)(struct CAudioSession *, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, i[1]);
}
