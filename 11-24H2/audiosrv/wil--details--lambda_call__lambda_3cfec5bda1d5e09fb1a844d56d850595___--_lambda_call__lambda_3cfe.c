/*
 * XREFs of wil::details::lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___::_lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___ @ 0x1800A1858
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$10 @ 0x180168BA0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$10.c)
 * Callees:
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18000A538 (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 */

void __fastcall wil::details::lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___::_lambda_call__lambda_3cfec5bda1d5e09fb1a844d56d850595___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(
      *(CAudioSessionManager **)a1,
      **(struct CAudioSession ***)(a1 + 8));
  }
}
