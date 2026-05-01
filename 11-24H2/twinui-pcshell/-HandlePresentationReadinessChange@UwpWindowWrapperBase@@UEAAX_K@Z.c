/*
 * XREFs of ?HandlePresentationReadinessChange@UwpWindowWrapperBase@@UEAAX_K@Z @ 0x1801B5EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z @ 0x1801B5F44 (-HandleShellHook@UwpWindowReadyState@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::HandlePresentationReadinessChange(
        UwpWindowWrapperBase *this,
        unsigned __int64 a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 33) + 208LL))(*((_QWORD *)this + 33), &SRWLock);
  UwpWindowReadyState::HandleShellHook((UwpWindowWrapperBase *)((char *)this + 344), a2);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
