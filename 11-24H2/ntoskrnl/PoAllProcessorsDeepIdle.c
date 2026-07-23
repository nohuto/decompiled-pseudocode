/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x1405CB1F8
 * Callers:
 *     PpmIdleEvaluateConstraints @ 0x1404BCF60 (PpmIdleEvaluateConstraints.c)
 *     PpmWakeClockOwnerIfNeeded @ 0x1404C1C54 (PpmWakeClockOwnerIfNeeded.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B6AE0 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     MmGetNextNode @ 0x140421790 (MmGetNextNode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char PoAllProcessorsDeepIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Number; // rsi
  unsigned __int16 *v2; // rdx
  int v3; // edi
  unsigned __int64 DeepIdleSet; // r8
  unsigned __int64 Mask; // r9
  int NextNode; // eax
  int v8; // [rsp+20h] [rbp-38h] BYREF
  _KSCHEDULER_SUBNODE *v9; // [rsp+28h] [rbp-30h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v11 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  v2 = (unsigned __int16 *)KeNodeBlock[CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]];
  v3 = *v2;
  while ( 1 )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v10, (__int64)v2);
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v10, &v9) )
    {
      DeepIdleSet = v9->DeepIdleSet;
      Mask = v9->Affinity.Mask;
      if ( v9 == CurrentPrcb->SchedulerSubNode )
      {
        DeepIdleSet &= ~(1LL << CurrentPrcb->GroupIndex);
        _bittestandreset64((__int64 *)&Mask, *((_DWORD *)KiGlobalState + Number) & 0x3F);
      }
      if ( DeepIdleSet != Mask )
        return 0;
    }
    NextNode = MmGetNextNode(v3, &v8);
    if ( NextNode == -1 )
      break;
    v2 = (unsigned __int16 *)KeNodeBlock[NextNode];
  }
  return 1;
}
