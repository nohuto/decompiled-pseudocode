/*
 * XREFs of NlsKbdSendIMEProc @ 0x140214FB8
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1402146E0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214910 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214A10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214B70 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214C20 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotification @ 0x1401298F0 (NlsKbdSendIMENotification.c)
 *     ApiSetEditionGetAppImeCompatFlags @ 0x140221C50 (ApiSetEditionGetAppImeCompatFlags.c)
 */

char __fastcall NlsKbdSendIMEProc(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 18944) )
  {
    UserSessionState = W32GetUserSessionState(v5);
    if ( *(_QWORD *)(*(_QWORD *)(UserSessionState + 18944) + 104LL) )
    {
      v7 = W32GetUserSessionState(v6);
      UserSessionState = ApiSetEditionGetAppImeCompatFlags(*(_QWORD *)(*(_QWORD *)(v7 + 18944) + 104LL));
      if ( (UserSessionState & 0x800000) == 0 )
        LOBYTE(UserSessionState) = NlsKbdSendIMENotification(v3, a2);
    }
  }
  return UserSessionState;
}
