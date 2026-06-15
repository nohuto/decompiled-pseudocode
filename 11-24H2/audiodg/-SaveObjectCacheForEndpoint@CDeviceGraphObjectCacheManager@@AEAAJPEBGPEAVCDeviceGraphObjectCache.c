/*
 * XREFs of ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x140038974
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140022D10 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x140038AB0 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceG.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBV?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@Z @ 0x140038B54 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@UIWeak.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint(
        CDeviceGraphObjectCacheManager *this,
        const unsigned __int16 *a2,
        struct CDeviceGraphObjectCache *a3)
{
  char *v5; // rbx
  int WeakReference; // eax
  unsigned int v7; // ebx
  char *v8; // rbx
  char *v9; // rcx
  char *v11; // rcx
  char *v12; // rcx
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v16; // [rsp+50h] [rbp+18h] BYREF
  char *v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = (char *)a3 + 16;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  WeakReference = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::GetWeakReference(
                    v5,
                    &v17);
  v7 = WeakReference;
  if ( WeakReference < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)WeakReference);
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v7;
  }
  try
  {
    v8 = v17;
    v16 = v17;
    if ( v17 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
    ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<IWeakReference>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<IWeakReference>>>::SetAt(
      (char *)this + 24,
      a2,
      &v16);
    if ( v8 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  catch ( ATL::CAtlException *v14 )
  {
    v13 = v14;
    if ( *(_DWORD *)v14 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v16) = *(_DWORD *)v13;
    v7 = (unsigned int)v16;
    if ( (int)v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x263,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v16);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v12 + 16LL))(v12, *(_QWORD *)v12);
      }
      return v7;
    }
  }
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
