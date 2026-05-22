/*
 * XREFs of ??_GMPCConstantManagerClient@@UEAAPEAXI@Z @ 0x18016CD00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x18016C020 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 */

MPCConstantManagerClient *__fastcall MPCConstantManagerClient::`scalar deleting destructor'(
        MPCConstantManagerClient *this,
        char a2)
{
  MPCConstantManagerClient::~MPCConstantManagerClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
