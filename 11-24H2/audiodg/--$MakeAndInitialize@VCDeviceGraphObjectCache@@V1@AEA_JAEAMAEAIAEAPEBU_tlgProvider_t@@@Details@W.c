/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140022B0C
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140022D10 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019CC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001C6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140033834 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 *     ??0CDeviceGraphObjectCache@@QEAA@XZ @ 0x140045974 (--0CDeviceGraphObjectCache@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectCache,CDeviceGraphObjectCache,__int64 &,float &,unsigned int &,_tlgProvider_t const * &>(
        volatile signed __int64 **a1,
        __int64 *a2,
        float *a3,
        unsigned int *a4,
        const struct _tlgProvider_t **a5)
{
  CDeviceGraphObjectCache *v9; // rax
  volatile signed __int64 *v10; // rbx
  volatile int *v11; // rdx
  int v12; // edi
  signed __int64 v13; // rax
  signed __int64 v15; // rtt

  *a1 = 0LL;
  v9 = (CDeviceGraphObjectCache *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = (volatile signed __int64 *)CDeviceGraphObjectCache::CDeviceGraphObjectCache(v9);
    v12 = CDeviceGraphObjectCache::RuntimeClassInitialize((CDeviceGraphObjectCache *)v10, *a2, *a3, *a4, *a5);
    if ( v12 < 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release((__int64)v10);
    }
    else
    {
      if ( v10 )
      {
        v13 = *((_QWORD *)v10 + 5);
        while ( v13 >= 0 )
        {
          if ( (_DWORD)v13 != 0x7FFFFFFF )
          {
            v15 = v13;
            v13 = _InterlockedCompareExchange64(v10 + 5, v13 + 1, v13);
            if ( v15 != v13 )
              continue;
          }
          goto LABEL_7;
        }
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v11);
      }
LABEL_7:
      *a1 = v10;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release((__int64)v10);
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
