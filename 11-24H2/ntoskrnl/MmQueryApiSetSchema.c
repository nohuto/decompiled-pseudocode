/*
 * XREFs of MmQueryApiSetSchema @ 0x1404B0B8C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140505D78 (KiMarkBugCheckRegions.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A11520 (PsQueryCurrentApiSetSchema.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140E2D820;
  result = &qword_140E2D828;
  *a2 = &qword_140E2D828;
  return result;
}
