/*
 * XREFs of ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x18009ADD0
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@@QEAA_NXZ @ 0x18009A69C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMResourceUsageS0@@@details@wil@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18009A8B0 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x180240E28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync@@@details@wil@@QEAA_NXZ @ 0x180242760 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompSwapchainRenderAndPresentSync.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@D@@U2@U3@U3@U3@U2@U3@U3@U3@U3@U1@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@D@@455545555353@Z @ 0x180001C5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@D@@U2@U3@U3@U3.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@35AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001F3C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180002014 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$00@@U1@U-$.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1801B76AC (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18022D2E4 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ @ 0x180254370 (-Provider@FeatureLogging@details@wil@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::details::FeatureLoggingHook(
        wil::details *this,
        unsigned __int16 *a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        const struct FEATURE_ERROR *a4,
        int *a5,
        const enum wil_ReportingKind *a6,
        const enum wil_VariantReportingKind *a7,
        __int64 a8)
{
  int v9; // r14d
  int v11; // r15d
  wil::TraceLoggingProvider *v12; // rax
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r8
  const struct _tlgProvider_t *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  const struct _tlgProvider_t *v22; // rax
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  const struct _tlgProvider_t *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  int v30; // eax
  __int16 v31[2]; // [rsp+B0h] [rbp-80h] BYREF
  int v32; // [rsp+B4h] [rbp-7Ch] BYREF
  int v33; // [rsp+B8h] [rbp-78h] BYREF
  int v34; // [rsp+BCh] [rbp-74h] BYREF
  int v35; // [rsp+C0h] [rbp-70h] BYREF
  int v36; // [rsp+C4h] [rbp-6Ch] BYREF
  int v37; // [rsp+C8h] [rbp-68h]
  __int64 v38; // [rsp+D0h] [rbp-60h] BYREF
  int v39; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v44; // [rsp+100h] [rbp-30h] BYREF
  __int64 v45; // [rsp+108h] [rbp-28h] BYREF
  __int64 v46; // [rsp+110h] [rbp-20h] BYREF
  __int64 v47; // [rsp+118h] [rbp-18h] BYREF
  __int64 v48; // [rsp+120h] [rbp-10h] BYREF

  v9 = (int)a4;
  v11 = (int)this;
  v12 = (wil::TraceLoggingProvider *)wil::details::static_lazy<wil::details::FeatureLogging>::get(
                                       this,
                                       _lambda_120d0c6b51dc644cb63ed5c7fc62f6c3_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v12, v13, v14) )
  {
    if ( a5 )
    {
      v15 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v15 > 5u && (unsigned __int8)tlgKeywordOn(v15, 2LL) )
      {
        v17 = *a5;
        v38 = a8;
        LOBYTE(v31[0]) = v9 != 0;
        v33 = v17;
        if ( a2 )
        {
          LOWORD(v34) = *((unsigned __int8 *)a2 + 4);
          v32 = a2[1];
          v18 = *a2;
        }
        else
        {
          v32 = -1;
          LOWORD(v34) = -1;
          v18 = -1;
        }
        v35 = v18;
        v36 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v16,
          (__int64)&unk_1803CA04A);
      }
      if ( a2 )
      {
        if ( *((_BYTE *)a2 + 4) == 1 )
        {
          if ( v9 )
          {
            v19 = wil::details::FeatureLogging::Provider();
            if ( *(_DWORD *)v19 > 5u )
            {
              if ( (unsigned __int8)tlgKeywordOn(v19, 10LL) )
              {
                v21 = *a5;
                LOWORD(v32) = *((unsigned __int8 *)a2 + 4);
                v35 = a2[1];
                v33 = *a2;
                v36 = v21;
                v38 = a8;
                LOBYTE(v31[0]) = 1;
                v34 = v11;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  v20,
                  (__int64)&unk_1803C9D79);
              }
            }
          }
        }
      }
    }
    else if ( a6 )
    {
      v22 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v22 > 5u && (unsigned __int8)tlgKeywordOn(v22, 4LL) )
      {
        LOBYTE(v34) = v9 != 0;
        LOBYTE(v31[0]) = (_BYTE)a7;
        v24 = *(_DWORD *)a6;
        v38 = a8;
        v36 = v24;
        if ( a2 )
        {
          LOWORD(v32) = *((unsigned __int8 *)a2 + 4);
          v33 = a2[1];
          v25 = *a2;
        }
        else
        {
          v33 = -1;
          LOWORD(v32) = -1;
          v25 = -1;
        }
        v35 = v25;
        v37 = v11;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
          v23,
          (__int64)&unk_1803C9BD1);
      }
    }
    else if ( a3 )
    {
      v26 = wil::details::FeatureLogging::Provider();
      if ( *(_DWORD *)v26 > 2u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v26, 1LL) )
        {
          v29 = *((_DWORD *)a3 + 20);
          v40 = *((_QWORD *)a3 + 11);
          v36 = *((_DWORD *)a3 + 8);
          v41 = *((_QWORD *)a3 + 5);
          v42 = *((_QWORD *)a3 + 6);
          v43 = *((_QWORD *)a3 + 12);
          v44 = *((_QWORD *)a3 + 9);
          LOWORD(v34) = *((_WORD *)a3 + 28);
          v45 = *((_QWORD *)a3 + 8);
          v46 = *((_QWORD *)a3 + 2);
          v47 = *((_QWORD *)a3 + 3);
          v31[0] = *((_WORD *)a3 + 2);
          v48 = *((_QWORD *)a3 + 1);
          v35 = *(_DWORD *)a3;
          v37 = v29;
          if ( a2 )
          {
            LOWORD(v32) = *((unsigned __int8 *)a2 + 4);
            v33 = a2[1];
            v30 = *a2;
          }
          else
          {
            v33 = -1;
            LOWORD(v32) = -1;
            v30 = -1;
          }
          v39 = v30;
          LODWORD(v38) = v11;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            v27,
            (__int64)&unk_1803C9C59,
            v27,
            v28,
            (__int64)&v38,
            (__int64)&v39,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v35,
            &v48,
            (__int64)v31,
            &v47,
            &v46,
            &v45,
            (__int64)&v34,
            &v44,
            &v43,
            &v42,
            &v41,
            (__int64)&v36,
            &v40);
        }
      }
    }
  }
}
