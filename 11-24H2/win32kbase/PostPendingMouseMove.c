/*
 * XREFs of PostPendingMouseMove @ 0x1400EC440
 * Callers:
 *     ?CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14021C07C (-CoalesceInputSourceMouseMoves@CMouseProcessor@@AEAAXPEAUtagQ@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EC48C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  __int64 v2; // rcx
  CMouseProcessor *v3; // rax

  v2 = *(_QWORD *)(W32GetUserSessionState(a1) + 3144);
  if ( v2 )
  {
    v3 = (CMouseProcessor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    if ( v3 )
      CMouseProcessor::PostPendingMouseMove(v3, a1);
  }
}
