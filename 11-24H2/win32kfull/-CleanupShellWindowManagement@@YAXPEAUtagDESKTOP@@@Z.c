/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140275990
 * Callers:
 *     CleanupIAMAccess @ 0x140212B70 (CleanupIAMAccess.c)
 * Callees:
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140220244 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z @ 0x14027590C (-CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C09C8 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *a1)
{
  struct tagWND *v2; // r8

  if ( *((_QWORD *)a1 + 36) )
  {
    *((_QWORD *)a1 + 36) = 0LL;
    ShellWindowManagement::SetShellSpecialWindow(a1, 0LL, 0LL);
    HMAssignmentUnlock((char *)a1 + 304);
    CleanupActivationFiltersForDesktop(a1);
    ShellWindowManagement::SetWindow(a1, 0LL, v2);
  }
  if ( *((struct tagDESKTOP **)a1 + 39) != (struct tagDESKTOP *)((char *)a1 + 312) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4464);
}
