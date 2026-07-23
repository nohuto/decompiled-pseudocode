/*
 * XREFs of MiPrefetchRestOfCluster @ 0x1403DBB74
 * Callers:
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 *v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  char EffectivePagePriorityThread; // al
  __int64 v8; // r11
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2[3];
  if ( v2 < a2[2] )
  {
    v3 = (unsigned __int64 *)(a2[1] + 16 * v2);
    v4 = (*(unsigned int *)(a1 + 184) + *(_QWORD *)(a1 + 224) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v5 = *v3;
    if ( v4 >= *v3 )
    {
      v6 = v3[1];
      if ( v4 < v6 + v5 )
      {
        v11[0] = v4;
        v11[1] = v5 + v6 - v4;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
        v9 = 1LL;
        if ( v10 < 0xFFFF800000000000uLL )
          v9 = v8;
        MiPrefetchVirtualMemory(
          1uLL,
          (__int64)v11,
          v9,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x8000)));
      }
    }
  }
}
