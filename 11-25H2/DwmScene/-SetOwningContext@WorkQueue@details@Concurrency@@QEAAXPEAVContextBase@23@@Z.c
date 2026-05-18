/*
 * XREFs of ?SetOwningContext@WorkQueue@details@Concurrency@@QEAAXPEAVContextBase@23@@Z @ 0x18002AD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::WorkQueue::SetOwningContext(
        Concurrency::details::WorkQueue *this,
        struct Concurrency::details::ContextBase *a2)
{
  *((_QWORD *)this + 19) = a2;
}
