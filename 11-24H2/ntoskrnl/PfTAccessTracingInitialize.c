/*
 * XREFs of PfTAccessTracingInitialize @ 0x140B5D5C0
 * Callers:
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, int a2)
{
  if ( !a2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_DWORD *)(a1 + 76) = 3;
  }
  *(_DWORD *)(a1 + 760) = 0;
  if ( a2 )
  {
    _InterlockedExchange64((volatile __int64 *)(a1 + 728), 0LL);
  }
  else
  {
    *(_QWORD *)(a1 + 728) = 0LL;
    InitializeSListHead((PSLIST_HEADER)(a1 + 768));
    KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 0);
  }
}
