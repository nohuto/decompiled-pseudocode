/*
 * XREFs of ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180092E18
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180090B70 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180090C40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18021E250 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CComposition::RequestOffThreadCleanTree(CComposition *this, void *a2)
{
  if ( *((_BYTE *)this + 6474) )
    return 2147500036LL;
  wil::details::ResetEvent(*((wil::details **)this + 801), a2);
  *((_BYTE *)this + 6416) = 1;
  CComposition::ScheduleCompositionPass(this, 0LL, 0x100000LL);
  return 0LL;
}
