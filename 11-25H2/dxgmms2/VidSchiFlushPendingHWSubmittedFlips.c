/*
 * XREFs of VidSchiFlushPendingHWSubmittedFlips @ 0x14003E494
 * Callers:
 *     VidSchiSuspendFlipQueues @ 0x1400E3A48 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x14003AC68 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140045F40 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1400ACD5C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingHWSubmittedFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  bool v8; // zf
  _QWORD v9[20]; // [rsp+38h] [rbp-49h] BYREF

  v3 = a2 + 3248;
  if ( *(_DWORD *)(a2 + 3248) )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[4]) |= 0x10u;
    v8 = *((_BYTE *)a1 + 59) == 0;
    LODWORD(v9[2]) = 3;
    v9[5] = v3;
    if ( !v8 )
    {
      DXGADAPTER::IncrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
      VidSchiSetInterruptTargetPresentId(a1, a3, 0, 0LL, 1, 0);
    }
    VidSchiWaitFlushCompletion(a1, v9, 23LL);
    if ( *((_BYTE *)a1 + 59) )
      DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a1 + 2), a3);
  }
  result = *(unsigned int *)(a2 + 3244);
  if ( (_DWORD)result )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[4]) |= 0x10u;
    LODWORD(v9[2]) = 1;
    v9[5] = a2 + 3244;
    return VidSchiWaitFlushCompletion(a1, v9, 23LL);
  }
  return result;
}
