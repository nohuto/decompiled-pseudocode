/*
 * XREFs of MiFreeWsleList @ 0x140297494
 * Callers:
 *     MiAgeTrimListsTail @ 0x14020B9B0 (MiAgeTrimListsTail.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x140213FA0 (NtUnlockVirtualMemory.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiEmptyWorkingSetTail @ 0x140295FF0 (MiEmptyWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140296100 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x140296210 (MiAgeWorkingSetTail.c)
 *     MiEmptyWorkingSetHelper @ 0x140296F20 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x1402976F0 (MiEmptyPte.c)
 *     MiTrimWorkingSetBuildup @ 0x1402EA6B0 (MiTrimWorkingSetBuildup.c)
 *     MiAgePteWorker @ 0x1403040A0 (MiAgePteWorker.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x140362D10 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertAndFlushWsleVas @ 0x140481E60 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x14049351C (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r14
  unsigned int v5; // r13d
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *MmInternal; // rdx
  int v11; // eax
  __int64 v12; // rcx
  struct _KTHREAD *BugCheckParameter4; // rax
  __int64 v14; // rbx
  ULONG_PTR v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  _DWORD *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 result; // rax

  v3 = *(unsigned int *)(a2 + 28);
  v4 = (_QWORD *)(a2 + 40);
  v5 = a3;
  v7 = a1;
  v8 = ((*(_QWORD *)(a2 + 40) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].Bitmap[0] )
    v5 = a3 | 2;
  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = CurrentPrcb->MmInternal;
  v11 = MmInternal[87];
  if ( !v11 )
    KeBugCheckEx(0x1Au, 0x441uLL, (ULONG_PTR)CurrentPrcb, 0LL, 0LL);
  v12 = (unsigned int)(v11 - 1);
  BugCheckParameter4 = KeGetCurrentThread();
  v14 = (__int64)&MmInternal[5150 * v12 + 96];
  v15 = *(_QWORD *)(v14 + 20592);
  if ( (struct _KTHREAD *)v15 != BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x442uLL, (ULONG_PTR)&MmInternal[5150 * v12 + 96], v15, (ULONG_PTR)BugCheckParameter4);
  if ( a2 != v14 + 4136 )
    KeBugCheckEx(0x1Au, 0x442uLL, (ULONG_PTR)&MmInternal[5150 * v12 + 96], a2, v14 + 4136);
  v16 = 0LL;
  if ( v3 )
  {
    v17 = v3;
    do
    {
      if ( (unsigned int)MiWsleFlush(a1, *v4 & 0xFFFFFFFFFFFFF000uLL, v5, v14) )
      {
        *(_QWORD *)(a2 + 8 * v16 + 40) = *v4;
        v16 = (unsigned int)(v16 + 1);
      }
      ++v4;
      --v17;
    }
    while ( v17 );
    v7 = a1;
  }
  v18 = v3 - *(unsigned int *)(v14 + 16488);
  if ( (_DWORD)v16 )
  {
    *(_QWORD *)(a2 + 32) = (unsigned int)v16;
    *(_DWORD *)(a2 + 28) = v16;
    MiFlushTbList(a2);
  }
  else
  {
    *(_WORD *)(a2 + 25) = 0;
    *(_DWORD *)(a2 + 28) = 0;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_DWORD *)(a2 + 16) &= 0xFFFFFFDB;
  }
  v19 = 0LL;
  if ( *(_DWORD *)(v14 + 16488) )
  {
    v20 = (_DWORD *)(v14 + 16496);
    do
    {
      *v20 = MiWsleFree(v7, *(_QWORD *)v20 & 0xFFFFFFFFFFFFF000uLL, v5, *((_QWORD *)v20 - 514));
      ++v19;
      v21 = *(unsigned int *)(v14 + 16488);
      v20 += 2;
    }
    while ( v19 < v21 );
    if ( (_DWORD)v21 )
    {
      *(_QWORD *)(v14 + 16480) = v8 << 25 >> 16 << 25 >> 16;
      MiRemoveWsleList(v7, v14);
    }
  }
  *(_DWORD *)(v14 + 12376) = 0;
  result = v18;
  *(_DWORD *)(v14 + 16488) = 0;
  return result;
}
