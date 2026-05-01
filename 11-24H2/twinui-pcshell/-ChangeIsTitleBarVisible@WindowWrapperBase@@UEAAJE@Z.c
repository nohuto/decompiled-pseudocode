/*
 * XREFs of ?ChangeIsTitleBarVisible@WindowWrapperBase@@UEAAJE@Z @ 0x18043FA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall WindowWrapperBase::ChangeIsTitleBarVisible(WindowWrapperBase *this, char a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 34) + 200LL))(*((_QWORD *)this + 34), &v5);
  *((_BYTE *)this + 454) = a2 != 0;
  *((_BYTE *)this + 453) = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
