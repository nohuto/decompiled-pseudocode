/*
 * XREFs of RtlpHpLfhContextSlotAllocate @ 0x1800A4C3C
 * Callers:
 *     RtlpHpLfhPrivateSlotCreate @ 0x1800A4664 (RtlpHpLfhPrivateSlotCreate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x18004B3D8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800A4DB4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhSlotInitialize @ 0x1800A5140 (RtlpHpLfhSlotInitialize.c)
 */

__int64 __fastcall RtlpHpLfhContextSlotAllocate(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  RtlpHpLfhContextSlotStandbyProcess(a1, 0);
  v4 = RtlpHpLfhContextMetadataAllocate(a1, 2LL);
  v5 = v4;
  if ( v4 )
    RtlpHpLfhSlotInitialize(v4, a2, a1);
  return v5;
}
