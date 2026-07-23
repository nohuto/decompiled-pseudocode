/*
 * XREFs of MiInsertCachedPte @ 0x14029E0E0
 * Callers:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 * Callees:
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiOkToBinMoreLargePtes @ 0x1403F5E74 (MiOkToBinMoreLargePtes.c)
 *     MiEmptyPteBins @ 0x1403F67B4 (MiEmptyPteBins.c)
 *     MiMakeLinkedListPte @ 0x1403F8EF0 (MiMakeLinkedListPte.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // r13
  int v5; // ebp
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned int v10; // edi
  volatile signed __int64 *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  volatile signed __int32 *MmInternal; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // edx
  __int64 LinkedListPte; // rax
  __int64 v27; // r10
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-88h] BYREF
  signed __int64 v32; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-60h] BYREF
  struct _KTHREAD *v34; // [rsp+30h] [rbp-58h]
  unsigned __int64 v35; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 32);
  v32 = 0LL;
  v35 = a3;
  v5 = a3 >= 0x200;
  v7 = a1;
  v8 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL )
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
    v37 = 2LL;
  }
  else
  {
    v21 = (unsigned __int64)a3 << 32;
    if ( qword_140E2DCC0 )
    {
      if ( (qword_140E2DCC0 & v21) != 0 )
        v21 |= 0x10uLL;
      else
        v21 |= qword_140E2DCC0;
    }
    if ( v5 == 2 )
      v21 = v21 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
    a2[1] = v21;
    v37 = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 80)
     + 72
     * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
      + (unsigned __int64)(v5 * (unsigned int)(unsigned __int16)KeNumberNodes));
  _InterlockedOr(v31, 0);
  v10 = (unsigned __int16)KiTbFlushTimeStamp;
  if ( !(_WORD)KiTbFlushTimeStamp )
  {
    do
    {
      MiIssueFlushTbEntire(0LL, 1LL);
      _InterlockedOr(v31, 0);
      v10 = (unsigned __int16)KiTbFlushTimeStamp;
    }
    while ( !(_WORD)KiTbFlushTimeStamp );
    v7 = a1;
  }
  v11 = (volatile signed __int64 *)(v9 + 8LL * (v10 & 7));
  if ( v5 != 2 )
    goto LABEL_7;
  if ( !(unsigned int)MiOkToBinMoreLargePtes(v7, v9, a3) )
  {
    if ( a3 != 1 )
      a2[1] = MiMakeDemandZeroPte(16LL, v22, v23, v24);
    return 0LL;
  }
  v7 = a1;
LABEL_7:
  v12 = (unsigned __int64)v10 << 25;
  v13 = v10;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & v12) != 0 )
      v12 |= 0x10uLL;
    else
      v12 |= qword_140E2DCC0;
  }
  v14 = *a2;
  if ( v5 == 2 )
    v12 = v12 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
  v15 = v37;
  *a2 = v37 | v12 & 0xFFFFFFFFFFFFFFFDuLL;
LABEL_13:
  v16 = *v11;
  do
  {
    while ( 1 )
    {
      v33 = v16;
      if ( (unsigned __int16)v16 == v13 || v16 < 0x10000 )
        break;
      if ( !(_WORD)v16 )
        goto LABEL_13;
      _InterlockedOr(v31, 0);
      v25 = (unsigned __int16)(KiTbFlushTimeStamp - v16);
      if ( v25 <= 2 && ((v16 & 1) != 0 || v25 < 2) )
      {
        LinkedListPte = MiMakeLinkedListPte(0LL);
        v29 = v28 | LinkedListPte & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (v14 & 0x3E0) == 0x200 )
          v29 = v29 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
        *a2 = v29;
        v32 = (unsigned __int16)v32 | (unsigned __int64)((__int64)((__int64)a2 - v3) >> 3 << 16);
        MiReleasePteMappings(v27, &v32, 0, v5);
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
      v34 = CurrentThread;
      v16 = _InterlockedCompareExchange64(v11, 0LL, v16);
      if ( v16 == v33 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v9 + 64), -MiReleasePteMappings(v7, &v33, 0, v5));
        CurrentThread = v34;
        v15 = v37;
        v16 = 0LL;
      }
      v7 = a1;
      if ( CurrentThread )
      {
        KeLeaveCriticalRegionThread();
        v15 = v37;
        v7 = a1;
      }
    }
    v17 = v16 >> 16 << 25;
    if ( qword_140E2DCC0 )
    {
      if ( (qword_140E2DCC0 & v17) != 0 )
        v17 |= 0x10uLL;
      else
        v17 |= qword_140E2DCC0;
    }
    v18 = v15 | v17 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v14 & 0x3E0) == 0x200 )
      v18 = v18 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
    *a2 = v18;
    v32 = v13 | ((__int64)((__int64)a2 - v3) >> 3 << 16);
    v16 = _InterlockedCompareExchange64(v11, v32, v16);
  }
  while ( v16 != v33 );
  _InterlockedAdd64((volatile signed __int64 *)(v9 + 64), v35);
  MmInternal = (volatile signed __int32 *)KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    if ( !(unsigned __int8)_InterlockedIncrement(MmInternal + 86) )
      MiEmptyPteBins(v7, 0LL, 2LL);
  }
  return 1LL;
}
