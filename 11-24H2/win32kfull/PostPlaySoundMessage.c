/*
 * XREFs of PostPlaySoundMessage @ 0x1400A4CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400A38B4 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70800));
}
