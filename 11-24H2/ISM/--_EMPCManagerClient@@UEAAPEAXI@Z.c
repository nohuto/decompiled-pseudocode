/*
 * XREFs of ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180161770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCManagerClient@@UEAA@XZ @ 0x1801612FC (--1MPCManagerClient@@UEAA@XZ.c)
 */

MPCManagerClient *__fastcall MPCManagerClient::`vector deleting destructor'(MPCManagerClient *this, char a2)
{
  MPCManagerClient::~MPCManagerClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x6C8);
  return this;
}
