/*
 * XREFs of ??_G_Node_assert@std@@UEAAPEAXI@Z @ 0x18013BC20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1_Node_assert@std@@UEAA@XZ @ 0x18013B9E4 (--1_Node_assert@std@@UEAA@XZ.c)
 */

struct std::_Node_base **__fastcall std::_Node_assert::`scalar deleting destructor'(
        struct std::_Node_base **this,
        char a2)
{
  std::_Node_assert::~_Node_assert(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
