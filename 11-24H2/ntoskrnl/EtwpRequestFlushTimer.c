/*
 * XREFs of EtwpRequestFlushTimer @ 0x14024D0B4
 * Callers:
 *     EtwpSwitchBuffer @ 0x14024CDA0 (EtwpSwitchBuffer.c)
 *     EtwpLoggerDpc @ 0x14049A770 (EtwpLoggerDpc.c)
 *     EtwpFlushActiveBuffers @ 0x1409D8040 (EtwpFlushActiveBuffers.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 */

char __fastcall EtwpRequestFlushTimer(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  ULONG v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // ecx

  if ( (*(_DWORD *)(a1 + 824) & 0x400) != 0 )
    return 0;
  if ( (_BYTE)a2 || (unsigned __int8)KeGetEffectiveIrql(a1, a2) > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 9u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 0xAu) )
      return 0;
    v4 = *(_DWORD *)(a1 + 208);
    if ( (*(_DWORD *)(a1 + 12) & 0x10) == 0 )
      v4 *= 1000;
    v5 = 500;
    v6 = EtwpOneMs * v4;
    v7 = v4 >> 2;
    if ( v7 < 0x1F4 )
      v5 = v7;
    KeSetCoalescableTimer((PKTIMER)(a1 + 504), (LARGE_INTEGER)v6, 0, v5, 0LL);
  }
  return 1;
}
