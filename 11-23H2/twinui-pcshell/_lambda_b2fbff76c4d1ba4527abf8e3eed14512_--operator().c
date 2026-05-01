/*
 * XREFs of _lambda_b2fbff76c4d1ba4527abf8e3eed14512_::operator() @ 0x1804E7AE8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b2fbff76c4d1ba4527abf8e3eed14512___::Run @ 0x1804EBE40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_b2fbff76c4d1ba4527abf8e3eed14512___--.c)
 * Callees:
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1804EAFA8 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 */

__int64 __fastcall lambda_b2fbff76c4d1ba4527abf8e3eed14512_::operator()(_QWORD *a1)
{
  WindowWrapperBase::PushBoundsToWindow(*a1, 1LL);
  return 0LL;
}
