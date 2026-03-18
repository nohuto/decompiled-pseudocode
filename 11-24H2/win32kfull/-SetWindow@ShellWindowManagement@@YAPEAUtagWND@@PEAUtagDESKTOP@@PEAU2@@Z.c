/*
 * XREFs of ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140220244
 * Callers:
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140275990 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C0A44 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall ShellWindowManagement::SetWindow(
        ShellWindowManagement *this,
        struct tagDESKTOP *a2,
        struct tagWND *a3)
{
  __int64 v4; // rbx
  char *v5; // rcx
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = (char *)this + 328;
  if ( a2 )
  {
    v8[0] = v5;
    v8[1] = a2;
    HMAssignmentLock(v8, 0LL);
  }
  else
  {
    v6 = HMAssignmentUnlock(v5);
    *((_DWORD *)this + 84) = 0;
    return (struct tagWND *)v6;
  }
  return (struct tagWND *)v4;
}
