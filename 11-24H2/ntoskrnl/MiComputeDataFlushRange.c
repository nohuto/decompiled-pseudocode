/*
 * XREFs of MiComputeDataFlushRange @ 0x140302C10
 * Callers:
 *     MiComputeFlushRange @ 0x140302AC8 (MiComputeFlushRange.c)
 *     MmPurgeSection @ 0x1403F06F0 (MmPurgeSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x140338770 (MiReleaseControlAreaWaiters.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFindLastSubsection @ 0x1403F2490 (MiFindLastSubsection.c)
 *     MiLocateSubsectionNode @ 0x14040FCF0 (MiLocateSubsectionNode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiComputeDataFlushRange(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v8; // rbp
  ULONG_PTR v10; // rsi
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // r12
  __int64 SubsectionNode; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rax
  ULONG_PTR LastSubsection; // rdi
  unsigned __int64 v19; // r15
  int j; // r13d
  __int64 v21; // r12
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rax
  __int64 i; // rdi
  int v27; // eax
  ULONG_PTR v28; // rax
  __int64 *v29; // rdx

  v8 = a2;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
    return 0LL;
  }
  v10 = a1 + 128;
  v11 = 0LL;
  if ( !a3 )
  {
    v25 = *(_QWORD *)(a1 + 280);
    v14 = 0LL;
    for ( i = 0LL; v25; v25 = *(_QWORD *)(v25 + 8) )
      i = v25;
    v27 = *(_DWORD *)(i - 4);
    LastSubsection = i - 56;
    goto LABEL_23;
  }
  v12 = *a3;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v10 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_28:
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v8);
    return 0LL;
  }
  v14 = (v12 >> 12)
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_DWORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v15 = a4 - 1 + *a3, v16 = v15 >> 12, v17 = MiLocateSubsectionNode(a1, v15, 1LL), (LastSubsection = v17) == 0) )
  {
    LastSubsection = MiFindLastSubsection(a1, 1LL);
    v27 = *(_DWORD *)(LastSubsection + 52);
LABEL_23:
    v19 = *(_DWORD *)(LastSubsection + 44) - (v27 & 0x3FFFFFFFu) - 1;
    goto LABEL_7;
  }
  v19 = v16 - (*(unsigned int *)(v17 + 36) | ((unsigned __int64)(*(_DWORD *)(v17 + 32) & 0xFFC0) << 26));
LABEL_7:
  if ( !*(_DWORD *)(v10 + 104) || (int)MiReferenceSubsection(v10) <= 1 )
  {
    for ( j = *(_DWORD *)(v10 + 44) - v14; v10 != LastSubsection; j += *(_DWORD *)(v10 + 44) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
        break;
      if ( *(_DWORD *)(v10 + 104) && (int)MiReferenceSubsection(v10) > 1 )
      {
        v21 = *(_QWORD *)(v10 + 8);
        goto LABEL_10;
      }
    }
    goto LABEL_28;
  }
  j = 0;
  v21 = *(_QWORD *)(v10 + 8) + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection) <= 1 )
  {
    v28 = *(_QWORD *)(v10 + 16);
    if ( v28 == LastSubsection )
      goto LABEL_30;
    do
    {
      if ( *(_DWORD *)(v28 + 104) && *(_QWORD *)(v28 + 8) )
        v11 = v28;
      v28 = *(_QWORD *)(v28 + 16);
    }
    while ( v28 != LastSubsection );
    if ( !v11 )
LABEL_30:
      LastSubsection = v10;
    else
      LastSubsection = v11;
    MiReferenceSubsection(LastSubsection);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
  }
  ++*(_QWORD *)(a1 + 40);
  v22 = *(__int64 **)(a1 + 80);
  if ( v22 )
  {
    do
    {
      v29 = (__int64 *)*v22;
      if ( (v22[1] & 4) != 0 )
        *((_DWORD *)v22 + 3) = 1;
      v22 = v29;
    }
    while ( v29 );
  }
  MiRemoveUnusedSegment(a1);
  if ( a5 )
    *(_DWORD *)(a1 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( (_BYTE)v8 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v8);
    __writecr8(v8);
  }
  MiReleaseControlAreaWaiters(0LL);
  v23 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = a1;
  *(_QWORD *)(a6 + 8) = v21;
  *(_QWORD *)(a6 + 16) = v23 + 8 * v19;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v10;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = j;
  return result;
}
