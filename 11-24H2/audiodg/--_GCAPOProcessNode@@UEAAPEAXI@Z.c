/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x140037430
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x14003746C (--1CAPOProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, char a2)
{
  CAPOProcessNode::~CAPOProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
