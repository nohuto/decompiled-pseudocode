/*
 * XREFs of MiGetSubsectionCharges @ 0x1402699F8
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x14026B000 (MiUpdateLastSubsectionSize.c)
 *     MiCreatePrototypePtes @ 0x1402751A4 (MiCreatePrototypePtes.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x14098A4D8 (MiExtendSection.c)
 * Callees:
 *     MiGetCrossPartitionCharges @ 0x140269C84 (MiGetCrossPartitionCharges.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  BOOL v4; // ebp
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  unsigned int v8; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges(v5, 0LL, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit(v5, a2, 0LL, v7) )
    {
      v8 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges(v5, 0LL, v4, a2);
      return v8;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit(v5, a2, 0LL);
      v8 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
