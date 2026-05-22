/*
 * XREFs of ??_EMPCManagerConnection@@UEAAPEAXI@Z @ 0x1800B6190
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerConnection@@UEAA@XZ @ 0x1800B5F94 (--1MPCManagerConnection@@UEAA@XZ.c)
 */

MPCManagerConnection *__fastcall MPCManagerConnection::`vector deleting destructor'(
        MPCManagerConnection *this,
        char a2)
{
  MPCManagerConnection::~MPCManagerConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
