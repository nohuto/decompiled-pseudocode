/*
 * XREFs of MiRemoveMappedPtes @ 0x140260FC0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLocateSubsectionNode @ 0x1402C31C0 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 *     MiRemoveViewsFromSection @ 0x1403717B0 (MiRemoveViewsFromSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDecrementLargeSubsections @ 0x1404C8E10 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBAD0 (MiReturnCrossPartitionControlAreaCharges.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  unsigned __int64 v6; // r15
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  BOOL v11; // ebp
  __int64 v12; // rdx
  KIRQL v13; // r15
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 SubsectionNode; // rax
  _OWORD v18[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19; // [rsp+70h] [rbp-48h]
  __int64 v20; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+10h]
  __int64 v22; // [rsp+D0h] [rbp+18h]

  v21 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 88);
  v20 = 0LL;
  memset(v18, 0, sizeof(v18));
  v6 = v3 >> 12;
  v7 = *(_DWORD *)(a1 + 56);
  v19 = 0LL;
  v8 = *(_QWORD *)v2;
  v22 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24) << 12;
    v2 = MiOffsetToProtos(v8, v9, &v20);
  }
  if ( (v7 & 0x18) == 0x18 )
  {
    MiDecommitPages((v4 >> 9) & 0xFFFFFFF8, v6, v8, 0, 0LL, 16, 0LL, (__int64)v18);
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
  v10 = 0LL;
  v11 = *(_QWORD *)(v8 + 64) != 0LL;
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  if ( v2 )
    v10 = MiRemoveViewsFromSection(v2);
  --*(_QWORD *)(v8 + 48);
  LOBYTE(v12) = v13;
  --*(_QWORD *)(v8 + 40);
  result = MiCheckControlArea(v8, v12);
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 )
  {
    result = *((_QWORD *)&v18[0] + 1);
    v16 = v15 - *((_QWORD *)&v18[0] + 1);
    if ( !*((_QWORD *)&v18[0] + 1) )
      v16 = *(_QWORD *)(a1 + 40);
    if ( v16 )
      result = MiReturnCommit(*((_QWORD *)qword_140E2FF88 + *(unsigned __int16 *)(v21 + 174)), v16, 0LL);
  }
  if ( v10 )
    return MiReturnCrossPartitionSectionCharges(v22, v11, v10);
  return result;
}
