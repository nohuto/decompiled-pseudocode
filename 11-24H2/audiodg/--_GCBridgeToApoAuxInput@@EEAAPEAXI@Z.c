/*
 * XREFs of ??_GCBridgeToApoAuxInput@@EEAAPEAXI@Z @ 0x14005ED10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBridgeToApoAuxInput@@EEAA@XZ @ 0x14005ECA8 (--1CBridgeToApoAuxInput@@EEAA@XZ.c)
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
