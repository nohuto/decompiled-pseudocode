/*
 * XREFs of ??_GCBridgeSourceEndpoint@@UEAAPEAXI@Z @ 0x140067460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBridgeSourceEndpoint@@UEAA@XZ @ 0x140067398 (--1CBridgeSourceEndpoint@@UEAA@XZ.c)
 */

CBridgeSourceEndpoint *__fastcall CBridgeSourceEndpoint::`scalar deleting destructor'(
        CBridgeSourceEndpoint *this,
        char a2)
{
  CBridgeSourceEndpoint::~CBridgeSourceEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
