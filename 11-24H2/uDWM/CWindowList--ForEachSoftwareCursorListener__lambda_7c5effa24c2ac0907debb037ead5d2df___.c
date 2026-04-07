/*
 * XREFs of CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x18008A048
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001D19C (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 664); i = (unsigned int)(i + 1) )
  {
    v5 = *(void (__fastcall ****)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 640) + 8 * i);
    (**v5)(v5, *(_QWORD *)(**(_QWORD **)a2 + 440LL));
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
