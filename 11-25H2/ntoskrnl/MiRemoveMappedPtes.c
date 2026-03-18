/*
 * XREFs of MiRemoveMappedPtes @ 0x1402A9320
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiLocateSubsectionNode @ 0x140219A20 (MiLocateSubsectionNode.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiOffsetToProtos @ 0x1402BBD30 (MiOffsetToProtos.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveViewsFromSection @ 0x140322A00 (MiRemoveViewsFromSection.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDecrementLargeSubsections @ 0x1404C8190 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1404CBB78 (MiReturnCrossPartitionControlAreaCharges.c)
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
  int v10; // eax
  __int64 v11; // rbx
  BOOL v12; // ebp
  __int64 v13; // rdx
  KIRQL v14; // r15
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _DWORD *SubsectionNode; // rax
  _OWORD v19[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+10h]
  __int64 v23; // [rsp+D0h] [rbp+18h]

  v22 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 88);
  v21 = 0LL;
  memset(v19, 0, sizeof(v19));
  v6 = v3 >> 12;
  v7 = *(_DWORD *)(a1 + 56);
  v20 = 0LL;
  v8 = *(_QWORD *)v2;
  v23 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24) << 12;
    v2 = MiOffsetToProtos(v8, v9, &v21);
  }
  if ( (v7 & 0x18) == 0x18 )
  {
    MiDecommitPages((v4 >> 9) & 0xFFFFFFF8, v6, v8, 0, 0LL, 16, 0LL, (__int64)v19);
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(v8, v9 + (v6 << 12) - 1, 0);
    MiDecrementLargeSubsections(v2, SubsectionNode);
  }
  v10 = *(_DWORD *)(v8 + 56);
  if ( (v10 & 0x20) != 0 )
  {
    v2 = 0LL;
    if ( (*(_BYTE *)(a1 + 56) & 4) != 0 && (v10 & 0x20) != 0 )
      MiReturnCrossPartitionControlAreaCharges(v8);
  }
  v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 64) != 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  if ( v2 )
    v11 = MiRemoveViewsFromSection(v2);
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
      result = MiReturnCommit(*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(v22 + 174)), v17, 0LL);
  }
  if ( v11 )
    return MiReturnCrossPartitionSectionCharges(v23, v12, v11);
  return result;
}
