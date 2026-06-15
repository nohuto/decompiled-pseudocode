/*
 * XREFs of ??_G_Node_rep@std@@UEAAPEAXI@Z @ 0x18013BD20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_Node_rep *__fastcall std::_Node_rep::`scalar deleting destructor'(std::_Node_rep *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
