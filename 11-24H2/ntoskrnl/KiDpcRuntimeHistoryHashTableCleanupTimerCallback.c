/*
 * XREFs of KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x1404730C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiDpcRuntimeHistoryHashTableCleanupDpcRoutine @ 0x140473180 (KiDpcRuntimeHistoryHashTableCleanupDpcRoutine.c)
 */

void KiDpcRuntimeHistoryHashTableCleanupTimerCallback()
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v1; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v3; // rdx
  __int64 Prcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = KeActiveProcessors.Bitmap[0];
  for ( i = 0; ; v1 = KeActiveProcessors.Bitmap[i] )
  {
    while ( v1 )
    {
      _BitScanForward64(&v3, v1);
      v1 &= ~(1LL << v3);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * i + (unsigned __int8)v3));
      if ( (struct _KPRCB *)Prcb != CurrentPrcb )
        KeInsertQueueDpc(*(PRKDPC *)(Prcb + 14360), 0LL, 0LL);
    }
    if ( ++i >= (unsigned int)KeActiveProcessors.Count )
      break;
  }
  KiDpcRuntimeHistoryHashTableCleanupDpcRoutine(0LL, 0LL, 0LL, 0LL);
}
