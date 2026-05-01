/*
 * XREFs of ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180302358
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x1800358C8 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1803063AC (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v1; // bl

  v1 = 0;
  if ( !*((_DWORD *)this + 51) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 240LL))(*((_QWORD *)this + 15)) != 0;
  return v1;
}
