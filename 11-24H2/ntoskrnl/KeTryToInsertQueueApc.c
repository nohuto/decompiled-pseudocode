/*
 * XREFs of KeTryToInsertQueueApc @ 0x1404C67E8
 * Callers:
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140650210 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402DF8C0 (KiInsertQueueApc.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 EffectiveIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v11; // bp
  char v12; // si

  v3 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v3) )
    return 0;
  EffectiveIrql = KeGetEffectiveIrql(v8, v7);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = EffectiveIrql;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
    return 0;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v11, 0);
  }
  *(_QWORD *)(v3 + 64) = 0LL;
  return v12;
}
