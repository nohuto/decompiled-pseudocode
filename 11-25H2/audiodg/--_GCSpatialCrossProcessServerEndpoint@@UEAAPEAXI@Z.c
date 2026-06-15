/*
 * XREFs of ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x140089960
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14004E86C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::`scalar deleting destructor'(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this, a2, a3);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
