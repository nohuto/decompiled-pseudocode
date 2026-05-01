/*
 * XREFs of ?SetForegroundWindow@UwpWindowWrapperBase@@UEAAJXZ @ 0x1801DCC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::SetForegroundWindow(UwpWindowWrapperBase *this)
{
  HWND v2; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 216LL))(*((_QWORD *)this + 35), &SRWLock);
  v2 = (HWND)*((int *)this + 74);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  if ( SetForegroundWindow(v2) )
    return 0LL;
  if ( v2 )
    return IsWindow(v2) ? -2147467259 : -2147023496;
  return 2147500035LL;
}
