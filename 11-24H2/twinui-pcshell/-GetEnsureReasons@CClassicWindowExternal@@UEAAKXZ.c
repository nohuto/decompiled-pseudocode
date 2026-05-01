/*
 * XREFs of ?GetEnsureReasons@CClassicWindowExternal@@UEAAKXZ @ 0x18028D7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowExternal::GetEnsureReasons(CClassicWindowExternal *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int v3; // edi

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 216LL))(*((_QWORD *)this + 7));
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v3;
}
