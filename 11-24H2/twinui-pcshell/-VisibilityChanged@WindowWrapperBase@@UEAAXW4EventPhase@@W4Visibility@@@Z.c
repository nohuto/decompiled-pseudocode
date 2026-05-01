/*
 * XREFs of ?VisibilityChanged@WindowWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804439C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 264) + 200LL))(*(_QWORD *)(a1 + 264), &v6);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 16) + 200LL))(a1 - 16, a2, a3);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
}
