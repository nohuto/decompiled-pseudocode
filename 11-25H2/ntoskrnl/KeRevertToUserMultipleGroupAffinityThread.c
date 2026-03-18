/*
 * XREFs of KeRevertToUserMultipleGroupAffinityThread @ 0x1404CF0AC
 * Callers:
 *     PsRevertToUserMultipleGroupAffinityThread @ 0x1405D9620 (PsRevertToUserMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F3FBC (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiSetSystemAffinityThread @ 0x140278684 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KeRevertToUserMultipleGroupAffinityThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdi
  int MiscFlags; // eax
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int UserIdealProcessor; // ebp
  unsigned __int16 Count; // dx
  unsigned __int16 *v9; // rsi
  char v10; // al
  char v11; // al
  struct _SINGLE_LIST_ENTRY *v12; // r8
  char v13; // al
  struct _KAFFINITY_EX *v14; // rsi
  char *v15; // rdx
  int v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( CurrentThread->ThreadLock );
    }
    Next = CurrentThread->SystemAffinityTokenListHead.Next;
    UserIdealProcessor = 2048;
    Count = KeActiveProcessors.Count;
    if ( Next )
      CurrentThread->SystemAffinityTokenListHead = (_SINGLE_LIST_ENTRY)Next->Next;
    v9 = *(unsigned __int16 **)(v2 + 24);
    if ( *v9 > Count
      || v9[1] < Count
      || (v10 = *(_BYTE *)(v2 + 19), (v10 & 1) == 0)
      || Next != (struct _SINGLE_LIST_ENTRY *)v2 )
    {
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
    }
    if ( *(_BYTE *)(v2 + 18) == 1 )
      *(_BYTE *)(v2 + 18) = v10 & 2;
    memset_0(v9 + 4, 0, 8LL * *v9);
    *v9 = 1;
    v11 = *(_BYTE *)(v2 + 18);
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        if ( (*(_BYTE *)(v2 + 19) & 2) == 0 )
          KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
        KeAddGroupAffinityEx(*(unsigned __int16 **)(v2 + 24), *(_WORD *)(v2 + 16), *(_QWORD *)(v2 + 8));
      }
    }
    else
    {
      v12 = CurrentThread->SystemAffinityTokenListHead.Next;
      if ( v12 )
      {
        v13 = BYTE2(v12[2].Next);
        if ( v13 && v13 != 2 )
          KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
        KiCopyAffinityEx(
          *(struct _KAFFINITY_EX **)(v2 + 24),
          *(_WORD *)(*(_QWORD *)(v2 + 24) + 2LL),
          (struct _KAFFINITY_EX *)v12[3].Next);
      }
    }
    v14 = *(struct _KAFFINITY_EX **)(v2 + 24);
    if ( (unsigned int)KeIsEmptyAffinityEx(&v14->Count) )
    {
      KiCopyAffinityEx(v14, v14->Size, CurrentThread->UserAffinity);
      CurrentThread->MiscFlags &= ~8u;
      UserIdealProcessor = CurrentThread->UserIdealProcessor;
    }
    v15 = *(char **)(v2 + 24);
    v18 = 0LL;
    KiSetSystemAffinityThread(CurrentPrcb, v15, 0LL, UserIdealProcessor, (__int64)&v18);
    LOBYTE(MiscFlags) = KiProcessDeferredReadyList(CurrentPrcb, (_QWORD **)&v18, CurrentIrql);
  }
  return MiscFlags;
}
