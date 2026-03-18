/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1402FF5D0
 * Callers:
 *     DifExReleaseResourceForThreadLiteWrapper @ 0x140614E40 (DifExReleaseResourceForThreadLiteWrapper.c)
 *     CcUnpinDataForThread @ 0x1406FAE30 (CcUnpinDataForThread.c)
 * Callees:
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x14046B870 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  USHORT Flag; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
  }
  else
  {
    ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
  }
}
