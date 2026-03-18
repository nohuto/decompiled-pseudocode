/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140A6ED60
 * Callers:
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 * Callees:
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiWaitForFreePage @ 0x1403BFC64 (MiWaitForFreePage.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiGetNextPageColor @ 0x1404432AC (MiGetNextPageColor.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
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
