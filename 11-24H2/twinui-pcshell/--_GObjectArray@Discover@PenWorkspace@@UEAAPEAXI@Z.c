/*
 * XREFs of ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1803EECD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ObjectArray@Discover@PenWorkspace@@UEAA@XZ @ 0x1803EEAB0 (--1ObjectArray@Discover@PenWorkspace@@UEAA@XZ.c)
 */

PenWorkspace::Discover::ObjectArray *__fastcall PenWorkspace::Discover::ObjectArray::`scalar deleting destructor'(
        PenWorkspace::Discover::ObjectArray *this,
        char a2)
{
  PenWorkspace::Discover::ObjectArray::~ObjectArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
