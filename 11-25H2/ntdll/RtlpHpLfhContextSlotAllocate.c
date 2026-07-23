/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x1800B810C
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhPrivateSlotCreate @ 0x180114104 (RtlpHpLfhPrivateSlotCreate.c)
 * Callees:
 *     RtlpHpLfhContextMetadataAllocate @ 0x180009AA4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhSlotInitialize @ 0x1800B7D30 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1800B8200 (RtlpHpLfhContextSlotStandbyProcess.c)
 */

_BYTE *__fastcall RtlpHpLfhContextSlotAllocate(_RTL_SRWLOCK *a1, _BYTE *a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx

  RtlpHpLfhContextSlotStandbyProcess(a1, 0LL);
  v4 = (_BYTE *)RtlpHpLfhContextMetadataAllocate(a1, 2);
  v5 = v4;
  if ( v4 )
    RtlpHpLfhSlotInitialize(v4, a2, (__int64)a1);
  return v5;
}
