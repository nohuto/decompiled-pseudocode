/*
 * XREFs of PnprQuiesceWorker @ 0x140B570F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PnprCompleteWake @ 0x1405A46DC (PnprCompleteWake.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnprLockPagesForReplace @ 0x14072DE30 (PnprLockPagesForReplace.c)
 *     PnprQuiesceDevices @ 0x140B565F4 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x140B57224 (PnprWakeDevices.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  PVOID Object[2]; // [rsp+40h] [rbp-78h] BYREF
  int v6[20]; // [rsp+50h] [rbp-68h] BYREF

  memset_0(v6, 0, sizeof(v6));
  Object[0] = (PVOID)(PnprContext + 33064);
  Object[1] = (PVOID)(PnprContext + 33112);
  if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices(v6);
    v3 = PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 33160) = v2;
    KeSetEvent((PRKEVENT)(v3 + 33088), 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 33112), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 33136), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}
