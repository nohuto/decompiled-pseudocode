/*
 * XREFs of ??_GCBridgeToApoAuxInput@@EEAAPEAXI@Z @ 0x14005EE00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBridgeToApoAuxInput@@EEAA@XZ @ 0x14005ED98 (--1CBridgeToApoAuxInput@@EEAA@XZ.c)
 */

CBridgeToApoAuxInput *__fastcall CBridgeToApoAuxInput::`scalar deleting destructor'(
        CBridgeToApoAuxInput *this,
        char a2)
{
  CBridgeToApoAuxInput::~CBridgeToApoAuxInput(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
