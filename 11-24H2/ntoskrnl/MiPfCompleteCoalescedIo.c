/*
 * XREFs of MiPfCompleteCoalescedIo @ 0x140351964
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x140351AD0 (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140352BC0 (MmWaitForCacheManagerPrefetch.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiRetardMdl @ 0x140258D7C (MiRetardMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfCompleteCoalescedIo(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int *v5; // r14
  ULONG_PTR v6; // r9
  ULONG_PTR v7; // r8
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx

  v2 = 0;
  KeWaitForSingleObject((PVOID)(BugCheckParameter4 + 32), WrPageIn, 0, 0, 0LL);
  v5 = (unsigned int *)(BugCheckParameter4 + 80);
  if ( _bittest16((const signed __int16 *)(BugCheckParameter4 + 282), 9u) )
  {
    MiRetardMdl(BugCheckParameter4 + 272);
    *(_QWORD *)(BugCheckParameter4 + 88) = 0LL;
    *v5 = -1073741670;
  }
  if ( (*(_BYTE *)(BugCheckParameter4 + 282) & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)(BugCheckParameter4 + 296), (PMDL)(BugCheckParameter4 + 272));
  if ( (*v5 & 0x80000000) == 0 )
  {
    v6 = *(unsigned int *)(BugCheckParameter4 + 312);
    v7 = *(_QWORD *)(BugCheckParameter4 + 88);
    if ( v7 != v6 )
      KeBugCheckEx(0x7Au, 5uLL, v7, v6, BugCheckParameter4);
  }
  else
  {
    v2 = *v5;
  }
  v8 = (_QWORD *)(BugCheckParameter4 + 16);
  while ( 1 )
  {
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
      break;
    if ( (_QWORD *)v9[1] != v8 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    *(_QWORD *)(v10 + 8) = v8;
    *((_DWORD *)v9 + 20) = *v5;
    if ( (*v5 & 0x80000000) != 0 )
      v11 = 0LL;
    else
      v11 = *((unsigned int *)v9 + 46);
    v9[11] = v11;
    KeSetEvent((PRKEVENT)(v9 + 4), 0, 0);
    v12 = MiPfCompleteInPageSupport(v9, a2);
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073740748 )
      v2 = v12;
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter4, 0);
  return v2;
}
