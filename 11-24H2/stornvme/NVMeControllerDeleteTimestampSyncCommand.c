/*
 * XREFs of NVMeControllerDeleteTimestampSyncCommand @ 0x140022220
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

void *__fastcall NVMeControllerDeleteTimestampSyncCommand(__int64 *a1)
{
  _QWORD *v1; // rdi

  v1 = a1 + 192;
  if ( a1[192] )
  {
    NVMeFreeDmaBuffer((__int64)a1, 12288LL, a1 + 192, a1[193]);
    *v1 = 0LL;
    a1[193] = 0LL;
  }
  return memset(a1 + 176, 0, 0x80uLL);
}
