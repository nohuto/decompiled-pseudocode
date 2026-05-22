/*
 * XREFs of ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x180079664
 * Callers:
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180158DDC (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158E74 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015A0D4 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
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
