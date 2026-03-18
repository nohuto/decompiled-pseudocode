/*
 * XREFs of ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C007A890
 * Callers:
 *     xxxPlayEventSound @ 0x1C0085A20 (xxxPlayEventSound.c)
 *     PostPlaySoundMessage @ 0x1C00947A0 (PostPlaySoundMessage.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 *     xxxMessageBeep @ 0x1C01F64D8 (xxxMessageBeep.c)
 * Callees:
 *     PlaySoundPostMessage @ 0x1C03993D0 (PlaySoundPostMessage.c)
 */

__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  char *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = (char *)(this + 1);
  v3 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  if ( *this )
  {
    SGDGetUserSessionState(v4);
    v3 = PlaySoundPostMessage(*this);
  }
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1, 0LL, v5);
    KeLeaveCriticalRegion();
  }
  return v3;
}
