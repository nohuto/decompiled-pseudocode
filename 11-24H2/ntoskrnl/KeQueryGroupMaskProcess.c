/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14047EEAC
 * Callers:
 *     MmCreatePeb @ 0x1408DDBA4 (MmCreatePeb.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
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
