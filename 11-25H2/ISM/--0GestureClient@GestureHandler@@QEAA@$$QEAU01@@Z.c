/*
 * XREFs of ??0GestureClient@GestureHandler@@QEAA@$$QEAU01@@Z @ 0x1801442A0
 * Callers:
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x18014402C (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x1801441B8 (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ?AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z @ 0x180144520 (-AddGestureClient@GestureHandler@@QEAAX_KPEAVDragManagerClientProxy@@PEAVInputSite@@2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureHandler::GestureClient::GestureClient(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // r9

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a1 + 8 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 8) = *v2;
    *v2 = 0LL;
  }
  v3 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 16) = *v3;
    *v3 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  return a1;
}
