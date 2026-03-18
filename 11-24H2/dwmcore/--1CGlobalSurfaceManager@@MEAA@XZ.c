/*
 * XREFs of ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18025E458
 * Callers:
 *     ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x18025E680 (--_GCGlobalSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV12@AEAV?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@0@@Z @ 0x180157F8C (--$_Destroy_range@V-$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@YAXPEAVAdapterInf.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18025CDF0 (--1CMmcssTask@@QEAA@XZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18025E4F8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CGlobalSurfaceManager::~CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 63);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(v2, *((_QWORD *)this + 64));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 63),
      8 * ((__int64)(*((_QWORD *)this + 65) - *((_QWORD *)this + 63)) >> 3));
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 62);
  CMmcssTask::~CMmcssTask((CGlobalSurfaceManager *)((char *)this + 408));
  CLegacySurfaceManager::~CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 152));
  CSurfaceManager::~CSurfaceManager(this);
}
