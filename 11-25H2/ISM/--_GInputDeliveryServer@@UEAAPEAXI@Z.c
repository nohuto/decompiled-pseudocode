/*
 * XREFs of ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x18015C780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1InputDeliveryServer@@UEAA@XZ @ 0x18015C710 (--1InputDeliveryServer@@UEAA@XZ.c)
 */

InputDeliveryServer *__fastcall InputDeliveryServer::`scalar deleting destructor'(InputDeliveryServer *this, char a2)
{
  InputDeliveryServer::~InputDeliveryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
