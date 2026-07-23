/*
 * XREFs of MiPageNotZero @ 0x14067507C
 * Callers:
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1406B4330 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r10d
  unsigned int v5; // esi
  ULONG_PTR v6; // r9
  int v7; // r14d
  ULONG_PTR i; // r8
  ULONG_PTR v9; // rax
  ULONG v10; // r15d
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v12; // rbx

  _InterlockedAdd(&dword_140E302B8, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 4096LL;
  v7 = 0;
  for ( i = BugCheckParameter1; i < BugCheckParameter1 + 4096; i += 4LL )
  {
    if ( *(_DWORD *)i )
    {
      v9 = i - BugCheckParameter1;
      if ( v6 != 4096 )
        v9 = v6;
      ++v4;
      v6 = v9;
      if ( v4 != 1 )
        goto LABEL_11;
      v5 = i & 0xFFF;
      v7 = *(_DWORD *)i;
      if ( ((*(_DWORD *)i - 1) & *(_DWORD *)i) != 0 )
        goto LABEL_11;
    }
  }
  if ( v4 == 1 )
  {
    v10 = 299;
    v6 = 0LL;
    _InterlockedAdd(&dword_140E302B4, 1u);
    BugCheckParameter4 = 0LL;
    goto LABEL_12;
  }
LABEL_11:
  v10 = 295;
  BugCheckParameter4 = 4096LL;
LABEL_12:
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v10, BugCheckParameter1, BugCheckParameter2, v6, BugCheckParameter4);
  v12 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v12 + 320), 0, 0);
  if ( (ULONG *)v12 != &MiSystemPartition )
    KeSetEvent(qword_140E38E80, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140E3020C, 1, 0) )
  {
    stru_140E30220.List.Flink = 0LL;
    dword_140E30210 = v7;
    qword_140E30218 = v5 + (BugCheckParameter2 << 12);
    stru_140E30220.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_140E30220.Parameter = &dword_140E30208;
    dword_140E30208 = v10;
    ExQueueWorkItem(&stru_140E30220, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 4096LL);
}
