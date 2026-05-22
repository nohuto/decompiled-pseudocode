/*
 * XREFs of ??_EMPCConstantManagerClientPrincipal@@UEAAPEAXI@Z @ 0x180174990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCConstantManagerClientPrincipal@@UEAA@XZ @ 0x180174968 (--1MPCConstantManagerClientPrincipal@@UEAA@XZ.c)
 */

MPCConstantManagerClientPrincipal *__fastcall MPCConstantManagerClientPrincipal::`vector deleting destructor'(
        MPCConstantManagerClientPrincipal *this,
        char a2)
{
  MPCConstantManagerClientPrincipal::~MPCConstantManagerClientPrincipal(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
