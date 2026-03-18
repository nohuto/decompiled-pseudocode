/*
 * XREFs of ?NlsClearKeyStateToggle@@YAXE@Z @ 0x14019CC90
 * Callers:
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14014BE20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1402146E0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214800 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214A10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214C20 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214E00 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NlsClearKeyStateToggle(__int64 a1)
{
  char v1; // di
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 UserSessionState; // rax

  v1 = a1;
  v3 = (unsigned __int64)(unsigned __int8)a1 >> 2;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 18944) )
  {
    v4 = *(_QWORD *)(W32GetUserSessionState(v2) + 18944);
    v2 = *(unsigned __int8 *)(v4 + v3 + 280);
    LODWORD(v2) = v2 & ~(1 << (2 * (v1 & 3) + 1));
    *(_BYTE *)(v4 + v3 + 280) = v2;
  }
  UserSessionState = W32GetUserSessionState(v2);
  *(_BYTE *)(UserSessionState + v3 + 14336) &= ~(1 << (2 * (v1 & 3) + 1));
}
