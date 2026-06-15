/*
 * XREFs of ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@@Z @ 0x1800EA384
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4AUDIO_DIRECTION@@HK@Z @ 0x1800E8FD0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJAEAVEndpointInfo@@KW4A.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800E6A38 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800E86AC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800E8790 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800E87C0 (-GetPrintableId@EndpointInfo@@QEBAPEBGXZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800E9938 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     WPP_SF_SSd @ 0x1800EAEB0 (WPP_SF_SSd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::RevokeEndpointResources(
        struct _RTL_CRITICAL_SECTION *this,
        struct EndpointInfo *a2)
{
  int v4; // ebx
  EndpointInfo *v5; // rdx
  unsigned int PrintableId; // eax
  __int64 v7; // r10
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // rcx
  _QWORD *p_Type; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  LPCRITICAL_SECTION v15[5]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    std::wstring::c_str((__int64)a2 + 64);
    PrintableId = (unsigned int)EndpointInfo::GetPrintableId(v5);
    WPP_SF_SSd(*(_QWORD *)(v7 + 16), 12, v8, PrintableId, v8, v9);
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)v15,
    this + 2);
  p_Type = &this[3].DebugInfo->Type;
  v16 = p_Type;
  while ( p_Type )
  {
    v12 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v10, (__int64)p_Type);
    if ( EndpointInfo::operator==((__int64)a2, v12 + 304) )
    {
      ++v4;
      *(_DWORD *)(v12 + 292) = 1;
    }
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
      v13,
      &v16);
    p_Type = v16;
  }
  ATL::CCritSecLock::~CCritSecLock(v15);
  CConstraintModelResourceManager::ProcessRevokedResources(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_7a63d399f94f32cb8d4be129f7d61b2c_Traceguids, v4);
  }
  return 0LL;
}
