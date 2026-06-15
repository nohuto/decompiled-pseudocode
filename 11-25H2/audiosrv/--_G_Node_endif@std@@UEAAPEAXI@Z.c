/*
 * XREFs of ??_G_Node_endif@std@@UEAAPEAXI@Z @ 0x18013BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_Node_endif *__fastcall std::_Node_endif::`scalar deleting destructor'(std::_Node_endif *this, char a2)
{
  *(_QWORD *)this = &std::_Node_endif::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
