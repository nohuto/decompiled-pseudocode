/*
 * XREFs of wil::details::lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___::_lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___ @ 0x1800D3628
 * Callers:
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$10 @ 0x18016533E (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$10.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18007230C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___::_lambda_call__lambda_92eec2372635fc8216ce32d67db4c3b4___(
        __int64 **a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = **a1;
    if ( v2 )
      CAudioSessionManager::Disconnect(*(struct _RTL_CRITICAL_SECTION **)(v2 + 96), 0, 1);
    v3 = a1[1];
    if ( *v3 )
      CAudioSessionManager::Disconnect(*(struct _RTL_CRITICAL_SECTION **)(*v3 + 96), 0, 1);
  }
}
