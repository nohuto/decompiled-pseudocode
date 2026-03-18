/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1401057E8
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x1401057C0 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiIsMmIoFlipPending @ 0x1400340E0 (VidSchiIsMmIoFlipPending.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003AC68 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140045F40 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al
  DXGADAPTER **v3; // rdi
  _DWORD v4[40]; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v5; // [rsp+F0h] [rbp+8h] BYREF

  memset(v4, 0, sizeof(v4));
  v4[4] = 3;
  v4[5] = 1;
  *((_QWORD *)a1 + 235) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)((char *)a1 + 1840));
  v5 = 0;
  result = VidSchiIsMmIoFlipPending((__int64)a1, &v5);
  if ( result )
  {
    v3 = (DXGADAPTER **)((char *)a1 + 16);
    do
    {
      if ( *((_BYTE *)a1 + 59) )
      {
        v3 = (DXGADAPTER **)((char *)a1 + 16);
        DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), v5);
        VidSchiSetInterruptTargetPresentId(a1, v5, 0, 0LL, 1, 0);
      }
      VidSchiProfilePerformanceTick(16, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent((__int64)a1, (__int64)v4, -1);
      VidSchiProfilePerformanceTick(17, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( *((_BYTE *)a1 + 59) )
        DXGADAPTER::DecrementVSyncWaiter(*v3, v5);
      else
        v3 = (DXGADAPTER **)((char *)a1 + 16);
      v5 = 0;
      result = VidSchiIsMmIoFlipPending((__int64)a1, &v5);
    }
    while ( result );
  }
  return result;
}
