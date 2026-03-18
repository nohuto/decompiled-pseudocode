/*
 * XREFs of MmQueryApiSetSchema @ 0x1404B681C
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140505D38 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x140A12F90 (PsQueryCurrentApiSetSchema.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140E2D4A0;
  result = &qword_140E2D4A8;
  *a2 = &qword_140E2D4A8;
  return result;
}
