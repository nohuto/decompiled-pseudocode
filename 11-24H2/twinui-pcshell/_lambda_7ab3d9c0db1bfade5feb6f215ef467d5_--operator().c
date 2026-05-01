/*
 * XREFs of _lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator() @ 0x18043DD30
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___::Run @ 0x180442130 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___--.c)
 * Callees:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1804412CC (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 __fastcall lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator()(_QWORD *a1)
{
  WindowWrapperBase::PushBoundsToWindow(*a1, 1LL);
  return 0LL;
}
