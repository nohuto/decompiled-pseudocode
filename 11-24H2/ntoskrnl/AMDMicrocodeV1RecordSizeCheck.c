/*
 * XREFs of AMDMicrocodeV1RecordSizeCheck @ 0x140663CA0
 * Callers:
 *     AMDMicrocodeRecordSizeCheck @ 0x140663BC0 (AMDMicrocodeRecordSizeCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMDMicrocodeV1RecordSizeCheck(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  if ( a2 + 28 <= a3 )
    return a3 < a2 + 28 + *(_QWORD *)(a1 + 8) + 4 * (unsigned __int64)*(unsigned int *)(a1 + 24) ? 0xC000000D : 0;
  else
    return 3221225485LL;
}
