/*
 * XREFs of ??_E_Node_if@std@@UEAAPEAXI@Z @ 0x1801447B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_Node_if@std@@UEAA@XZ @ 0x1801444EC (--1_Node_if@std@@UEAA@XZ.c)
 */

std::_Node_if *__fastcall std::_Node_if::`vector deleting destructor'(std::_Node_if *this, char a2)
{
  std::_Node_if::~_Node_if(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
