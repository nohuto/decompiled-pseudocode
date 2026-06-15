/*
 * XREFs of ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140023010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001C9A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 *     ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140022C48 (-GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectC.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140022E0C (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023938 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140023F44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1400384EC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObje.c)
 *     ?SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache@@@Z @ 0x140038C74 (-SaveObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@AEAAJPEBGPEAVCDeviceGraphObjectCache.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint(
        CDeviceGraphObjectCacheManager *this,
        const unsigned __int16 *a2,
        struct OBJECTCACHE_INITIALIZATION_PARAMS *a3,
        struct IDeviceGraphObjectCache **a4)
{
  const wchar_t *v7; // rax
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // edi
  _DWORD *v12; // rcx
  RTL_SRWLOCK *v13; // rdi
  struct IDeviceGraphObjectCache *ObjectCacheForEndpoint_UnderLock; // rax
  int v16; // eax
  unsigned int v17; // ebx
  struct CDeviceGraphObjectCache *v18; // rbx
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  unsigned int v22; // esi
  struct IDeviceGraphObjectCache *v23; // [rsp+30h] [rbp-D0h] BYREF
  struct CDeviceGraphObjectCache *v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v25[104]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  *a4 = 0LL;
  v7 = L"1";
  if ( !*((_DWORD *)a3 + 4) )
    v7 = (const wchar_t *)L"0";
  v8 = StringCchPrintfW(v25, 0x64uLL, L"%s%s", a2, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)v8);
    return v11;
  }
  else
  {
    v12 = (_DWORD *)*((_QWORD *)this + 13);
    if ( *v12 > 4u )
    {
      v24 = (struct CDeviceGraphObjectCache *)v25;
      v23 = *(struct IDeviceGraphObjectCache **)a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        (_DWORD)v12,
        (unsigned int)&unk_1400B06B6,
        v9,
        v10,
        (__int64)&v23,
        (__int64)&v24);
    }
    v13 = (RTL_SRWLOCK *)((char *)this + 96);
    AcquireSRWLockShared((PSRWLOCK)this + 12);
    *a4 = CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(this, v25);
    if ( this != (CDeviceGraphObjectCacheManager *)-96LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 12);
    if ( *a4 )
      return 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 12);
    ObjectCacheForEndpoint_UnderLock = CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(this, v25);
    *a4 = ObjectCacheForEndpoint_UnderLock;
    if ( ObjectCacheForEndpoint_UnderLock )
    {
LABEL_17:
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      return 0LL;
    }
    v24 = 0LL;
    v16 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphObjectCache,CDeviceGraphObjectCache,__int64 &,float &,unsigned int &,_tlgProvider_t const * &>(
            (volatile signed __int64 **)&v24,
            (__int64 *)a3,
            (float *)a3 + 2,
            (unsigned int *)a3 + 3,
            (const struct _tlgProvider_t **)this + 13);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v16);
      if ( v24 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release((__int64)v24);
      if ( this != (CDeviceGraphObjectCacheManager *)-96LL )
        ReleaseSRWLockExclusive((PSRWLOCK)this + 12);
      return v17;
    }
    else
    {
      v23 = 0LL;
      v18 = v24;
      v19 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>>(
              v24,
              &GUID_78173c1a_c536_449b_8ed3_f5cb523cfed0,
              &v23);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x233,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
          (const char *)(unsigned int)v19);
        if ( v23 )
          (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release((__int64)v18);
        if ( this != (CDeviceGraphObjectCacheManager *)-96LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 12);
        return v20;
      }
      else
      {
        v21 = CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint(this, v25, v18);
        v22 = v21;
        if ( v21 >= 0 )
        {
          *a4 = v23;
          if ( v18 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release((__int64)v18);
          goto LABEL_17;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x234,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
          (const char *)(unsigned int)v21);
        if ( v23 )
          (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release((__int64)v18);
        if ( v13 )
          ReleaseSRWLockExclusive(v13);
        return v22;
      }
    }
  }
}
