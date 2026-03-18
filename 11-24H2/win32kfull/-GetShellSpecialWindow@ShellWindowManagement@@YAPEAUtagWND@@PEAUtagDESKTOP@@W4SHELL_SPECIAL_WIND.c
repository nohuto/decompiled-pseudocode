/*
 * XREFs of ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C00B4
 * Callers:
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1402329E4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _lambda_4564511ce45ced87c482b72ba2c44d94_::operator() @ 0x140275328 (_lambda_4564511ce45ced87c482b72ba2c44d94_--operator().c)
 *     ?UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z @ 0x1402889B4 (-UpdateWindowKeyWindowCloak@@YA_NPEAUtagDESKTOP@@W4CloakingOperation@@@Z.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall ShellWindowManagement::GetShellSpecialWindow(__int64 a1, int a2)
{
  if ( !a2 )
    return *(struct tagWND **)(a1 + 296);
  if ( a2 == 1 )
    return tagUNIQUE_WINDOW_HANDLE::Get((tagUNIQUE_WINDOW_HANDLE *)(a1 + 344));
  return 0LL;
}
