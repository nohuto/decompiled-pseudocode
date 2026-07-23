/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsMulti @ 0x1403D90D8
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x14035EA3C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x1403D8700 (RtlpHpLfhOwnerRunMaintenance.c)
 * Callees:
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x140360B18 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1403D8038 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhSubsegmentComputeCommitUnit @ 0x1403D9204 (RtlpHpLfhSubsegmentComputeCommitUnit.c)
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x1403D97B4 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x1403D9A14 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsMulti(__int64 *a1, unsigned __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  __int64 v6; // rdx
  int v7; // ebx
  char v8; // r9
  unsigned int v9; // ebp
  void *v11; // rbx
  int v12; // eax
  _DWORD v13[10]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v14; // [rsp+58h] [rbp+10h]
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (unsigned int)(4096 << *(_BYTE *)(a2 + 38));
  v6 = (unsigned __int16)qword_140E28348 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned int)(unsigned __int16)(a2 >> 12);
  v15 = 0;
  _BitScanForward((unsigned int *)&v7, (unsigned int)RtlpHpLfhSubsegmentComputeCommitUnit(v5, v6) >> 12);
  if ( v7 != *(unsigned __int8 *)(a2 + 38) )
  {
    v9 = (unsigned int)v5 >> 12 >> v7;
    if ( v9 * *(unsigned __int16 *)(a2 + 32) >= *(unsigned __int16 *)(a2 + 34) )
    {
      if ( (v8 & 1) != 0 || (v13[0] = 0, (unsigned int)RtlpHpLfhSubsegmentReformatCheck((__int64)a1, a2, v13, &v15)) )
      {
        LOBYTE(v14) = v7;
        HIBYTE(v14) = v9;
        *(_WORD *)(a2 + 38) = v14;
        v11 = (void *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
        memset_0(v11, 0, 2LL * v9);
        RtlpHpLfhSubsegmentConstructCommitState(a1, a2, a2 + 64, v11);
        v12 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
        if ( v12 )
          RtlpHpLfhContextUpdateFreeCommitCount(
            a1,
            a2,
            (unsigned __int64)(unsigned int)(v12 << 12 << *(_BYTE *)(a2 + 38)) >> 12);
      }
      else
      {
        return (unsigned int)-1073740682;
      }
    }
    else
    {
      return (unsigned int)-1073740645;
    }
  }
  return v4;
}
