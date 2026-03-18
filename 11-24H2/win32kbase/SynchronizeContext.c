/*
 * XREFs of SynchronizeContext @ 0x140142650
 * Callers:
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     _lambda_7336048acd17859272a6f98208d72592_::_lambda_invoker_cdecl_ @ 0x140212070 (_lambda_7336048acd17859272a6f98208d72592_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SynchronizeContext(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19200) )
  {
    v2 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v1) + 19200) + 8LL);
    v1 = *(_QWORD *)(W32GetUserSessionState(v2) + 19200);
    if ( *(_QWORD *)(*(_QWORD *)(v1 + 8) + 176LL) )
      v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v1) + 19200) + 8LL) + 176LL);
  }
  UserSessionState = W32GetUserSessionState(v1);
  return InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 20);
}
