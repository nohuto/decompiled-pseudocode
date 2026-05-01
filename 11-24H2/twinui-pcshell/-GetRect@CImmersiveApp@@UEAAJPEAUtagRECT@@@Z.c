/*
 * XREFs of ?GetRect@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x180302ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::GetRect(CImmersiveApp *this, struct tagRECT *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)this + 3) + 336LL))(
                    (char *)this + 24,
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
