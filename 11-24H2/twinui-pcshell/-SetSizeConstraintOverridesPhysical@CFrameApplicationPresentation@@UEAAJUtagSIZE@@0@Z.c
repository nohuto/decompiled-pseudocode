/*
 * XREFs of ?SetSizeConstraintOverridesPhysical@CFrameApplicationPresentation@@UEAAJUtagSIZE@@0@Z @ 0x18030AD30
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___ @ 0x1803090B8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSizeConstraintOverridesPhysical(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2,
        struct tagSIZE a3)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  struct tagSIZE v5; // [rsp+30h] [rbp-18h]

  *((struct tagSIZE *)&v4 + 1) = a2;
  *(_QWORD *)&v4 = this;
  v5 = a3;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_963b63a3e68d50a8e9a7cd84e91426d9___(this, &v4);
}
