/*
 * XREFs of PsGetJobMemoryPartition @ 0x140777460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetJobMemoryPartition(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 1792) != -1LL )
    return *(_QWORD *)(a1 + 1792);
  return result;
}
