/*
 * XREFs of KeRevertToUserMultipleGroupAffinityThread @ 0x1404C80DC
 * Callers:
 *     PsRevertToUserMultipleGroupAffinityThread @ 0x1405E2D90 (PsRevertToUserMultipleGroupAffinityThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KeRevertToUserMultipleGroupAffinityThread(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rdi
  int MiscFlags; // eax
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int UserIdealProcessor; // ebp
  unsigned __int16 Count; // dx
  unsigned __int16 *v10; // rsi
  char v11; // al
  char v12; // al
  struct _SINGLE_LIST_ENTRY *v13; // r8
  char v14; // al
  struct _KAFFINITY_EX *v15; // rsi
  char *v16; // rdx
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( CurrentThread->ThreadLock );
    }
    Next = CurrentThread->SystemAffinityTokenListHead.Next;
    UserIdealProcessor = 2048;
    Count = KeActiveProcessors.Count;
    if ( Next )
      CurrentThread->SystemAffinityTokenListHead = (_SINGLE_LIST_ENTRY)Next->Next;
    v10 = *(unsigned __int16 **)(v3 + 24);
    if ( *v10 > Count
      || v10[1] < Count
      || (v11 = *(_BYTE *)(v3 + 19), (v11 & 1) == 0)
      || Next != (struct _SINGLE_LIST_ENTRY *)v3 )
    {
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
    }
    if ( *(_BYTE *)(v3 + 18) == 1 )
      *(_BYTE *)(v3 + 18) = v11 & 2;
    memset_0(v10 + 4, 0, 8LL * *v10);
    *v10 = 1;
    v12 = *(_BYTE *)(v3 + 18);
    if ( v12 )
    {
      if ( v12 == 2 )
      {
        if ( (*(_BYTE *)(v3 + 19) & 2) == 0 )
          KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
        KeAddGroupAffinityEx(*(unsigned __int16 **)(v3 + 24), *(_WORD *)(v3 + 16), *(_QWORD *)(v3 + 8));
      }
    }
    else
    {
      v13 = CurrentThread->SystemAffinityTokenListHead.Next;
      if ( v13 )
      {
        v14 = BYTE2(v13[2].Next);
        if ( v14 && v14 != 2 )
          KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
        KiCopyAffinityEx(
          *(struct _KAFFINITY_EX **)(v3 + 24),
          *(_WORD *)(*(_QWORD *)(v3 + 24) + 2LL),
          (struct _KAFFINITY_EX *)v13[3].Next);
      }
    }
    v15 = *(struct _KAFFINITY_EX **)(v3 + 24);
    if ( (unsigned int)KeIsEmptyAffinityEx(&v15->Count) )
    {
      KiCopyAffinityEx(v15, v15->Size, CurrentThread->UserAffinity);
      CurrentThread->MiscFlags &= ~8u;
      UserIdealProcessor = CurrentThread->UserIdealProcessor;
    }
    v16 = *(char **)(v3 + 24);
    v19 = 0LL;
    KiSetSystemAffinityThread(CurrentPrcb, v16, 0LL, UserIdealProcessor, (struct _SINGLE_LIST_ENTRY *)&v19);
    LOBYTE(MiscFlags) = KiProcessDeferredReadyList(CurrentPrcb, (_QWORD **)&v19, CurrentIrql);
  }
  return MiscFlags;
}
