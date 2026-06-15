/*
 * XREFs of ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x14004C1E0
 * Callers:
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x140005A6C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 * Callees:
 *     ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x140038C04 (--0CDeviceGraphObjectCacheManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CDeviceGraphObjectCacheManager **__fastcall Microsoft::WRL::Details::Make<CDeviceGraphObjectCacheManager,>(
        CDeviceGraphObjectCacheManager **a1)
{
  CDeviceGraphObjectCacheManager *v2; // rax
  CDeviceGraphObjectCacheManager *v3; // rdi
  CDeviceGraphObjectCacheManager *v4; // rdi

  *a1 = 0LL;
  v2 = (CDeviceGraphObjectCacheManager *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    v4 = CDeviceGraphObjectCacheManager::CDeviceGraphObjectCacheManager(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CDeviceGraphObjectCacheManager *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
  }
  return a1;
}
