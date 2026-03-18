/*
 * XREFs of ApiSetEditionUpdateRawMouseMode @ 0x140193728
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionUpdateRawMouseMode(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6904LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 6912LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(a1);
    }
  }
  return result;
}
