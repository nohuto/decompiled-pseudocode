/*
 * XREFs of rimReclaimHoldingFrame @ 0x14005640C
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x140056208 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1400563A0 (rimFindAndReclaimHoldingFrame.c)
 *     RIMRemoveHoldingFrame @ 0x140151764 (RIMRemoveHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x14017EEEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     rimFreePointerRawDataListWorker @ 0x140056464 (rimFreePointerRawDataListWorker.c)
 */

__int64 __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rcx
  __int64 result; // rax

  v3 = *(char **)(a3 + 72);
  if ( v3 )
  {
    GreDeleteFastMutex(v3);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  result = rimFreePointerRawDataListWorker(*(PVOID *)(a3 + 56));
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
  return result;
}
