/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x180108394
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18004E4AC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 672); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 648) + 8 * i);
    (**v5)(v5, *(_QWORD *)(**(_QWORD **)a2 + 440LL));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
