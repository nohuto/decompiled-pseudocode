/*
 * XREFs of RtlpHpLfhContextUpdateFreeCommitCount @ 0x1402B93D8
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x1402B4ED8 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1402B5E60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1402B64D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402B8E70 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1404037D0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhSubsegmentReformatAsSingle @ 0x140459378 (RtlpHpLfhSubsegmentReformatAsSingle.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 */

__int64 __fastcall RtlpHpLfhContextUpdateFreeCommitCount(__int64 *a1, __int64 a2, signed __int64 a3)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx

  result = *((__int16 *)a1 + 33);
  _InterlockedAdd64((__int64 *)((char *)a1 + result + 24), a3);
  if ( a3 > 0 )
  {
    v4 = &a1[8 * (unsigned __int64)*(unsigned __int16 *)(a2 + 44)];
    if ( !*((_BYTE *)v4 + 92) )
    {
      v5 = *a1;
      if ( BYTE1(**(_QWORD **)(v5 + 56)) == 1 )
        result = (unsigned int)ExpHpGCScheduledNonPaged;
      else
        result = (unsigned int)ExpHpGCScheduledPaged;
      if ( !(_DWORD)result )
        result = RtlpHpEnvCompactionSchedule(*(_QWORD **)(v5 + 56));
      *((_BYTE *)v4 + 92) = 1;
    }
  }
  return result;
}
