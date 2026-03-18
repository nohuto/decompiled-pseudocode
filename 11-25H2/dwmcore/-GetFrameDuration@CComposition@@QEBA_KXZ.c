/*
 * XREFs of ?GetFrameDuration@CComposition@@QEBA_KXZ @ 0x180032100
 * Callers:
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180031B80 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CComposition::GetFrameDuration(CComposition *this)
{
  return *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39)) + 8);
}
