/*
 * XREFs of KeQueryGroupMaskProcess @ 0x140488E54
 * Callers:
 *     MmCreatePeb @ 0x1408FA99C (MmCreatePeb.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall KeQueryGroupMaskProcess(_OWORD *a1, __int64 a2)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = *(_OWORD *)(a2 + 152);
  return result;
}
