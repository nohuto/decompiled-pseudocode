/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___ @ 0x1800ED1E4
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FC80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_767b0072026fef5317467f2afcf76d8a___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 640) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 8LL))(v5, *(_QWORD *)(**(_QWORD **)a2 + 440LL));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
