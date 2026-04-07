/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18000A07C
 * Callers:
 *     ?_OnTimerTick@CTimer@@AEAAXXZ @ 0x18000A02C (-_OnTimerTick@CTimer@@AEAAXXZ.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x180011A38 (-Start@CTimer@@QEAAJK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
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
