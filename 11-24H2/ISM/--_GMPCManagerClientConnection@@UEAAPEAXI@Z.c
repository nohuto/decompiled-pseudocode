/*
 * XREFs of ??_GMPCManagerClientConnection@@UEAAPEAXI@Z @ 0x1801617B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerClientConnection@@UEAA@XZ @ 0x180161388 (--1MPCManagerClientConnection@@UEAA@XZ.c)
 */

MPCManagerClientConnection *__fastcall MPCManagerClientConnection::`scalar deleting destructor'(
        MPCManagerClientConnection *this,
        char a2)
{
  MPCManagerClientConnection::~MPCManagerClientConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
