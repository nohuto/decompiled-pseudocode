/*
 * XREFs of ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180156BC4
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x180089D50 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180156CA4 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180158118 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000CDE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

char __fastcall IsShellClient<ShellGesturesClientProxy>(__int64 a1)
{
  int v2; // edi

  v2 = *((_DWORD *)KernelContextProvider::GetInstance() + 34);
  if ( v2 )
    return v2 == (unsigned int)Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(a1 + 32) + 16LL));
  else
    return *(_BYTE *)(a1 + 168);
}
