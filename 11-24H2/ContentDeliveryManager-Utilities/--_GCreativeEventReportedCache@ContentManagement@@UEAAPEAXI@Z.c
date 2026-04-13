/*
 * XREFs of ??_GCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18004DC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CreativeEventReportedCache@ContentManagement@@UEAA@XZ @ 0x18004C798 (--1CreativeEventReportedCache@ContentManagement@@UEAA@XZ.c)
 */

ContentManagement::CreativeEventReportedCache *__fastcall ContentManagement::CreativeEventReportedCache::`scalar deleting destructor'(
        ContentManagement::CreativeEventReportedCache *this,
        char a2)
{
  ContentManagement::CreativeEventReportedCache::~CreativeEventReportedCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
