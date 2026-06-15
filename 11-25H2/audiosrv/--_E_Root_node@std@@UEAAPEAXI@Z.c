/*
 * XREFs of ??_E_Root_node@std@@UEAAPEAXI@Z @ 0x18013BD60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_Root_node *__fastcall std::_Root_node::`vector deleting destructor'(std::_Root_node *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
