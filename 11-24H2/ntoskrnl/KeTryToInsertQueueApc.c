/*
 * XREFs of KeTryToInsertQueueApc @ 0x1404CD418
 * Callers:
 *     EtwpQueueApc @ 0x1403EE2B0 (EtwpQueueApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140651B10 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KiSignalThreadForApc @ 0x140296870 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403377A0 (KiInsertQueueApc.c)
 *     KeIsThreadRunning @ 0x1403BE4C8 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 EffectiveIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v9; // bp
  char v10; // si

  v3 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v3) )
    return 0;
  EffectiveIrql = KeGetEffectiveIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = EffectiveIrql;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
    return 0;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v9, 0);
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  return v10;
}
