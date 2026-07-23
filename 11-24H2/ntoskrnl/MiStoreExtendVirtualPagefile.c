/*
 * XREFs of MiStoreExtendVirtualPagefile @ 0x1404F3E10
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiPageFileNoFreeSpace @ 0x14046F624 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     MiIsStoreVirtualPagefileFull @ 0x14049DEC8 (MiIsStoreVirtualPagefileFull.c)
 *     MiFinishPageFileExtension @ 0x1404C4B98 (MiFinishPageFileExtension.c)
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 */

__int64 __fastcall MiStoreExtendVirtualPagefile(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // esi
  __int64 v6; // r8
  int v7; // r14d
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  ULONG v10; // r8d

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = dword_140FC520C;
  v6 = (unsigned int)a2[1];
  v7 = *a2;
  if ( (unsigned int)dword_140FC520C < 0x4000 )
    v5 = 0x4000;
  if ( (int)v6 - v7 < v5 )
  {
    v8 = *(unsigned int *)(a1 + 1212);
    v9 = (*(_QWORD *)(a1 + 16840) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL;
    if ( v9 <= v8 )
      v8 = (unsigned int)v9;
    if ( (unsigned int)v8 > (unsigned int)v6 && !*(_DWORD *)(a1 + 1232) )
    {
      if ( (int)v6 + 0x40000 <= (unsigned int)v8 )
        v8 = (unsigned int)(v6 + 0x40000);
      if ( (int)MiAttemptChangePagingFileMaximum(a2, v8, v6) < 0 )
      {
        *(_DWORD *)(a1 + 1232) = 1;
        KiSetTimerEx(a1 + 1240, MiFiveSeconds.QuadPart, 0, 0, 0LL);
        if ( (unsigned int)MiIsStoreVirtualPagefileFull((_DWORD *)a1) )
          KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
      }
      LODWORD(v6) = a2[1];
    }
  }
  v10 = v6 - v7;
  if ( v10 )
  {
    if ( v5 <= v10 )
      v10 = v5;
    MiFinishPageFileExtension(a1, (__int64)a2, v10);
  }
  return KeLeaveCriticalRegionThread();
}
