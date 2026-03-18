/*
 * XREFs of ??1SharedStateLayer@@QEAA@XZ @ 0x1801BF000
 * Callers:
 *     ??_GCBatchOptimizer@@QEAAPEAXI@Z @ 0x1801BEF90 (--_GCBatchOptimizer@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedStateLayer::~SharedStateLayer(SharedStateLayer *this)
{
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 4);
}
