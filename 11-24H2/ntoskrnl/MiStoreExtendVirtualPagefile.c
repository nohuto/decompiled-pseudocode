/*
 * XREFs of MiStoreExtendVirtualPagefile @ 0x1404F6510
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiPageFileNoFreeSpace @ 0x1404D0994 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     MiIsStoreVirtualPagefileFull @ 0x1404A2F68 (MiIsStoreVirtualPagefileFull.c)
 *     MiFinishPageFileExtension @ 0x1404CB678 (MiFinishPageFileExtension.c)
 *     MiAttemptChangePagingFileMaximum @ 0x140679D30 (MiAttemptChangePagingFileMaximum.c)
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
  v5 = dword_140FC420C;
  v6 = (unsigned int)a2[1];
  v7 = *a2;
  if ( (unsigned int)dword_140FC420C < 0x4000 )
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
