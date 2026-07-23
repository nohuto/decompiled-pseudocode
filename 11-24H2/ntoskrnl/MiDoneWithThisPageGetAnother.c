/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140A5F8D4
 * Callers:
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 * Callees:
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x1404317F0 (MiGetNextPageColor.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, _KPROCESS *a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int NextPageColor; // ebx
  __int64 ProcessPartition; // rbp
  __int64 i; // rcx
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2 + 1024;
  v5 = *a1;
  v12 = 0LL;
  if ( v5 != -1 )
    MiFinishLastForkPageTable(a3, v5, (__int64)a3, a4);
  MiInitializePageColorBase(v4, 3, 0, (__int64)&v12);
  NextPageColor = MiGetNextPageColor((__int64)&v12);
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
