/*
 * XREFs of ApiSetEditionUpdateRawMouseMode @ 0x1C0050440
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0056FE0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     zzzDestroyQueue @ 0x1C012DDA0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionUpdateRawMouseMode(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296BF0;
  if ( qword_1C0296BF0 )
  {
    result = (__int64 (*)(void))qword_1C0296BF0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296BF8;
      if ( qword_1C0296BF8 )
        return (__int64 (*)(void))qword_1C0296BF8(a1);
    }
  }
  return result;
}
