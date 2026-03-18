/*
 * XREFs of ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x18026DDD0
 * Callers:
 *     ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x18026F5A0 (-OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ @ 0x18026DC40 (--1ConnectionIndirector@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

Microsoft::BamoImpl::ConnectionIndirector *__fastcall Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        char a2)
{
  Microsoft::BamoImpl::ConnectionIndirector::~ConnectionIndirector(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
