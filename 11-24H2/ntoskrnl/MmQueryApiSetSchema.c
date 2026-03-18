/*
 * XREFs of MmQueryApiSetSchema @ 0x1404B62CC
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1405084B8 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A183B0 (PsQueryCurrentApiSetSchema.c)
 *     NtQueryInformationJobObject @ 0x140ACCBF0 (NtQueryInformationJobObject.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140E2D6E0;
  result = &qword_140E2D6E8;
  *a2 = &qword_140E2D6E8;
  return result;
}
