/*
 * XREFs of KiStopForceParkSingleDutyCycleTimerCallback @ 0x1405C43A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 */

BOOLEAN __fastcall KiStopForceParkSingleDutyCycleTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // di
  BOOLEAN result; // al
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a2, 0, (unsigned __int64 *)&v6);
  v3 = *(_QWORD *)(a2 + 34544);
  v4 = 0;
  if ( *(_DWORD *)(v3 + 336) == 2 )
  {
    v4 = 1;
    *(_DWORD *)(v3 + 340) = 3;
    *(_DWORD *)(v3 + 336) = 1;
  }
  result = KiReleasePrcbLocksForIsolationUnit(&v6);
  if ( v4 )
    return KeInsertQueueDpc((PRKDPC)v3, 0LL, 0LL);
  return result;
}
