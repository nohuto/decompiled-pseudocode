/*
 * XREFs of ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x14000CC50
 * Callers:
 *     <none>
 * Callees:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000E4F8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HotKeyCallback::OnHotKeyDetected(HotKeyCallback *this, int a2, int a3, int a4)
{
  if ( !a2 && a3 == 14 && a4 == 66 )
    BlackScreenDiagnostics::RunDiagnosticsFromHotkey(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  return 0LL;
}
