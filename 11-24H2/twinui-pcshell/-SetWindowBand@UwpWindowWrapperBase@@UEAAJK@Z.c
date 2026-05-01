/*
 * XREFs of ?SetWindowBand@UwpWindowWrapperBase@@UEAAJK@Z @ 0x1801C4A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UwpWindowWrapperBase::SetWindowBand(UwpWindowWrapperBase *this, unsigned int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  *((_DWORD *)this + 123) = a2;
  v4 = *((int *)this + 74);
  if ( *((_DWORD *)this + 74) )
  {
    if ( a2 )
    {
      v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 160LL))(
                       *((_QWORD *)this + 35),
                       &v7);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, v4, 0LL, a2);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
