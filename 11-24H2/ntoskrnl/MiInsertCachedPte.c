/*
 * XREFs of MiInsertCachedPte @ 0x14028E4E0
 * Callers:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 * Callees:
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     MiMakeLinkedListPte @ 0x1402D1A40 (MiMakeLinkedListPte.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     MiOkToBinMoreLargePtes @ 0x1403FC4B4 (MiOkToBinMoreLargePtes.c)
 *     MiEmptyPteBins @ 0x1403FCDF4 (MiEmptyPteBins.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // r13
  int v5; // ebp
  unsigned __int64 v6; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned int v11; // edi
  volatile signed __int64 *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  volatile signed __int32 *MmInternal; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 LinkedListPte; // rax
  __int64 v25; // r10
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-60h] BYREF
  struct _KTHREAD *v32; // [rsp+30h] [rbp-58h]
  unsigned __int64 v33; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 32);
  v30 = 0LL;
  v33 = a3;
  v5 = a3 >= 0x200;
  v6 = 0xFFFFF68000000000uLL;
  v8 = a1;
  v9 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = 2;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( a3 > (4096 - ((unsigned __int16)a2 & 0xFFFu)) >> 3 )
      return 0LL;
  }
  if ( a2 == (unsigned __int64 *)v3 )
    return 0LL;
  if ( a3 == 1 )
  {
    v35 = 2LL;
  }
  else
  {
    v22 = (unsigned __int64)a3 << 32;
    if ( qword_140E2DB80 )
    {
      if ( (qword_140E2DB80 & v22) != 0 )
        v22 |= 0x10uLL;
      else
        v22 |= qword_140E2DB80;
    }
    if ( v5 == 2 )
      v22 = v22 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
    a2[1] = v22;
    v35 = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 80)
      + 72
      * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
       + (unsigned __int64)(v5 * (unsigned int)(unsigned __int16)KeNumberNodes));
  _InterlockedOr(v29, 0);
  v11 = (unsigned __int16)KiTbFlushTimeStamp;
  if ( !(_WORD)KiTbFlushTimeStamp )
  {
    do
    {
      MiIssueFlushTbEntire(0LL, 1LL);
      _InterlockedOr(v29, 0);
      v11 = (unsigned __int16)KiTbFlushTimeStamp;
    }
    while ( !(_WORD)KiTbFlushTimeStamp );
    v8 = a1;
  }
  v12 = (volatile signed __int64 *)(v10 + 8LL * (v11 & 7));
  if ( v5 != 2 )
    goto LABEL_7;
  if ( !(unsigned int)MiOkToBinMoreLargePtes(v8, v10, a3) )
  {
    if ( a3 != 1 )
      a2[1] = MiMakeDemandZeroPte(16LL);
    return 0LL;
  }
  v8 = a1;
LABEL_7:
  v13 = (unsigned __int64)v11 << 25;
  v14 = v11;
  if ( qword_140E2DB80 )
  {
    if ( (qword_140E2DB80 & v13) != 0 )
      v13 |= 0x10uLL;
    else
      v13 |= qword_140E2DB80;
  }
  v15 = *a2;
  if ( v5 == 2 )
    v13 = v13 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
  v16 = v35;
  *a2 = v35 | v13 & 0xFFFFFFFFFFFFFFFDuLL;
LABEL_13:
  v17 = *v12;
  do
  {
    while ( 1 )
    {
      v31 = v17;
      if ( (unsigned __int16)v17 == v14 || v17 < 0x10000 )
        break;
      if ( !(_WORD)v17 )
        goto LABEL_13;
      _InterlockedOr(v29, 0);
      v23 = (unsigned __int16)(KiTbFlushTimeStamp - v17);
      if ( (unsigned int)v23 <= 2 && ((v17 & 1) != 0 || (unsigned int)v23 < 2) )
      {
        LinkedListPte = MiMakeLinkedListPte(0LL, v23, v16, v6, v30);
        v27 = v26 | LinkedListPte & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v15 & 0x3E0) == 0x200 )
          v27 = v27 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
        *a2 = v27;
        v30 = (unsigned __int16)v30 | (unsigned __int64)((__int64)((__int64)a2 - v3) >> 3 << 16);
        MiReleasePteMappings(v25, &v30, 0, v5);
        return 1LL;
      }
      if ( KeGetCurrentIrql() )
      {
        CurrentThread = 0LL;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
      }
      v32 = CurrentThread;
      v17 = _InterlockedCompareExchange64(v12, 0LL, v17);
      if ( v17 == v31 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v10 + 64), -MiReleasePteMappings(v8, &v31, 0, v5));
        CurrentThread = v32;
        v16 = v35;
        v17 = 0LL;
      }
      v8 = a1;
      if ( CurrentThread )
      {
        KeLeaveCriticalRegionThread();
        v16 = v35;
        v8 = a1;
      }
    }
    v18 = v17 >> 16 << 25;
    if ( qword_140E2DB80 )
    {
      if ( (qword_140E2DB80 & v18) != 0 )
        v18 |= 0x10uLL;
      else
        v18 |= qword_140E2DB80;
    }
    v19 = v16 | v18 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v15 & 0x3E0) == 0x200 )
      v19 = v19 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
    *a2 = v19;
    v30 = v14 | ((__int64)((__int64)a2 - v3) >> 3 << 16);
    v17 = _InterlockedCompareExchange64(v12, v30, v17);
  }
  while ( v17 != v31 );
  _InterlockedAdd64((volatile signed __int64 *)(v10 + 64), v33);
  MmInternal = (volatile signed __int32 *)KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    if ( !(unsigned __int8)_InterlockedIncrement(MmInternal + 86) )
      MiEmptyPteBins(v8, 0LL, 2LL);
  }
  return 1LL;
}
