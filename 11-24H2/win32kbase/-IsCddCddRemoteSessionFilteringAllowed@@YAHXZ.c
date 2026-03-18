/*
 * XREFs of ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x140101DE0
 * Callers:
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x140015580 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     EngQueryW32kCddInterface @ 0x14004DE90 (EngQueryW32kCddInterface.c)
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCddCddRemoteSessionFilteringAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx

  v1 = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  if ( !*(_DWORD *)(v2 + 1048) )
    return *(_DWORD *)(W32GetUserSessionState(v2) + 68960) == 0;
  return v1;
}
