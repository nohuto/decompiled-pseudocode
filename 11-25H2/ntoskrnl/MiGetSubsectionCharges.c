/*
 * XREFs of MiGetSubsectionCharges @ 0x1404873D0
 * Callers:
 *     MiCreatePrototypePtes @ 0x1402A6EE0 (MiCreatePrototypePtes.c)
 *     MiUpdateLastSubsectionSize @ 0x140487254 (MiUpdateLastSubsectionSize.c)
 *     MiExtendSection @ 0x14093B140 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiGetCrossPartitionCharges @ 0x140215920 (MiGetCrossPartitionCharges.c)
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

__int64 __fastcall MiGetSubsectionCharges(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  char v4; // bp
  ULONG *v5; // rdi
  __int64 result; // rax
  unsigned int v7; // esi

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v4 = v3 != 0;
  v5 = (ULONG *)*((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  result = MiGetCrossPartitionCharges((__int64)v5, 0, v3 != 0, a2);
  if ( (int)result >= 0 )
  {
    if ( v3 && !(unsigned int)MiChargeCommit((__int64)v5, a2, 0) )
    {
      v7 = -1073741523;
LABEL_9:
      MiReturnCrossPartitionCharges((__int64)v5, 0, v4);
      return v7;
    }
    if ( !(unsigned int)MiChargeResident(v5, a2, 0LL) )
    {
      if ( v3 )
        MiReturnCommit((__int64)v5, a2, 0);
      v7 = -1073741801;
      goto LABEL_9;
    }
    return 0LL;
  }
  return result;
}
