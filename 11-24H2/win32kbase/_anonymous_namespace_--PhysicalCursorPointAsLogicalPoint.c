/*
 * XREFs of _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400951D0
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x140060FA8 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x14009464C (-GetPendingMouseMovePoint@QHelper@@YA-AUtagLOGICALPOINT@@AEBVCInputDest@@@Z.c)
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EC48C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     ClearLogicalCursorPos @ 0x1402125E0 (ClearLogicalCursorPos.c)
 *     UpdateSavedPoint @ 0x140213840 (UpdateSavedPoint.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(_DWORD *a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  *a1 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 4960LL);
  UserSessionState = W32GetUserSessionState(v2);
  a1[2] = 18;
  a1[1] = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4964LL);
  return a1;
}
