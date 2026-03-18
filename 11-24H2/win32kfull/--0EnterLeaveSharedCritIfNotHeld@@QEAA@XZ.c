/*
 * XREFs of ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x1402130E8
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14026F7B8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

EnterLeaveSharedCritIfNotHeld *__fastcall EnterLeaveSharedCritIfNotHeld::EnterLeaveSharedCritIfNotHeld(
        EnterLeaveSharedCritIfNotHeld *this)
{
  int v2; // eax

  v2 = GET_USERCRIT_DISPOSITION();
  *(_BYTE *)this = v2 == 0;
  if ( !v2 )
    EnterSharedCrit(0LL, 1LL);
  return this;
}
