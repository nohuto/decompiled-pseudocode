/*
 * XREFs of _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x140109934
 * Callers:
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1401098F4 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ResolveApplicationFrameChildThread(__int64 a1)
{
  __int64 v2; // rax

  if ( a1 && (*(_DWORD *)(a1 + 1360) & 0x40000) != 0 && (v2 = *(_QWORD *)(a1 + 1592)) != 0 )
    return *(_QWORD *)(v2 + 16);
  else
    return a1;
}
