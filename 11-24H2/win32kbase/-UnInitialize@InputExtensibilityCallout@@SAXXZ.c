/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400D082C
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020B3FC (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x14019FAB0 (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 */

void __fastcall InputExtensibilityCallout::UnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  __int64 v3; // rcx
  char *v4; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 16408) )
  {
    UserSessionState = W32GetUserSessionState(v1);
    InputExtensibilityCallout::CloseCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16408));
    v4 = *(char **)(W32GetUserSessionState(v3) + 16408);
    if ( v4 )
      GreDeleteFastMutex(v4);
    *(_QWORD *)(W32GetUserSessionState(v4) + 16408) = 0LL;
  }
}
