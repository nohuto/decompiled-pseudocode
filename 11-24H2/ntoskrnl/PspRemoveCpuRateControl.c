/*
 * XREFs of PspRemoveCpuRateControl @ 0x1409777A4
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveSchedulingGroup @ 0x14049F368 (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x14097782C (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1240) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1240) + 128LL));
  result = PspFreeRateControl(*(PVOID *)(a1 + 1240));
  *(_QWORD *)(a1 + 1240) = 0LL;
  if ( PsCpuFairShareEnabled )
  {
    result = *(_QWORD *)(a1 + 1312);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1344);
      if ( v3 )
      {
        result = ObfDereferenceObjectWithTag(v3, 0x624A7350u);
        *(_QWORD *)(a1 + 1344) = 0LL;
      }
    }
  }
  return result;
}
