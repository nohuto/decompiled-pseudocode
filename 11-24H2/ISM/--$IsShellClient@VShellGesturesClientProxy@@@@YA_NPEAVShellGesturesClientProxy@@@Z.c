/*
 * XREFs of ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158D94
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800886F0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158E74 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180159C88 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000D544 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
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
