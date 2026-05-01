/*
 * XREFs of ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180035880
 * Callers:
 *     <none>
 * Callees:
 *     ?OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z @ 0x1800358C8 (-OnViewReadinessChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUHWND__@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::OnViewReadinessChanged(CImmersiveApp *this, struct ITaskWindow *a2, bool a3)
{
  HWND v5; // rax

  v5 = (HWND)(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  CImmersiveApp::CImmersiveWindowCollection::OnViewReadinessChanged((CImmersiveApp *)((char *)this + 176), v5, a3);
  return 0LL;
}
