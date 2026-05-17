/*
 * XREFs of RtlpHpLfhTlsCleanup @ 0x18000AA50
 * Callers:
 *     RtlpFlsDataCleanup @ 0x18000A8B0 (RtlpFlsDataCleanup.c)
 *     RtlpFlsFree @ 0x1800B84E4 (RtlpFlsFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhTlsCleanup(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = a2 >> 16;
  if ( WORD1(a2) << 6 != 192 )
    return ((__int64 (__fastcall *)(_QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 48)))(*(_QWORD *)a1);
  return result;
}
