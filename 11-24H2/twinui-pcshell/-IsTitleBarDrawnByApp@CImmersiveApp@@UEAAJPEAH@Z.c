/*
 * XREFs of ?IsTitleBarDrawnByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x18022A1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::IsTitleBarDrawnByApp(CImmersiveApp *this, int *a2)
{
  unsigned __int8 v4; // al
  RTL_SRWLOCK *v5; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 43) + 280LL))(*((_QWORD *)this + 43));
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = v4;
  ReleaseSRWLockExclusive(v5);
  return 0LL;
}
