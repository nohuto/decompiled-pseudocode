/*
 * XREFs of MiRemoveViewsFromSection @ 0x140259B70
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiConvertStaticSubsections @ 0x140432C84 (MiConvertStaticSubsections.c)
 *     MiRemoveSystemCacheReferences @ 0x1404BF2B0 (MiRemoveSystemCacheReferences.c)
 * Callees:
 *     MiInsertUnusedSubsection @ 0x140259F70 (MiInsertUnusedSubsection.c)
 *     MiGetSubsectionHoldingCrossPartitionReferences @ 0x14026B278 (MiGetSubsectionHoldingCrossPartitionReferences.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1404F781C (MiUpdateSubsectionCrossPartitionRefs.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveViewsFromSection(__int64 *BugCheckParameter2, unsigned __int64 a2, char a3)
{
  __int64 v3; // r9
  ULONG_PTR v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  ULONG_PTR v9; // r8
  __int64 v10; // r10
  ULONG *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v14; // rax
  __int64 SubsectionHoldingCrossPartitionReferences; // rax
  int v16; // r11d
  int v17; // r11d

  v3 = *BugCheckParameter2;
  v6 = (ULONG_PTR)BugCheckParameter2;
  v7 = 0LL;
  v8 = *(_QWORD *)(*BugCheckParameter2 + 64);
  while ( 1 )
  {
    v9 = v6;
    if ( *(_QWORD *)(v3 + 64)
      && (*(_DWORD *)(v3 + 56) & 0x20) == 0
      && (*(_DWORD *)(v6 + 32) & 0x10000) == 0
      && !*(_QWORD *)(v6 + 80) )
    {
      KeBugCheckEx(0x1Au, 0x42001uLL, v6, 0LL, 0LL);
    }
    v10 = 0LL;
    if ( (a3 & 0xC) == 8
      && (*(_BYTE *)(v3 + 62) & 0xC) == 0
      && (*(_QWORD *)(v3 + 64) || (*(_DWORD *)(v3 + 92) & 0x10000) == 0) )
    {
      if ( (a3 & 0x10) != 0 )
        v11 = 0LL;
      else
        v11 = a3 < 0
            ? &MiSystemPartition
            : (ULONG *)*((_QWORD *)qword_140E300C8
                       + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
      if ( v11 != *((ULONG **)qword_140E300C8 + (*(_WORD *)(v3 + 60) & 0x3FF)) )
      {
        SubsectionHoldingCrossPartitionReferences = MiGetSubsectionHoldingCrossPartitionReferences(v6);
        v16 = *(_DWORD *)(MiGetSubsectionHoldingCrossPartitionReferences(SubsectionHoldingCrossPartitionReferences) + 48) & 0x3FFFFFFF;
        if ( v16 != 0x3FFFFFFF )
        {
          MiUpdateSubsectionCrossPartitionRefs(v9, (unsigned int)(v16 - 1));
          if ( v17 == 1 )
            v10 = MiComputeCrossPartitionSectionCharges();
        }
      }
    }
    if ( *(_QWORD *)(v3 + 64) && (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (*(_DWORD *)(v9 + 32) & 0x10000) == 0 )
    {
      v14 = *(_QWORD *)(v9 + 80);
      if ( !v14 )
        KeBugCheckEx(0x1Au, 0x42001uLL, v9, 0LL, 0LL);
      *(_QWORD *)(v9 + 80) = v14 - 1;
    }
    v7 += v10;
    if ( v8 && !*(_QWORD *)(v6 + 80) && (*(_DWORD *)(v6 + 32) & 0x10000) == 0 )
      v7 += MiInsertUnusedSubsection(v6);
    if ( a2 )
    {
      v12 = *(unsigned int *)(v6 + 44);
      if ( a2 <= v12 )
        return v7;
      a2 -= v12;
    }
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v8 )
      a3 &= ~8u;
    if ( !v6 )
      break;
    v3 = *(_QWORD *)v6;
  }
  return v7;
}
