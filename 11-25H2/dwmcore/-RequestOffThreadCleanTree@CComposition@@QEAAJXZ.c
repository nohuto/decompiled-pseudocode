/*
 * XREFs of ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180137A38
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180135730 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180135800 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180229A50 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall CComposition::RequestOffThreadCleanTree(CComposition *this, void *a2)
{
  if ( *((_BYTE *)this + 6497) )
    return 2147500036LL;
  wil::details::ResetEvent(*((wil::details **)this + 804), a2);
  *((_BYTE *)this + 6440) = 1;
  CComposition::ScheduleCompositionPass((__int64)this, 0, 0x100000u);
  return 0LL;
}
