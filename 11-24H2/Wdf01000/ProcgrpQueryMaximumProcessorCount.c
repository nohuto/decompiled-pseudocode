/*
 * XREFs of ProcgrpQueryMaximumProcessorCount @ 0x1400AC4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcgrpQueryMaximumProcessorCount()
{
  unsigned __int8 *v0; // rax

  v0 = *(unsigned __int8 **)&KeNumberProcessors;
  return *v0;
}
