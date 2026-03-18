/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x140192350
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1400DF354 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     EditionIsPointerQueuedMessageCoalescable @ 0x1401292EC (EditionIsPointerQueuedMessageCoalescable.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v10; // ebx
  __int64 (*v11)(void); // rax
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _OWORD v19[7]; // [rsp+30h] [rbp-78h] BYREF

  v10 = 0;
  v11 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 6592LL);
  if ( v11 )
    v12 = v11();
  else
    v12 = -1073741637;
  if ( v12 >= 0 )
  {
    v13 = a1[1];
    v19[0] = *a1;
    v19[2] = a1[2];
    v14 = a1[4];
    v19[1] = v13;
    v15 = a1[3];
    v19[4] = v14;
    v16 = a1[6];
    v19[3] = v15;
    v17 = a1[5];
    v19[6] = v16;
    v19[5] = v17;
    return (unsigned int)EditionIsPointerQueuedMessageCoalescable(v19, a2, a3, a4, a5, a6);
  }
  return v10;
}
