/*
 * XREFs of ?UnInitialize@CDesktopInputSink@@SAXXZ @ 0x140210128
 * Callers:
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x14015BF68 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 */

void __fastcall CDesktopInputSink::UnInitialize(__int64 a1)
{
  __int64 UserSessionState; // rbx
  char *v2; // rcx
  struct _LUID v3; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 19184) )
  {
    v3 = 0LL;
    CDesktopInputSink::SetDesktopInputSink(0LL, &v3);
    v2 = *(char **)(UserSessionState + 19184);
    if ( v2 )
      GreDeleteFastMutex(v2);
    *(_QWORD *)(UserSessionState + 19184) = 0LL;
  }
}
