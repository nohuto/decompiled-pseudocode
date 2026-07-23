/*
 * XREFs of RtlpDynamicEnforcedAddressRangesTreeCompare @ 0x1407876B8
 * Callers:
 *     RtlAddDynamicEnforcedAddressRange @ 0x140787544 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x14078760C (RtlRemoveDynamicEnforcedAddressRange.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x1409F9380 (RtlFindDynamicEnforcedAddressInRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicEnforcedAddressRangesTreeCompare(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 + *(_QWORD *)(a1 + 32) > v3 )
    return v2 >= v3 + *(_QWORD *)(a2 + 32);
  else
    return 0xFFFFFFFFLL;
}
