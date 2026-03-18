/*
 * XREFs of PspRemoveCpuRateControl @ 0x14091C4A8
 * Callers:
 *     PspJobDelete @ 0x1404EB860 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveSchedulingGroup @ 0x1404AC2B4 (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x14091C530 (PspFreeRateControl.c)
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
