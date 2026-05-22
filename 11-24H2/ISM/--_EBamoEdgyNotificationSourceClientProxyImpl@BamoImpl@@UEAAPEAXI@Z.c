/*
 * XREFs of ??_EBamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180114750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180114338 (--1BamoEdgyNotificationSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *__fastcall BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoEdgyNotificationSourceClientProxyImpl *this,
        char a2)
{
  BamoImpl::BamoEdgyNotificationSourceClientProxyImpl::~BamoEdgyNotificationSourceClientProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
