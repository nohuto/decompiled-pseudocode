/*
 * XREFs of KiInitializeForceIdle @ 0x140A75F3C
 * Callers:
 *     KeInitializeTimerTable @ 0x140A75E0C (KeInitializeTimerTable.c)
 * Callees:
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     KeDisableForceIdle @ 0x1405C4A80 (KeDisableForceIdle.c)
 */

__int64 __fastcall KiInitializeForceIdle(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 36) )
  {
    KiForceIdleLock = 0LL;
    KeInitializeDpc(&KiForceIdleStartDpc, (PKDEFERRED_ROUTINE)KiForceIdleStartDpcRoutine, 0LL);
    KeInitializeDpc(&KiForceIdleStopDpc, (PKDEFERRED_ROUTINE)KiForceIdleStopDpcRoutine, 0LL);
    KiForceIdleStartDpc.Importance = 3;
    KiForceIdleStopDpc.Importance = 3;
    if ( !KiSerializeTimerExpiration )
      KeDisableForceIdle();
  }
  KeInitializeDpc((PRKDPC)(a1 + 35480), (PKDEFERRED_ROUTINE)KiForceIdleParkUnparkDpcRoutine, 0LL);
  *(_BYTE *)(a1 + 35481) = 3;
  result = *(_QWORD *)(a1 + 35536);
  if ( !result )
  {
    result = 2048LL;
    *(_WORD *)(a1 + 35482) = *(_DWORD *)(a1 + 36) + 2048;
  }
  return result;
}
