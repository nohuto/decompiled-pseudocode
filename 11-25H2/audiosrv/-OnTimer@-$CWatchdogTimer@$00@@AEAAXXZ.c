/*
 * XREFs of ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800B1DB0
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800B23F0 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180002108 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800021D4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18004CB3C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18004CB3C.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800806B8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??R_lambda_922cfe64424770cf77e4823719a47b12_@@QEBA@XZ @ 0x1800B0D78 (--R_lambda_922cfe64424770cf77e4823719a47b12_@@QEBA@XZ.c)
 *     ?GetAEBBindingHandle@?$CWatchdogTimer@$00@@AEAAJPEAPEAX@Z @ 0x1800B11B4 (-GetAEBBindingHandle@-$CWatchdogTimer@$00@@AEAAJPEAPEAX@Z.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800B1AF4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800B1BF4 (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CWatchdogTimer<1>::OnTimer(__int64 a1)
{
  char result; // al
  unsigned __int32 v3; // r8d
  _DWORD *v4; // rcx
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rcx
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // edi
  _DWORD *v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int16 *v19; // rcx
  DWORD LastError; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  HRESULT v24; // esi
  __int64 v25; // r8
  __int64 v26; // r9
  _DWORD *v27; // rcx
  DWORD CurrentProcessId; // eax
  __int64 v29; // r8
  int v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v32; // [rsp+50h] [rbp-B8h] BYREF
  int v33[2]; // [rsp+58h] [rbp-B0h] BYREF
  PCWSTR pwzFile; // [rsp+60h] [rbp-A8h] BYREF
  const WCHAR *v35; // [rsp+68h] [rbp-A0h] BYREF
  RPC_BINDING_HANDLE v36; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v37[4]; // [rsp+78h] [rbp-90h] BYREF
  GUID pguid; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v39[528]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E0h] [rbp+1D8h]

  result = CWatchdogTimer<1>::HangIsProbablyReal(a1);
  if ( result )
  {
    v3 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    if ( v3 >= 3 )
    {
      if ( v3 == 3 )
      {
        v8 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v8 )
        {
          (**v8)(v8, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        result = CWatchdogTimer<1>::IsFirstHang(a1);
        if ( result )
        {
          pguid = GUID_00000000_0000_0000_0000_000000000000;
          CoCreateGuid(&pguid);
          v9 = *(_DWORD **)(a1 + 8);
          if ( *v9 > 2u && tlgKeywordOn((__int64)v9, 0x400000000001LL) )
          {
            LODWORD(v31) = *(_DWORD *)(a1 + 16);
            v32 = *(const WCHAR **)(a1 + 24);
            *(_QWORD *)v33 = &pguid;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v10,
              (int)&unk_18019E17F,
              v11,
              v12,
              (__int64 *)v33,
              &v32,
              (__int64)&v31);
          }
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
          v13 = *(_QWORD *)(a1 + 32);
          if ( v13 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            if ( v14 )
            {
              v15 = *(_DWORD **)(a1 + 8);
              if ( *v15 > 4u && tlgKeywordOn((__int64)v15, 1LL) )
              {
                LODWORD(v31) = *(_DWORD *)(a1 + 16);
                *(_QWORD *)v33 = *(_QWORD *)(a1 + 24);
                LODWORD(v32) = v14;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v16,
                  (int)&unk_18019E131,
                  v17,
                  v18,
                  (__int64)&v32,
                  (const WCHAR **)v33,
                  (__int64)&v31);
              }
            }
          }
          else
          {
            v14 = 0;
          }
          pwzFile = 0LL;
          if ( !(unsigned int)GetTempPath2W(260LL, v39) )
          {
            LastError = GetLastError();
            v19 = *(unsigned __int16 **)(a1 + 8);
            if ( *(_DWORD *)v19 > 2u )
            {
              LODWORD(v31) = LastError;
              LODWORD(v32) = 222;
              *(_QWORD *)v33 = "CWatchdogTimer<1>::OnTimer";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (__int64)v19,
                byte_18019E0F9,
                v21,
                v22,
                (const CHAR **)v33,
                (__int64)&v32,
                (__int64)&v31);
            }
          }
          v36 = 0LL;
          if ( (int)CWatchdogTimer<1>::GetAEBBindingHandle(v19, &v36) >= 0 )
          {
            v37[1] = a1;
            v37[0] = &v36;
            v37[2] = v39;
            v37[3] = &pwzFile;
            v23 = _lambda_922cfe64424770cf77e4823719a47b12_::operator()((__int64)v37);
            if ( v23 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xEF,
                (unsigned int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
                (const char *)(unsigned int)v23,
                v30);
          }
          if ( pwzFile )
          {
            v24 = WerRegisterFile(pwzFile, WerRegFileTypeOther, 1u);
            if ( v24 < 0 )
            {
              DeleteFileW(pwzFile);
              v27 = *(_DWORD **)(a1 + 8);
              if ( *v27 > 2u )
              {
                LODWORD(v31) = v24;
                LODWORD(v32) = 256;
                *(_QWORD *)v33 = "CWatchdogTimer<1>::OnTimer";
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                  (__int64)v27,
                  byte_18019E0BB,
                  v25,
                  v26,
                  (const CHAR **)v33,
                  (__int64)&v32,
                  (__int64)&v31);
              }
            }
          }
          CurrentProcessId = GetCurrentProcessId();
          v29 = *(unsigned int *)(a1 + 16);
          v35 = (const WCHAR *)__PAIR64__(v14, CurrentProcessId);
          ReportCoreHang(&v35, (unsigned int)(v14 != 0) + 1, v29, 1048584LL);
          operator delete((void *)pwzFile);
          return wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v36);
        }
      }
    }
    else
    {
      v4 = *(_DWORD **)(a1 + 8);
      if ( *v4 > 3u )
      {
        result = tlgKeywordOn((__int64)v4, 1LL);
        if ( result )
        {
          LODWORD(v32) = *(_DWORD *)(a1 + 16);
          v35 = *(const WCHAR **)(a1 + 24);
          LODWORD(v31) = v6;
          return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                   v5,
                   (int)&unk_18019E1AD,
                   v6,
                   v7,
                   (__int64)&v31,
                   &v35,
                   (__int64)&v32);
        }
      }
    }
  }
  return result;
}
