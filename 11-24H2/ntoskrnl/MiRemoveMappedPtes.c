/*
 * XREFs of MiRemoveMappedPtes @ 0x1402915D0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140259B70 (MiRemoveViewsFromSection.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDecrementLargeSubsections @ 0x1404C22C0 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404C4F4C (MiReturnCrossPartitionControlAreaCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rbx
  BOOL v12; // ebp
  __int64 v13; // rdx
  KIRQL v14; // r15
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 SubsectionNode; // rax
  _OWORD v19[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+10h]
  __int64 v23; // [rsp+D0h] [rbp+18h]

  v22 = a2;
  v2 = *(__int64 **)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 88);
  v21 = 0LL;
  memset(v19, 0, sizeof(v19));
  v6 = v3 >> 12;
  v7 = *(_DWORD *)(a1 + 56);
  v20 = 0LL;
  v8 = *v2;
  v23 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(*v2 + 60) & 0x3FF));
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24) << 12;
    v2 = (__int64 *)MiOffsetToProtos(v8, v9, &v21);
    v10 = v6 + v21;
  }
  if ( (v7 & 0x18) == 0x18 )
  {
    MiDecommitPages((v4 >> 9) & 0xFFFFFFF8, v6, v8, 0, 0LL, 16, 0LL, (__int64)v19);
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(v8, v9 + (v6 << 12) - 1, 0LL);
    MiDecrementLargeSubsections(v2, SubsectionNode);
  }
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    v2 = 0LL;
    if ( (*(_DWORD *)(a1 + 56) & 4) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v8);
  }
  v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 64) != 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  if ( v2 )
    v11 = MiRemoveViewsFromSection(v2, v10, (*(_DWORD *)(a1 + 56) & 4) != 0 ? 24 : 4);
  --*(_QWORD *)(v8 + 48);
  LOBYTE(v13) = v14;
  --*(_QWORD *)(v8 + 40);
  result = MiCheckControlArea(v8, v13);
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
  {
    result = *((_QWORD *)&v19[0] + 1);
    v17 = v16 - *((_QWORD *)&v19[0] + 1);
    if ( !*((_QWORD *)&v19[0] + 1) )
      v17 = *(_QWORD *)(a1 + 40);
    if ( v17 )
      result = MiReturnCommit(*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(v22 + 174)), v17, 0LL);
  }
  if ( v11 )
    return MiReturnCrossPartitionSectionCharges(v23, v12, v11);
  return result;
}
