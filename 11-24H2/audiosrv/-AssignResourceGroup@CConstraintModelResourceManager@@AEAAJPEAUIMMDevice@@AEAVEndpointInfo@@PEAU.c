/*
 * XREFs of ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800EBC28
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x1800EB570 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAUEndpointCharacteristicsDescri.c)
 *     ?QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@K@Z @ 0x1800EE800 (-QueryAvailabilitySaDeviceResource@CConstraintModelResourceManager@@UEAAHPEAUEndpointCharacteris.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1800032C8 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEB.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180003414 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005B718 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??1ResourceHandleInfo@@QEAA@XZ @ 0x18007AC70 (--1ResourceHandleInfo@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??4?$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800B5300 (--4-$com_ptr_t@VResourceGroupInstance@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA?AV?$ComPtr@VResourceGroupInstance@@@WRL@Microsoft@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800E9F24 (--$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA-AV-$ComPtr@.c)
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800EA654 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800EADAC (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800EAE84 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800EB2BC (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800ECAFC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAAAEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@AEAPEAU__POSITION@@@Z @ 0x1800ED468 (-GetNext@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 *     ?GetPrintableId@EndpointInfo@@QEBAPEBGXZ @ 0x1800ED498 (-GetPrintableId@EndpointInfo@@QEBAPEBGXZ.c)
 *     ?GetResourceGroupOrderByPriority@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KPEAKPEAPEAU2@@Z @ 0x1800ED768 (-GetResourceGroupOrderByPriority@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KPEAKP.c)
 *     ?IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z @ 0x1800EDFA0 (-IsEndpointDefaultAudioEndpoint@@YAJPEAUIMMDevice@@PEAH@Z.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@Z @ 0x1800EED5C (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEAHPEA_K@.c)
 *     ?RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z @ 0x1800EF364 (-RevokeEndpointResourcesInGroup@CConstraintModelResourceManager@@AEAAJPEAVEndpointInfo@@H@Z.c)
 *     WPP_SF_SSSdd @ 0x1800EFD38 (WPP_SF_SSSdd.c)
 *     WPP_SF_SSdSdd @ 0x1800EFF28 (WPP_SF_SSdSdd.c)
 *     WPP_SF_SSdSddd @ 0x1800F0068 (WPP_SF_SSdSddd.c)
 *     WPP_SF_SSdd @ 0x1800F01C0 (WPP_SF_SSdd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v25; // rdx
  struct AudioSrvTelemetryProvider *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r14d
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r8
  char v37; // r9
  int v38; // r14d
  struct AudioSrvTelemetryProvider *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // eax
  __int64 v44; // r10
  __int64 v45; // rdx
  __int64 v46; // r8
  char v47; // r9
  const unsigned __int16 *v48; // rax
  __int64 v49; // r10
  __int64 v50; // rdx
  int v51; // r8d
  struct AudioSrvTelemetryProvider *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  ResourceGroupInstance **v57; // rax
  ResourceGroupInstance *v58; // rdx
  __int64 v59; // rcx
  ResourceGroupInstance *v60; // rcx
  unsigned int v61; // eax
  __int64 v62; // r10
  __int64 v63; // rdx
  int v64; // r8d
  __int64 v65; // rdx
  struct AudioSrvTelemetryProvider *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v71; // [rsp+60h] [rbp-A0h] BYREF
  int v72; // [rsp+64h] [rbp-9Ch] BYREF
  int v73; // [rsp+68h] [rbp-98h] BYREF
  int v74; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v75; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  ResourceGroupInstance *v77; // [rsp+80h] [rbp-80h] BYREF
  const WCHAR *PrintableId; // [rsp+88h] [rbp-78h] BYREF
  CConstraintModelResourceManager *v79; // [rsp+90h] [rbp-70h]
  struct _ResourceInfo *v80; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v81[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  int v83; // [rsp+B8h] [rbp-48h]
  _BYTE v84[256]; // [rsp+BCh] [rbp-44h] BYREF
  __int128 v85; // [rsp+1BCh] [rbp+BCh]
  __int128 v86; // [rsp+1CCh] [rbp+CCh]
  int v87; // [rsp+1DCh] [rbp+DCh]
  __int128 v88; // [rsp+1E0h] [rbp+E0h]
  __m128i si128; // [rsp+1F0h] [rbp+F0h]
  __int128 v90; // [rsp+200h] [rbp+100h]
  __m128i v91; // [rsp+210h] [rbp+110h]
  __int128 v92; // [rsp+220h] [rbp+120h]
  __m128i v93; // [rsp+230h] [rbp+130h]
  int v94; // [rsp+240h] [rbp+140h]
  __int64 v95; // [rsp+248h] [rbp+148h]
  __int128 v96; // [rsp+250h] [rbp+150h]
  __int128 v97; // [rsp+260h] [rbp+160h]
  __int64 v98; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v99[128]; // [rsp+280h] [rbp+180h] BYREF

  v79 = (CConstraintModelResourceManager *)this;
  v11 = a8;
  v12 = 0LL;
  *((_DWORD *)a8 + 109) = 0;
  v75 = 0;
  v80 = 0LL;
  ResourceGroupOrderByPriority = CConstraintModelResourceManager::GetResourceGroupOrderByPriority(
                                   (CConstraintModelResourceManager *)&v80,
                                   a4,
                                   a5,
                                   &v75,
                                   &v80);
  if ( ResourceGroupOrderByPriority >= 0 && (v14 = v75) != 0 )
  {
    EndpointInfo::EndpointInfo((EndpointInfo *)v99, a3);
    v82 = 0LL;
    v83 = 0;
    memset_0(v84, 0, sizeof(v84));
    v85 = 0LL;
    v86 = 0LL;
    v87 = 0;
    v88 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v88) = 0;
    v90 = 0LL;
    v91 = si128;
    LOWORD(v90) = 0;
    v92 = 0LL;
    v93 = si128;
    LOWORD(v92) = 0;
    v94 = 0;
    v95 = 0LL;
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)v81,
      this + 2);
    DebugInfo = (unsigned __int64)this[3].DebugInfo;
    v76 = DebugInfo;
    v77 = 0LL;
    if ( DebugInfo )
    {
      while ( 1 )
      {
        v17 = ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v15, DebugInfo);
        if ( EndpointInfo::operator==((__int64)v99, v17 + 304) )
        {
          if ( *(_DWORD *)(v17 + 436) )
            break;
        }
        ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::GetNext(
          v18,
          &v76);
        DebugInfo = v76;
        if ( !v76 )
        {
          v12 = 0LL;
          goto LABEL_8;
        }
      }
      ResourceHandleInfo::operator=((__int64)&v82, v17);
      v12 = 1LL;
LABEL_8:
      v77 = (ResourceGroupInstance *)v12;
    }
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)v81);
    v75 = 0;
    IsEndpointDefaultAudioEndpoint(a2, (int *)&v75);
    v19 = 0;
    v20 = a6;
    if ( v14 )
    {
      while ( 1 )
      {
        ResourceGroupOrderByPriority = 0;
        v76 = 0LL;
        if ( v12 )
        {
          v21 = (struct _ResourceInfo *)((char *)v80 + 540 * v19);
          v22 = DWORD2(v97);
          if ( *(_DWORD *)v21 == DWORD2(v97) )
            break;
        }
        v23 = v20 - 2;
        if ( !v75 )
          v23 = v20;
        v24 = (char *)v80 + 540 * v19;
        ResourceGroupOrderByPriority = CConstraintModelResourceManager::AcquireResourceHandle(
                                         v79,
                                         (struct _ResourceInfo *)v24,
                                         1u,
                                         v23,
                                         a7,
                                         &v76);
        if ( ResourceGroupOrderByPriority >= 0 )
        {
          v38 = a7;
          if ( a7 )
          {
            *((_DWORD *)v11 + 109) = 1;
            *((_DWORD *)v11 + 110) = *(_DWORD *)v24;
            v39 = AudioSrvTelemetryProvider::Instance();
            if ( **((_DWORD **)v39 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v39 + 1), 512LL) )
            {
              v74 = ResourceGroupOrderByPriority;
              v73 = v38;
              v72 = v20;
              v71 = *((_DWORD *)a3 + 24);
              v81[0] = (const WCHAR *)std::wstring::c_str((__int64)a3 + 64, v40);
              PrintableId = EndpointInfo::GetPrintableId(a3);
              v77 = (ResourceGroupInstance *)(v24 + 8);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v41,
                (int)&unk_1801ABF37,
                v41,
                v42,
                (const WCHAR **)&v77,
                &PrintableId,
                v81,
                (__int64)&v71,
                (__int64)&v72,
                (__int64)&v73,
                (__int64)&v74);
            }
          }
          else if ( v75
                 && (ResourceGroupOrderByPriority = CConstraintModelResourceManager::ReacquireResourceHandle(
                                                      v79,
                                                      v76,
                                                      (struct _ResourceInfo *)v24,
                                                      1u,
                                                      v20,
                                                      0LL,
                                                      &v76),
                     ResourceGroupOrderByPriority < 0) )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              std::wstring::c_str((__int64)a3 + 64, v25);
              v43 = (unsigned int)EndpointInfo::GetPrintableId(a3);
              WPP_SF_SSdSdd(*(_QWORD *)(v44 + 16), v45, v46, v43, v45, v47, v46, v20, ResourceGroupOrderByPriority);
            }
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              std::wstring::c_str((__int64)a3 + 64, v25);
              v48 = EndpointInfo::GetPrintableId(a3);
              WPP_SF_SSSdd(*(_QWORD *)(v49 + 16), v50, v51, (_DWORD)v24 + 8, (__int64)v48, v50, v51, v20);
            }
            v52 = AudioSrvTelemetryProvider::Instance();
            if ( **((_DWORD **)v52 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v52 + 1), 512LL) )
            {
              v74 = ResourceGroupOrderByPriority;
              v73 = 0;
              v72 = v20;
              v71 = *((_DWORD *)a3 + 24);
              v81[0] = (const WCHAR *)std::wstring::c_str((__int64)a3 + 64, v53);
              PrintableId = EndpointInfo::GetPrintableId(a3);
              v77 = (ResourceGroupInstance *)(v24 + 8);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v54,
                (int)&unk_1801ABFC3,
                v54,
                v55,
                (const WCHAR **)&v77,
                &PrintableId,
                v81,
                (__int64)&v71,
                (__int64)&v72,
                (__int64)&v73,
                (__int64)&v74);
            }
            ResourceGroupOrderByPriority = CConstraintModelResourceManager::RevokeEndpointResourcesInGroup(
                                             v79,
                                             (struct EndpointInfo *)v99,
                                             1);
            if ( ResourceGroupOrderByPriority < 0 )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
              {
                std::wstring::c_str((__int64)a3 + 64, v56);
                v61 = (unsigned int)EndpointInfo::GetPrintableId(a3);
                WPP_SF_SSdd(*(_QWORD *)(v62 + 16), v63, v64, v61, v63, v64, ResourceGroupOrderByPriority);
              }
            }
            else
            {
              *((_DWORD *)v11 + 109) = 1;
              *((_DWORD *)v11 + 110) = *(_DWORD *)v24;
              v57 = wil::MakeOrThrow<ResourceGroupInstance,unsigned __int64 &,EndpointInfo &,unsigned short (&)[257],unsigned long &>(
                      &v77,
                      &v76,
                      a3,
                      (const unsigned __int16 *)v24 + 4,
                      &a6);
              v58 = *v57;
              *v57 = 0LL;
              v59 = *((_QWORD *)v11 + 56);
              *((_QWORD *)v11 + 56) = v58;
              if ( v59 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
              v60 = v77;
              if ( v77 )
              {
                v77 = 0LL;
                (*(void (__fastcall **)(ResourceGroupInstance *))(*(_QWORD *)v60 + 16LL))(v60);
              }
              v20 = a6;
            }
          }
          goto LABEL_57;
        }
        v26 = AudioSrvTelemetryProvider::Instance();
        if ( **((_DWORD **)v26 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v26 + 1), 512LL) )
        {
          v71 = ResourceGroupOrderByPriority;
          v72 = a7;
          v73 = v20;
          v74 = *((_DWORD *)a3 + 24);
          v76 = std::wstring::c_str((__int64)a3 + 64, v27);
          PrintableId = EndpointInfo::GetPrintableId(a3);
          v81[0] = (const WCHAR *)(v24 + 8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v28,
            (int)&unk_1801ABE3A,
            v28,
            v29,
            v81,
            &PrintableId,
            (const WCHAR **)&v76,
            (__int64)&v74,
            (__int64)&v73,
            (__int64)&v72,
            (__int64)&v71);
        }
        if ( ++v19 >= v14 )
          goto LABEL_57;
        v12 = (__int64)v77;
      }
      *((_DWORD *)v11 + 109) = 1;
      *((_DWORD *)v11 + 110) = v22;
      if ( !a7 )
      {
        v30 = *(_DWORD *)(v98 + 16);
        if ( v20 < v30 )
        {
          ResourceGroupOrderByPriority = CConstraintModelResourceManager::ReacquireResourceHandle(
                                           v79,
                                           *(_QWORD *)(v98 + 24),
                                           v21,
                                           1u,
                                           v20,
                                           0LL,
                                           &v76);
          if ( ResourceGroupOrderByPriority < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              std::wstring::c_str((__int64)a3 + 64, v31);
              v33 = (unsigned int)EndpointInfo::GetPrintableId(a3);
              WPP_SF_SSdSddd(
                *(_QWORD *)(v34 + 16),
                v35,
                v36,
                v33,
                v35,
                v37,
                v36,
                v30,
                v20,
                ResourceGroupOrderByPriority);
            }
          }
          else
          {
            v32 = v98;
            *(_QWORD *)(v98 + 24) = v76;
            *(_DWORD *)(v32 + 16) = v20;
          }
        }
        wil::com_ptr_t<ResourceGroupInstance,wil::err_exception_policy>::operator=((__int64 *)v11 + 56, &v98);
      }
    }
LABEL_57:
    ResourceHandleInfo::~ResourceHandleInfo((ResourceHandleInfo *)&v82);
    EndpointInfo::~EndpointInfo((EndpointInfo *)v99, v65);
  }
  else
  {
    v20 = a6;
  }
  if ( v80 )
    operator delete(v80);
  v66 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v66 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v66 + 1), 512LL) )
  {
    v74 = ResourceGroupOrderByPriority;
    v73 = a7;
    v72 = v20;
    v71 = *((_DWORD *)a3 + 24);
    v81[0] = (const WCHAR *)std::wstring::c_str((__int64)a3 + 64, v67);
    PrintableId = EndpointInfo::GetPrintableId(a3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v68,
      (int)&unk_1801ABECC,
      v68,
      v69,
      &PrintableId,
      v81,
      (__int64)&v71,
      (__int64)&v72,
      (__int64)&v73,
      (__int64)&v74);
  }
  return (unsigned int)ResourceGroupOrderByPriority;
}
