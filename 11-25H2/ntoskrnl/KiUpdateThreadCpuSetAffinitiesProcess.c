/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405BC360
 * Callers:
 *     KeRecomputeCpuSetAffinityProcess @ 0x1405BBD78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1405BBDD4 (KeSetCpuSetsProcess.c)
 * Callees:
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x140491C14 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 */

__int64 __fastcall KiUpdateThreadCpuSetAffinitiesProcess(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v2; i = (_QWORD *)*i )
    result = KiUpdateThreadCpuSetAffinitiesFromDpcLevel((__int64)(i - 95), (__int64)a2);
  return result;
}
