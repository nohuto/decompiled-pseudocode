/*
 * XREFs of ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x140198DBC
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1401AF390 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x140398770 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodTerminateIndirectOutput(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(_QWORD); // rax

  if ( !*((_QWORD *)this + 58) )
    return 3221225485LL;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 8845;
    return 3221225485LL;
  }
  v3 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v3 + 444) & 0x100) == 0 )
  {
    WdLogSingleEntry1(3LL, v3);
    WdLogGlobalForLineNumber = 8851;
    return 3221225485LL;
  }
  v4 = *(unsigned int (__fastcall **)(_QWORD))(v3 + 2360);
  if ( !v4 )
    return 3221225659LL;
  if ( v4(*(_QWORD *)(v3 + 2296)) == -1073741637 )
    DxgkMiracastStopAllMiracastSessions(0LL, 0LL, 144LL);
  return 0LL;
}
