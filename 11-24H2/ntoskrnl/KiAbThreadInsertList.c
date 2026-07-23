/*
 * XREFs of KiAbThreadInsertList @ 0x14027EA80
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     PsBoostThreadIo @ 0x14027DF60 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140330DCC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsEnterPriorityRegion @ 0x1403EB900 (PsEnterPriorityRegion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140414EE0 (KeAbProcessEffectiveIoPriorityChange.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax

  v4 = 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v4 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  result = v4;
  if ( v4 )
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
  return result;
}
