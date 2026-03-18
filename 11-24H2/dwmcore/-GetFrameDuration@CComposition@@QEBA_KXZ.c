/*
 * XREFs of ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x1800F3AC0
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x18009B218 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x1800F36C0 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CComposition::GetFrameDuration(CComposition *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39)) + 8);
}
