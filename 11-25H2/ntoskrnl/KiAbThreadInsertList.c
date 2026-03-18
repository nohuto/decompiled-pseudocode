/*
 * XREFs of KiAbThreadInsertList @ 0x1402E5880
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14020E09C (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     PsBoostThreadIoQoS @ 0x1402E4A70 (PsBoostThreadIoQoS.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     PsBoostThreadIo @ 0x1402EA3A0 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     PsEnterPriorityRegion @ 0x1403F0DA0 (PsEnterPriorityRegion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140429870 (KeAbProcessEffectiveIoPriorityChange.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // esi
  unsigned int v5; // edi
  __int64 result; // rax

  v3 = 0;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v5);
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
    v3 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  result = v3;
  if ( v3 )
    _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
  return result;
}
