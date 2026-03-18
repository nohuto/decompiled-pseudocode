/*
 * XREFs of NtCompositionInputThread @ 0x1C0231B40
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C0230C84 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 */

__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  CInputManager *v9; // rcx

  if ( !qword_1C0296120 || (int)qword_1C0296120() < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm(v7, v6, v8) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v9, a1, a2, a3);
  return 3221225473LL;
}
