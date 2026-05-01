/*
 * XREFs of ?VisibilityChanged@UwpWindowWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1801BA220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 264) + 208LL))(*(_QWORD *)(a1 + 264), &SRWLock);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 16) + 216LL))(a1 - 16, a2, a3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
