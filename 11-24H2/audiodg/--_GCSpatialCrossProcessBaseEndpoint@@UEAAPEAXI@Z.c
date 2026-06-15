/*
 * XREFs of ??_GCSpatialCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140089360
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140055860 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSpatialCrossProcessBaseEndpoint *__fastcall CSpatialCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CSpatialCrossProcessBaseEndpoint *this,
        char a2)
{
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
