/*
 * XREFs of ??1DataSourcePropertySet@@QEAA@XZ @ 0x18027C22C
 * Callers:
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x18027C254 (--1DataSourceProxy@@UEAA@XZ.c)
 * Callees:
 *     ??1?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ @ 0x180206B24 (--1-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA@XZ.c)
 */

void __fastcall DataSourcePropertySet::~DataSourcePropertySet(DataSourcePropertySet *this)
{
  PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::~PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>((__int64)this + 64);
  std::_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>::~_Hash<std::_Uset_traits<IBatchProcessingCompleteListener *,std::_Uhash_compare<IBatchProcessingCompleteListener *,std::hash<IBatchProcessingCompleteListener *>,std::equal_to<IBatchProcessingCompleteListener *>>,std::allocator<IBatchProcessingCompleteListener *>,0>>((__int64)this);
}
