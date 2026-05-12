/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1400519B4
 * Callers:
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x140055AF8 (StorpInitializeHierarchicalResetBuckets.c)
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline @ 0x1400AAB64 (Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets();
  v2 = MEMORY[0xFFFFF78000000008];
  *(_DWORD *)(a1 + 5344) &= 0xFFFFFFF0;
  *(_QWORD *)(a1 + 5216) = v2;
  *(_QWORD *)(a1 + 5224) = 0LL;
  *(_QWORD *)(a1 + 5232) = 0LL;
  *(_QWORD *)(a1 + 5240) = 0LL;
  *(_QWORD *)(a1 + 5248) = 0LL;
  *(_QWORD *)(a1 + 5256) = 0LL;
  *(_QWORD *)(a1 + 5264) = 0LL;
  *(_QWORD *)(a1 + 5272) = 0LL;
  *(_QWORD *)(a1 + 5280) = 0LL;
  *(_QWORD *)(a1 + 5288) = 0LL;
  *(_QWORD *)(a1 + 5296) = 0LL;
  *(_QWORD *)(a1 + 5304) = 1LL;
  *(_DWORD *)(a1 + 5312) = 0;
  *(_WORD *)(a1 + 5316) = 0;
  result = Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
    *(_DWORD *)(a1 + 5344) &= ~0x10u;
  return result;
}
