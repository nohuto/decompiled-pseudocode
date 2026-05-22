/*
 * XREFs of ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1800799C4
 * Callers:
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180089D50 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180156C0C (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180156CA4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x1801586E8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall KernelContextProvider::IsDesktopAllowed(KernelContextProvider *this, __int64 a2)
{
  __int64 v2; // r8
  char result; // al

  v2 = *((_QWORD *)this + 16);
  result = 0;
  if ( !v2 || v2 == a2 )
    return 1;
  return result;
}
