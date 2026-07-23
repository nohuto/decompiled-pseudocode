/*
 * XREFs of RtlpHpLfhSubsegmentReformatAsMulti @ 0x1800643E0
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x1800642C0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCompact @ 0x180066280 (RtlpHpLfhOwnerCompact.c)
 * Callees:
 *     RtlpHpLfhSubsegmentConstructCommitState @ 0x180064560 (RtlpHpLfhSubsegmentConstructCommitState.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x180064F90 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhContextUpdateFreeCommitCount @ 0x18006BE00 (RtlpHpLfhContextUpdateFreeCommitCount.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1800DB1E0 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentReformatAsMulti(__int64 a1, unsigned __int64 a2, char a3)
{
  int v4; // edx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rcx
  void *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v18[9]; // [rsp+24h] [rbp-24h] BYREF
  __int16 v19; // [rsp+58h] [rbp+10h]

  v4 = *(unsigned __int8 *)(a2 + 38);
  v17 = 0;
  v6 = 4096 << v4;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v9 = 4096 << v4;
  }
  else
  {
    v7 = 2 * ((unsigned __int16)qword_1801CCEC8 ^ *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)(a2 >> 12));
    if ( ((v7 - 1) & v7) != 0 )
    {
      _BitScanReverse(&v8, v7);
      v7 = 1 << (v8 + 1);
    }
    if ( v7 <= 0x1000 )
      v7 = 4096;
    if ( v7 <= v6 >> 6 )
      v7 = v6 >> 6;
    v9 = 4096 << v4;
    if ( v7 < v6 )
      v9 = v7;
  }
  _BitScanForward((unsigned int *)&v10, v9 >> 12);
  if ( v10 == v4 )
    return 0LL;
  v11 = v6 >> 12 >> v10;
  v12 = v11 * *(unsigned __int16 *)(a2 + 32);
  if ( (unsigned int)v12 < *(unsigned __int16 *)(a2 + 34) )
    return 3221226651LL;
  if ( (a3 & 1) != 0 || (v18[0] = 0, (unsigned int)RtlpHpLfhSubsegmentReformatCheck(v12, a2, v18, &v17)) )
  {
    LOBYTE(v19) = v10;
    HIBYTE(v19) = v11;
    *(_WORD *)(a2 + 38) = v19;
    v14 = (void *)(a2 + 8LL * *(unsigned __int8 *)(a2 + 24));
    memset_thunk_772440563353939046(v14, 0, 2LL * v11);
    RtlpHpLfhSubsegmentConstructCommitState(v15, a2, a2 + 64, v14);
    v16 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
    if ( v16 )
      RtlpHpLfhContextUpdateFreeCommitCount(
        a1,
        a2,
        (unsigned __int64)(unsigned int)(v16 << 12 << *(_BYTE *)(a2 + 38)) >> 12);
    return 0LL;
  }
  return 3221226614LL;
}
