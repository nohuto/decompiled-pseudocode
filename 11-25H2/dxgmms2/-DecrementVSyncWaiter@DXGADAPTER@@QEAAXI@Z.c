/*
 * XREFs of ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003AC68
 * Callers:
 *     VidSchiFlushPendingHWSubmittedFlips @ 0x14003E494 (VidSchiFlushPendingHWSubmittedFlips.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1401057E8 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiFlushPendingFlips @ 0x14010845C (VidSchiFlushPendingFlips.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140019050 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::DecrementVSyncWaiter(DXGADAPTER *this, int a2)
{
  __int64 v2; // rdi

  v2 = a2 & (unsigned int)-((*((_DWORD *)this + 744) & 0x10) != 0);
  if ( (unsigned int)v2 < 0x10 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)this + v2 + 788) < 0 )
    {
      WdLogSingleEntry5(0LL, 275LL, 37LL, this, *((unsigned int *)this + v2 + 788), 0LL);
      WdLogGlobalForLineNumber = 2754;
    }
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqq_EtwWriteTransfer();
  }
}
