/*
 * XREFs of ?NlsTestKeyStateToggle@@YAHE@Z @ 0x140214F34
 * Callers:
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x14014BE20 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEBE@Z @ 0x14019DAA4 (-NlsGetCurrentInputMode@@YAEPEBE@Z.c)
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1402146E0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214910 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214950 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214A10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214B70 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214BC0 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214C20 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x140214D20 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsTestKeyStateToggle(unsigned __int8 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // eax

  v1 = (unsigned __int64)a1 >> 2;
  v2 = 2 * (a1 & 3u) + 1;
  v3 = 1 << v2;
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 18944) )
    v5 = *(unsigned __int8 *)(v1 + *(_QWORD *)(W32GetUserSessionState(v4) + 18944) + 280);
  else
    v5 = *(unsigned __int8 *)(v1 + W32GetUserSessionState(v4) + 14336);
  return v3 & v5;
}
