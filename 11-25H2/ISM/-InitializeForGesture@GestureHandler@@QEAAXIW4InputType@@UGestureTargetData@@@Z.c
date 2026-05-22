/*
 * XREFs of ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x1801449E0
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025980 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x180157EC0 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x1801586E8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CASGestureState@GestureHandler@@AEAA?AW4GestureOperationState@@W42@@Z @ 0x180095748 (-CASGestureState@GestureHandler@@AEAA-AW4GestureOperationState@@W42@@Z.c)
 */

__int64 __fastcall GestureHandler::InitializeForGesture(__int64 a1, int a2)
{
  __int64 result; // rax
  _OWORD *v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = GestureHandler::CASGestureState(a1);
  if ( (_DWORD)result != 4 )
  {
    if ( (_DWORD)result == 2 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x41,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)0x8000FFFFLL,
        v7);
    *(_OWORD *)(v5 + 184) = *v4;
    *(_DWORD *)(v5 + 136) = a2;
    *(_DWORD *)(v5 + 140) = v6;
  }
  return result;
}
