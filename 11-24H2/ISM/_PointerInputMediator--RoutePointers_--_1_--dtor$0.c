/*
 * XREFs of _PointerInputMediator::RoutePointers_::_1_::dtor$0 @ 0x1801D2CCD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PointerInputMediator::RoutePointers_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>(a2 + 144);
}
