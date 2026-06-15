/*
 * XREFs of ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800E77D8
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800E7120 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800E9B10 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800031B4 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180003300 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180068548 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x180089580 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800B5F1C (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA?AV?$ComPtr@VResourceGroupInstance@@@WRL@Microsoft@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800E5AD8 (--$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA-AV-$ComPtr@.c)
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800E6208 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800E6708 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800E6960 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800E6A38 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800E6E6C (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800E86AC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800E8790 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800E87C0 (-GetPrintableId@EndpointInfo@@QEBAPEBGXZ.c)
 *     ?GetResourceGroupOrderByPriority@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KPEAKPEAPEAU2@@Z @ 0x1800E8A90 (-GetResourceGroupOrderByPriority@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KPEAKP.c)
 *     ?IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z @ 0x1800E92C8 (-IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EA0DC (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EA4AC (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     WPP_SF_SSSdd @ 0x1800EAD88 (WPP_SF_SSSdd.c)
 *     WPP_SF_SSdSdd @ 0x1800EAF78 (WPP_SF_SSdSdd.c)
 *     WPP_SF_SSdSddd @ 0x1800EB0B8 (WPP_SF_SSdSddd.c)
 *     WPP_SF_SSdd @ 0x1800EB210 (WPP_SF_SSdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CConstraintModelResourceManager::AssignResourceGroup(
        struct _RTL_CRITICAL_SECTION *this,
        struct IMMDevice *a2,
        struct EndpointInfo *a3,
        struct _ResourceInfo *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct ResourceHandleInfo *a8)
{
  struct ResourceHandleInfo *v11; // r13
  __int64 v12; // r12
  int ResourceGroupOrderByPriority; // edi
  unsigned int v14; // r15d
  __int64 v15; // rcx
  unsigned __int64 DebugInfo; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned int v20; // esi
  struct _ResourceInfo *v21; // r12
  int v22; // eax
  unsigned int v23; // r9d
  char *v24; // r12
  struct AudioSrvTelemetryProvider *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // r14d
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // r8
  char v34; // r9
  int v35; // r14d
  struct AudioSrvTelemetryProvider *v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // eax
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // r8
  char v43; // r9
  const unsigned __int16 *v44; // rax
  __int64 v45; // r10
  __int64 v46; // rdx
  int v47; // r8d
  struct AudioSrvTelemetryProvider *v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  ResourceGroupInstance **v51; // rax
  ResourceGroupInstance *v52; // rdx
  __int64 v53; // rcx
  ResourceGroupInstance *v54; // rcx
  unsigned int v55; // eax
  __int64 v56; // r10
  __int64 v57; // rdx
  int v58; // r8d
  struct AudioSrvTelemetryProvider *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+64h] [rbp-9Ch] BYREF
  int v65; // [rsp+68h] [rbp-98h] BYREF
  int v66; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  ResourceGroupInstance *v69; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *PrintableId; // [rsp+88h] [rbp-78h] BYREF
  CConstraintModelResourceManager *v71; // [rsp+90h] [rbp-70h]
  struct _ResourceInfo *v72; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v73[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-50h] BYREF
  int v75; // [rsp+B8h] [rbp-48h]
  _BYTE v76[256]; // [rsp+BCh] [rbp-44h] BYREF
  __int128 v77; // [rsp+1BCh] [rbp+BCh]
  __int128 v78; // [rsp+1CCh] [rbp+CCh]
  int v79; // [rsp+1DCh] [rbp+DCh]
  __int128 v80; // [rsp+1E0h] [rbp+E0h]
  __m128i si128; // [rsp+1F0h] [rbp+F0h]
  __int128 v82; // [rsp+200h] [rbp+100h]
  __m128i v83; // [rsp+210h] [rbp+110h]
  __int128 v84; // [rsp+220h] [rbp+120h]
  __m128i v85; // [rsp+230h] [rbp+130h]
  int v86; // [rsp+240h] [rbp+140h]
  __int64 v87; // [rsp+248h] [rbp+148h]
  __int128 v88; // [rsp+250h] [rbp+150h]
  __int128 v89; // [rsp+260h] [rbp+160h]
  __int64 v90; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v91[128]; // [rsp+280h] [rbp+180h] BYREF

  v71 = (CConstraintModelResourceManager *)this;
  v11 = a8;
  v12 = 0LL;
  *((_DWORD *)a8 + 109) = 0;
  v67 = 0;
  v72 = 0LL;
  ResourceGroupOrderByPriority = CConstraintModelResourceManager::GetResourceGroupOrderByPriority(
                                   (CConstraintModelResourceManager *)&v72,
                                   a4,
                                   a5,
                                   &v67,
                                   &v72);
  if ( ResourceGroupOrderByPriority >= 0 && (v14 = v67) != 0 )
  {
    EndpointInfo::EndpointInfo((EndpointInfo *)v91, a3);
    v74 = 0LL;
    v75 = 0;
    memset_0(v76, 0, sizeof(v76));
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0;
    v80 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v80) = 0;
    v82 = 0LL;
    v83 = si128;
    LOWORD(v82) = 0;
    v84 = 0LL;
    v85 = si128;
    LOWORD(v84) = 0;
    v86 = 0;
    v87 = 0LL;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)v73,
      this + 2);
    DebugInfo = (unsigned __int64)this[3].DebugInfo;
    v68 = DebugInfo;
    v69 = 0LL;
    if ( DebugInfo )
    {
      while ( 1 )
      {
        v17 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v15, DebugInfo);
        if ( EndpointInfo::operator==((__int64)v91, v17 + 304) )
        {
          if ( *(_DWORD *)(v17 + 436) )
            break;
        }
        ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
          v18,
          &v68);
        DebugInfo = v68;
        if ( !v68 )
        {
          v12 = 0LL;
          goto LABEL_8;
        }
      }
      ResourceHandleInfo::operator=((__int64)&v74, v17);
      v12 = 1LL;
LABEL_8:
      v69 = (ResourceGroupInstance *)v12;
    }
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v73);
    v67 = 0;
    IsEndpointDefaultAudioEndpoint(a2, (int *)&v67);
    v19 = 0;
    v20 = a6;
    if ( v14 )
    {
      while ( 1 )
      {
        ResourceGroupOrderByPriority = 0;
        v68 = 0LL;
        if ( v12 )
        {
          v21 = (struct _ResourceInfo *)((char *)v72 + 540 * v19);
          v22 = DWORD2(v89);
          if ( *(_DWORD *)v21 == DWORD2(v89) )
            break;
        }
        v23 = v20 - 2;
        if ( !v67 )
          v23 = v20;
        v24 = (char *)v72 + 540 * v19;
        ResourceGroupOrderByPriority = CConstraintModelResourceManager::AcquireResourceHandle(
                                         v71,
                                         (struct _ResourceInfo *)v24,
                                         1u,
                                         v23,
                                         a7,
                                         &v68);
        if ( ResourceGroupOrderByPriority >= 0 )
        {
          v35 = a7;
          if ( a7 )
          {
            *((_DWORD *)v11 + 109) = 1;
            *((_DWORD *)v11 + 110) = *(_DWORD *)v24;
            v36 = AudioSrvTelemetryProvider::Instance();
            if ( **((_DWORD **)v36 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v36 + 1), 512LL) )
            {
              v66 = ResourceGroupOrderByPriority;
              v65 = v35;
              v64 = v20;
              v63 = *((_DWORD *)a3 + 24);
              v73[0] = (const WCHAR *)std::wstring::c_str((__int64)a3 + 64);
              PrintableId = EndpointInfo::GetPrintableId(a3);
              v69 = (ResourceGroupInstance *)(v24 + 8);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v37,
                (int)&unk_1801A137B,
                v37,
                v38,
                (const WCHAR **)&v69,
                &PrintableId,
                v73,
                (__int64)&v63,
                (__int64)&v64,
                (__int64)&v65,
                (__int64)&v66);
            }
          }
          else if ( v67
                 && (ResourceGroupOrderByPriority = CConstraintModelResourceManager::ReacquireResourceHandle(
                                                      v71,
                                                      v68,
                                                      (struct _ResourceInfo *)v24,
                                                      1u,
                                                      v20,
                                                      0LL,
                                                      &v68),
                     ResourceGroupOrderByPriority < 0) )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              std::wstring::c_str((__int64)a3 + 64);
              v39 = (unsigned int)EndpointInfo::GetPrintableId(a3);
              WPP_SF_SSdSdd(*(_QWORD *)(v40 + 16), v41, v42, v39, v41, v43, v42, v20, ResourceGroupOrderByPriority);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              std::wstring::c_str((__int64)a3 + 64);
              v44 = EndpointInfo::GetPrintableId(a3);
              WPP_SF_SSSdd(*(_QWORD *)(v45 + 16), v46, v47, (_DWORD)v24 + 8, (__int64)v44, v46, v47, v20);
            }
            v48 = AudioSrvTelemetryProvider::Instance();
            if ( **((_DWORD **)v48 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v48 + 1), 512LL) )
            {
              v66 = ResourceGroupOrderByPriority;
              v65 = 0;
              v64 = v20;
              v63 = *((_DWORD *)a3 + 24);
              v73[0] = (const WCHAR *)std::wstring::c_str((__int64)a3 + 64);
              PrintableId = EndpointInfo::GetPrintableId(a3);
              v69 = (ResourceGroupInstance *)(v24 + 8);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v49,
                (int)&unk_1801A1264,
                v49,
                v50,
                (const WCHAR **)&v69,
                &PrintableId,
                v73,
                (__int64)&v63,
                (__int64)&v64,
                (__int64)&v65,
                (__int64)&v66);
            }
            ResourceGroupOrderByPriority = CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(
                                             v71,
                                             (struct EndpointInfo *)v91,
                                             1);
            if ( ResourceGroupOrderByPriority < 0 )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
              {
                std::wstring::c_str((__int64)a3 + 64);
                v55 = (unsigned int)EndpointInfo::GetPrintableId(a3);
                WPP_SF_SSdd(*(_QWORD *)(v56 + 16), v57, v58, v55, v57, v58, ResourceGroupOrderByPriority);
              }
            }
            else
            {
              *((_DWORD *)v11 + 109) = 1;
              *((_DWORD *)v11 + 110) = *(_DWORD *)v24;
              v51 = wil::MakeOrThrow<ResourceGroupInstance,unsigned __int64 &,EndpointInfo &,unsigned short (&)[257],unsigned long &>(
                      &v69,
                      &v68,
                      a3,
                      (const unsigned __int16 *)v24 + 4,
                      &a6);
              v52 = *v51;
              *v51 = 0LL;
              v53 = *((_QWORD *)v11 + 56);
              *((_QWORD *)v11 + 56) = v52;
              if ( v53 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
              v54 = v69;
              if ( v69 )
              {
                v69 = 0LL;
                (*(void (__fastcall **)(ResourceGroupInstance *))(*(_QWORD *)v54 + 16LL))(v54);
              }
              v20 = a6;
            }
          }
          goto LABEL_57;
        }
        v25 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v25 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v25 + 1), 512LL) )
        {
          v63 = ResourceGroupOrderByPriority;
          v64 = a7;
          v65 = v20;
          v66 = *((_DWORD *)a3 + 24);
          v68 = std::wstring::c_str((__int64)a3 + 64);
          PrintableId = EndpointInfo::GetPrintableId(a3);
          v73[0] = (const WCHAR *)(v24 + 8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v26,
            (int)&unk_1801A12E9,
            v26,
            v27,
            v73,
            &PrintableId,
            (const WCHAR **)&v68,
            (__int64)&v66,
            (__int64)&v65,
            (__int64)&v64,
            (__int64)&v63);
        }
        if ( ++v19 >= v14 )
          goto LABEL_57;
        v12 = (__int64)v69;
      }
      *((_DWORD *)v11 + 109) = 1;
      *((_DWORD *)v11 + 110) = v22;
      if ( !a7 )
      {
        v28 = *(_DWORD *)(v90 + 16);
        if ( v20 < v28 )
        {
          ResourceGroupOrderByPriority = CConstraintModelResourceManager::ReacquireResourceHandle(
                                           v71,
                                           *(_QWORD *)(v90 + 24),
                                           v21,
                                           1u,
                                           v20,
                                           0LL,
                                           &v68);
          if ( ResourceGroupOrderByPriority < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              std::wstring::c_str((__int64)a3 + 64);
              v30 = (unsigned int)EndpointInfo::GetPrintableId(a3);
              WPP_SF_SSdSddd(
                *(_QWORD *)(v31 + 16),
                v32,
                v33,
                v30,
                v32,
                v34,
                v33,
                v28,
                v20,
                ResourceGroupOrderByPriority);
            }
          }
          else
          {
            v29 = v90;
            *(_QWORD *)(v90 + 24) = v68;
            *(_DWORD *)(v29 + 16) = v20;
          }
        }
        wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=((__int64 *)v11 + 56, &v90);
      }
    }
LABEL_57:
    ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v74);
    EndpointInfo::~EndpointInfo((EndpointInfo *)v91);
  }
  else
  {
    v20 = a6;
  }
  if ( v72 )
    operator delete(v72);
  v59 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v59 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v59 + 1), 512LL) )
  {
    v66 = ResourceGroupOrderByPriority;
    v65 = a7;
    v64 = v20;
    v63 = *((_DWORD *)a3 + 24);
    v73[0] = (const WCHAR *)std::wstring::c_str((__int64)a3 + 64);
    PrintableId = EndpointInfo::GetPrintableId(a3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v60,
      (int)&unk_1801A11F9,
      v60,
      v61,
      &PrintableId,
      v73,
      (__int64)&v63,
      (__int64)&v64,
      (__int64)&v65,
      (__int64)&v66);
  }
  return (unsigned int)ResourceGroupOrderByPriority;
}
