/*
 * XREFs of HalCancelAdapterChannelDmaThin @ 0x140498110
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeAdapterChannelV3 @ 0x14038C4E0 (IoFreeAdapterChannelV3.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x140539FD0 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x14053A090 (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaRemoveWcb @ 0x14053A128 (HalpDmaRemoveWcb.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x140550874 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall HalCancelAdapterChannelDmaThin(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v6; // rcx

  _m_prefetchw((const void *)(a3 + 8));
  v4 = _InterlockedOr((volatile signed __int32 *)(a3 + 8), 2u);
  if ( (v4 & 1) != 0 || (v4 & 4) == 0 )
    return 0;
  v6 = *(_QWORD *)(a3 + 88);
  if ( !v6 )
  {
    if ( (unsigned __int8)HalpDmaRemoveWcb(a1, a3 + 16) )
      return 1;
    if ( (unsigned __int8)HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, a1 + 600)
      || (unsigned __int8)HalpDmaRemoveAdapterFromMasterQueue(a1)
      || !*(_BYTE *)(a1 + 441) && (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1) )
    {
      *(_DWORD *)(a1 + 248) = 0;
      IoFreeAdapterChannelV3(a1);
      return 1;
    }
    return 0;
  }
  if ( !*(_BYTE *)(v6 + 97) )
    return 0;
  ExFreePoolWithTag(*(PVOID *)(v6 + 80), 0);
  return 1;
}
