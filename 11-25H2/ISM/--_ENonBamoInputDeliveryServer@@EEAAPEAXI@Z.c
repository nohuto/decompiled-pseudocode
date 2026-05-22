/*
 * XREFs of ??_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z @ 0x18015CF30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1NonBamoInputDeliveryServer@@EEAA@XZ @ 0x18015CE3C (--1NonBamoInputDeliveryServer@@EEAA@XZ.c)
 */

NonBamoInputDeliveryServer *__fastcall NonBamoInputDeliveryServer::`vector deleting destructor'(
        NonBamoInputDeliveryServer *this,
        char a2)
{
  NonBamoInputDeliveryServer::~NonBamoInputDeliveryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x130);
  return this;
}
