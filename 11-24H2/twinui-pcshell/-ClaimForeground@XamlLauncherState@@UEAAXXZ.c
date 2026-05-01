/*
 * XREFs of ?ClaimForeground@XamlLauncherState@@UEAAXXZ @ 0x180227520
 * Callers:
 *     ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180464FD0 (-DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ??$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4InternalState@XamlLauncherState@@@Z @ 0x1802CB860 (--$ClaimForeground@AEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEAW4Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncherState::ClaimForeground(XamlLauncherState *this)
{
  _DWORD *v1; // rbx
  void (*v3)(void); // rax

  v1 = (_DWORD *)((char *)this + 40);
  StartWindowTelemetry::ClaimForeground<enum XamlLauncherState::InternalState &>((char *)this + 40);
  if ( *v1 == 5 )
  {
    v3 = *(void (**)(void))(**((_QWORD **)this + 8) + 120LL);
  }
  else
  {
    if ( *v1 != 16 )
      return;
    v3 = *(void (**)(void))(**((_QWORD **)this + 7) + 144LL);
  }
  v3();
}
