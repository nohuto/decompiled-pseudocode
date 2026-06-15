/*
 * XREFs of ??_ECBridgeSourceProcessNode@@UEAAPEAXI@Z @ 0x14006C420
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14003995C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CBridgeSourceProcessNode *__fastcall CBridgeSourceProcessNode::`vector deleting destructor'(
        CBridgeSourceProcessNode *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CStreamProcessNode::~CStreamProcessNode(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
