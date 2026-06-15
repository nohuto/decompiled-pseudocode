/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140039AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcessNode@@UEAA@XZ @ 0x140039B0C (--1CProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  CProcessNode::~CProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
