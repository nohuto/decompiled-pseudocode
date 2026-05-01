/*
 * XREFs of ??_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z @ 0x18030D550
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x1802165AC (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ApplicationViewManagement::CGlobals *__fastcall ApplicationViewManagement::CGlobals::`scalar deleting destructor'(
        ApplicationViewManagement::CGlobals *this,
        char a2)
{
  ApplicationViewManagement::CGlobals::~CGlobals(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
