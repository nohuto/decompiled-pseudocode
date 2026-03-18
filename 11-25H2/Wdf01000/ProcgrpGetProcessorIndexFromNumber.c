/*
 * XREFs of ProcgrpGetProcessorIndexFromNumber @ 0x1400AC330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcgrpGetProcessorIndexFromNumber(_PROCESSOR_NUMBER *ProcNumber)
{
  unsigned __int8 *v1; // rax
  __int64 result; // rax

  if ( ProcNumber->Group )
    return 0xFFFFFFFFLL;
  v1 = *(unsigned __int8 **)&KeNumberProcessors;
  if ( ProcNumber->Number >= *v1 )
    return 0xFFFFFFFFLL;
  result = 0xFFFFFFFFLL;
  if ( !ProcNumber->Reserved )
    return ProcNumber->Number;
  return result;
}
