/*
 * XREFs of ??_GSnapServiceProvider@@UEAAPEAXI@Z @ 0x1805A8B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapServiceProvider@@UEAA@XZ @ 0x1805A8B1C (--1SnapServiceProvider@@UEAA@XZ.c)
 */

SnapServiceProvider *__fastcall SnapServiceProvider::`scalar deleting destructor'(SnapServiceProvider *this, char a2)
{
  SnapServiceProvider::~SnapServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
