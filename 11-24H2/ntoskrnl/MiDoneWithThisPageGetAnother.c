/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140A66AF0
 * Callers:
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 * Callees:
 *     MiWaitForFreePage @ 0x1402CF708 (MiWaitForFreePage.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetNextPageColor @ 0x14043D550 (MiGetNextPageColor.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, _KPROCESS *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int NextPageColor; // ebx
  __int64 ProcessPartition; // rbp
  __int64 i; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2 + 1024;
  v4 = *a1;
  v11 = 0LL;
  if ( v4 != -1 )
    MiFinishLastForkPageTable(a3, v4);
  MiInitializePageColorBase(v3, 3, 0, (__int64)&v11);
  NextPageColor = MiGetNextPageColor((__int64)&v11);
  ProcessPartition = MiGetProcessPartition((__int64)a3);
  for ( i = ProcessPartition; ; i = ProcessPartition )
  {
    result = MiGetPage(i, NextPageColor, 0x30u);
    *a1 = result;
    if ( result != -1 )
      break;
    MiWaitForFreePage(ProcessPartition, 0);
  }
  return result;
}
