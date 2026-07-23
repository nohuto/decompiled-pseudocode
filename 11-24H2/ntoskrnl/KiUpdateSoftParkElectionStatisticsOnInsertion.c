/*
 * XREFs of KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14041E2F0
 * Callers:
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x14041E46C (KiScheduleSoftParkElectionIfNecessary.c)
 */

__int64 __fastcall KiUpdateSoftParkElectionStatisticsOnInsertion(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(a2 + 1828) = *(_BYTE *)(a2 + 516);
  *(_DWORD *)(a2 + 1788) = v3;
  v5 = *(_DWORD *)(a2 + 80);
  if ( v5 <= v3 )
    v5 = v3;
  v6 = 0;
  *(_BYTE *)(a2 + 1830) = v5 >= KiDynamicHeteroCpuPolicyExpectedCycles;
  *(_BYTE *)(a2 + 1829) = *(_BYTE *)(a2 + 517);
  v7 = *(unsigned __int16 *)(a1 + 710);
  *(_OWORD *)(a2 + 1800) = 0LL;
  v8 = *(_WORD **)(a2 + 576);
  *(_WORD *)(a2 + 1808) = v7;
  if ( (unsigned __int16)v7 >= *v8 )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)&v8[4 * v7 + 4];
  *(_QWORD *)(a2 + 1800) = v9;
  if ( *(_DWORD *)(a2 + 1788) > (unsigned int)KeSoftParkedQueueThreshold )
    *(_DWORD *)(a2 + 1788) = KeSoftParkedQueueThreshold;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 768), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 768) );
  }
  *(_QWORD *)(a2 + 1792) = *(_QWORD *)(a1 + 776);
  ++*(_DWORD *)(a1 + 784);
  *(_QWORD *)(a1 + 792) += *(unsigned int *)(a2 + 1788);
  *(_QWORD *)(a1 + 1760) |= *(_QWORD *)(a2 + 1800);
  v10 = *(unsigned __int8 *)(a2 + 1829) + 8 * (*(unsigned __int8 *)(a2 + 1830) + 2LL * *(unsigned __int8 *)(a2 + 1828));
  *(_QWORD *)(a1 + 8 * v10 + 864) += *(unsigned int *)(a2 + 1788);
  result = KiScheduleSoftParkElectionIfNecessary(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 768), 0LL);
  return result;
}
