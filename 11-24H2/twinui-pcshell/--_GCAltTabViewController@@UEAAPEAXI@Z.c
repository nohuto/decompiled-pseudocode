/*
 * XREFs of ??_GCAltTabViewController@@UEAAPEAXI@Z @ 0x1804B8960
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAltTabViewController@@UEAA@XZ @ 0x1804B8878 (--1CAltTabViewController@@UEAA@XZ.c)
 */

CAltTabViewController *__fastcall CAltTabViewController::`scalar deleting destructor'(
        CAltTabViewController *this,
        char a2)
{
  CAltTabViewController::~CAltTabViewController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
