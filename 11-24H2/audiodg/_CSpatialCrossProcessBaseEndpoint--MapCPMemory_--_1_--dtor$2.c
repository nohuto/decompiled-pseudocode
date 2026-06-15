/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$2 @ 0x140096FC6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SpatialBlock *__fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>((SpatialBlock **)(a2 + 128));
}
