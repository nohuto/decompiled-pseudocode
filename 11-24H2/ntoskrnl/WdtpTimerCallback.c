/*
 * XREFs of WdtpTimerCallback @ 0x14069C470
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     WdtpArmTimer @ 0x1403BF5C0 (WdtpArmTimer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall WdtpTimerCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  int v6; // edx

  v5 = *(_DWORD *)(a2 + 136) + 1;
  *(_DWORD *)(a2 + 136) = v5;
  if ( v5 == 1 )
  {
    if ( *(_QWORD *)(a2 + 16) )
      guard_dispatch_icall_no_overrides(a2 + 141, a2, a3, a4);
    if ( *(_QWORD *)(a2 + 24) )
    {
      KeResetEvent((PRKEVENT)(a2 + 96));
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 56), CriticalWorkQueue);
    }
    v6 = *(_DWORD *)(a2 + 36);
    if ( v6 )
      WdtpArmTimer(a2, v6 - *(_DWORD *)(a2 + 32));
  }
  else if ( v5 == 2 )
  {
    guard_dispatch_icall_no_overrides(a2 + 141, a2, a3, a4);
  }
}
