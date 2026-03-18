/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4
 * Callers:
 *     PostPlaySoundMessage @ 0x1400A4CA0 (PostPlaySoundMessage.c)
 *     ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400A4F9C (-xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z.c)
 *     xxxMessageBeep @ 0x140103034 (xxxMessageBeep.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     PlaySoundPostMessage @ 0x1403D0E00 (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  unsigned int v2; // edi

  v2 = 0;
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(this + 1), 0);
  if ( *this )
  {
    W32GetCurrentWin32kSessionId();
    v2 = PlaySoundPostMessage(*this);
  }
  ExReleasePushLockSharedEx(this + 1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
