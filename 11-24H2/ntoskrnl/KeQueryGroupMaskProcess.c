/*
 * XREFs of KeQueryGroupMaskProcess @ 0x140483990
 * Callers:
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     MmCreatePeb @ 0x140AE79AC (MmCreatePeb.c)
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
