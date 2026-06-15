/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x140096F72
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SpatialBlock *__fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>((SpatialBlock **)(a2 + 72));
}
