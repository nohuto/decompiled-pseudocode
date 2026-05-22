/*
 * XREFs of ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180141490
 * Callers:
 *     ??1GestureHandler@@QEAA@XZ @ 0x180141C08 (--1GestureHandler@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UGestureClient@GestureHandler@@@?$vector@UGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@AEAAPEAUGestureClient@GestureHandler@@QEAU23@$$QEAU23@@Z @ 0x1801461FC (--$_Emplace_reallocate@UGestureClient@GestureHandler@@@-$vector@UGestureClient@GestureHandler@@V.c)
 *     ??$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAPEAUGestureClient@GestureHandler@@QEAU12@0PEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180146388 (--$_Uninitialized_move@PEAUGestureClient@GestureHandler@@V-$allocator@UGestureClient@GestureHand.c)
 *     ?RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x180146C80 (-RemoveGestureClient@GestureHandler@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     _std::vector_GestureHandler::GestureClient_std::allocator_GestureHandler::GestureClient___::_Emplace_reallocate_GestureHandler::GestureClient__::_1_::catch$0 @ 0x1801D7514 (_std--vector_GestureHandler--GestureClient_std--allocator_GestureHandler--GestureClient___--_Emp.c)
 * Callees:
 *     ??1GestureClient@GestureHandler@@QEAA@XZ @ 0x180141BA0 (--1GestureClient@GestureHandler@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
        GestureHandler::GestureClient *this,
        GestureHandler::GestureClient *a2)
{
  GestureHandler::GestureClient *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      GestureHandler::GestureClient::~GestureClient(v3);
      v3 = (GestureHandler::GestureClient *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
}
