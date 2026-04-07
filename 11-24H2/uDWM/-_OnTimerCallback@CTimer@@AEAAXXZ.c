/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x180075EA4
 * Callers:
 *     ?Start@CTimer@@QEAAJK@Z @ 0x180075CD4 (-Start@CTimer@@QEAAJK@Z.c)
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x180075E40 (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  if ( *((_QWORD *)this + 8) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    (***((void (__fastcall ****)(_QWORD))this + 8))(*((_QWORD *)this + 8));
    EnterCriticalSection(v2);
  }
}
