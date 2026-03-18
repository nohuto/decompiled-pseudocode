/*
 * XREFs of ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x14010982C
 * Callers:
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401097F8 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021BE4C (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1401098D4 (PtiKbdFromQ.c)
 */

struct tagTHREADINFO *__fastcall CMouseProcessor::GetMouseWheelForegroundThread(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rax
  struct tagTHREADINFO *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 18944) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v1);
  result = (struct tagTHREADINFO *)PtiKbdFromQ(*(_QWORD *)(UserSessionState + 18944));
  if ( !result )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(v4) + 18944);
    if ( *(_QWORD *)(v5 + 120) )
    {
      return *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 18944) + 120LL) + 16LL);
    }
    else
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5) + 18944);
      v7 = *(_QWORD *)(v6 + 112);
      if ( v7 )
        return *(struct tagTHREADINFO **)(v7 + 16);
      else
        return *(struct tagTHREADINFO **)(v6 + 96);
    }
  }
  return result;
}
