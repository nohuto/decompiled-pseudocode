/*
 * XREFs of MiFreeWsleList @ 0x140287894
 * Callers:
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiAgePteWorker @ 0x14022FCA0 (MiAgePteWorker.c)
 *     NtUnlockVirtualMemory @ 0x1402333D0 (NtUnlockVirtualMemory.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402BB5D0 (MiTrimSharedPageFromViews.c)
 *     MiAgeTrimListsTail @ 0x1402E36B0 (MiAgeTrimListsTail.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiTrimWorkingSetBuildup @ 0x14037D1A0 (MiTrimWorkingSetBuildup.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1403AAA70 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeWorkingSetTail @ 0x1403AAB80 (MiAgeWorkingSetTail.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     MiEmptyWorkingSetTail @ 0x140463F60 (MiEmptyWorkingSetTail.c)
 *     MiConvertAndFlushWsleVas @ 0x140486DF0 (MiConvertAndFlushWsleVas.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 * Callees:
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, ULONG_PTR a2, char a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r14
  char v5; // r13
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
    MiFlushTbList(a2, MmInternal);
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
