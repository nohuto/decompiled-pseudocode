/*
 * XREFs of ?QueryPerformanceCounter@QpcUtils@@YA_KXZ @ 0x180174B74
 * Callers:
 *     ?DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z @ 0x180174654 (-DecideBufferToDispatch@CComputeScribbleScheduler@@AEAAJPEAPEAVCComputeScribbleFramebuffer@@0@Z.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall QpcUtils::QueryPerformanceCounter(QpcUtils *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  return PerformanceCount;
}
