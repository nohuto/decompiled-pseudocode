/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C63A0
 * Callers:
 *     KeUpdateThreadCpuSets @ 0x1403C6338 (KeUpdateThreadCpuSets.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405C0290 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiUpdateThreadCpuSets @ 0x1403C6418 (KiUpdateThreadCpuSets.c)
 */

__int64 __fastcall KiUpdateThreadCpuSetAffinitiesFromDpcLevel(__int64 a1, struct _SINGLE_LIST_ENTRY *a2)
{
  unsigned int v4; // edi

  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  return KiUpdateThreadCpuSets(a1, a2);
}
