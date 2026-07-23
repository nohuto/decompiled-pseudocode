/*
 * XREFs of RtlpHpVsSubsegmentCleanup @ 0x180064D24
 * Callers:
 *     RtlpHpVsContextCleanup @ 0x180064C78 (RtlpHpVsContextCleanup.c)
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsSubsegmentCleanup(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)a2 ^ a2;
  v4 = *(_QWORD *)(a2 + 8) ^ a2;
  v5 = (unsigned __int64 *)(v3 + 8);
  if ( (*(_QWORD *)(v3 + 8) ^ v3) != a2 || (*(_QWORD *)v4 ^ v4) != a2 )
    __fastfail(3u);
  v6 = v4 ^ v3;
  *(_QWORD *)v4 = v6;
  *v5 = v6;
  result = (unsigned int)-(__int64)__popcnt(*(_QWORD *)(a2 + 16));
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), (int)result);
  return result;
}
