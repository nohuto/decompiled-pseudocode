/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036840
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x1400077C4 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140002220 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14001D1E8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140026BA8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _tlgKeywordOn @ 0x140035A14 (_tlgKeywordOn.c)
 *     IsSkipAPOFailureCheck @ 0x140036C2C (IsSkipAPOFailureCheck.c)
 *     _Init_thread_footer @ 0x140059338 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400593A0 (_Init_thread_header.c)
 *     DoLoadedModulesContainBlockedListAPO @ 0x140074868 (DoLoadedModulesContainBlockedListAPO.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TrackSystemEffectBehavior(__int64 a1, int a2, int a3, unsigned __int8 a4, __int64 a5, float a6)
{
  int v6; // esi
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 *ThreadLocalStoragePointer; // rax
  __int64 v11; // rbx
  int v12; // edi
  void *v13; // rdx
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, void **); // rbx
  __int64 v17; // rcx
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+50h] [rbp-49h] BYREF
  PROPVARIANT v22[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h]
  void *v24; // [rsp+70h] [rbp-29h] BYREF
  int v25; // [rsp+78h] [rbp-21h] BYREF
  int v26; // [rsp+7Ch] [rbp-1Dh] BYREF
  void *v27; // [rsp+80h] [rbp-19h] BYREF
  __int64 v28; // [rsp+88h] [rbp-11h] BYREF
  __int64 v29; // [rsp+90h] [rbp-9h] BYREF
  PROPVARIANT pvar[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+Fh]
  int v33; // [rsp+F8h] [rbp+5Fh] BYREF

  v6 = a4;
  v8 = a2;
  v9 = a1;
  v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  ThreadLocalStoragePointer = (__int64 *)NtCurrentTeb()->ThreadLocalStoragePointer;
  v11 = *ThreadLocalStoragePointer;
  if ( dword_1400C58DC > *(_DWORD *)(*ThreadLocalStoragePointer + 4) )
  {
    Init_thread_header(&dword_1400C58DC);
    if ( dword_1400C58DC == -1 )
    {
      xmmword_1400C5744 = PKEY_Endpoint_LFX_FailCount;
      dword_1400C5754 = 9;
      xmmword_1400C5758 = PKEY_Endpoint_GFX_FailCount;
      dword_1400C5768 = 8;
      xmmword_1400C576C = PKEY_Endpoint_EFX_FailCount;
      dword_1400C577C = 31;
      Init_thread_footer(&dword_1400C58DC);
    }
  }
  if ( dword_1400C58D8 > *(_DWORD *)(v11 + 4) )
  {
    Init_thread_header(&dword_1400C58D8);
    if ( dword_1400C58D8 == -1 )
    {
      xmmword_1400C56F4 = PKEY_Endpoint_LFX_ExceptionCount;
      dword_1400C5704 = 33;
      xmmword_1400C5708 = PKEY_Endpoint_GFX_ExceptionCount;
      dword_1400C5718 = 34;
      xmmword_1400C571C = PKEY_Endpoint_EFX_ExceptionCount;
      dword_1400C572C = 35;
      Init_thread_footer(&dword_1400C58D8);
    }
  }
  if ( (_DWORD)v8 && !(unsigned __int8)IsSkipAPOFailureCheck() )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, 2LL, &v21);
    if ( v12 < 0 )
      goto LABEL_18;
    v13 = &unk_1400C56E0;
    if ( !(_BYTE)v6 )
      v13 = &unk_1400C5730;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
            v21,
            (__int64)v13 + 20 * v8,
            v22);
    if ( a3 < 0 )
    {
      if ( LOWORD(v22[0]) != 19 )
      {
        LOWORD(v22[0]) = 19;
        LODWORD(v22[1]) = 0;
      }
      if ( (int)DoLoadedModulesContainBlockedListAPO() < 0 )
        LODWORD(v22[1]) += (int)(float)(10.0 / a6);
      else
        LODWORD(v22[1]) += 50;
      if ( (_BYTE)v6 )
        goto LABEL_37;
    }
    else
    {
      if ( LOWORD(v22[0]) == 19 && !LODWORD(v22[1]) || !LOWORD(v22[0]) )
      {
LABEL_19:
        PropVariantClear(v22);
        goto LABEL_20;
      }
      LOWORD(v22[0]) = 19;
      if ( (_BYTE)v6 )
      {
        *(_OWORD *)pvar = 0LL;
        v31 = 0LL;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
          v21,
          &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
          pvar);
        if ( LOWORD(pvar[0]) != 19 || LODWORD(pvar[1]) != 1 || LODWORD(v22[1]) > 1 )
          --LODWORD(v22[1]);
        PropVariantClear(pvar);
LABEL_37:
        v15 = 20 * v8 + 808672;
        goto LABEL_30;
      }
      LODWORD(v22[1]) = 0;
    }
    v15 = 20 * v8 + 808752;
LABEL_30:
    v9 = a1;
    v12 = (*(__int64 (__fastcall **)(__int64, char *, PROPVARIANT *))(*(_QWORD *)v21 + 48LL))(
            v21,
            (char *)&_ImageBase + v15,
            v22);
LABEL_18:
    if ( a3 < 0 )
    {
      v24 = 0LL;
      v16 = *(void (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v24,
        0LL);
      v16(v9, &v24);
      v18 = AudioDgTelemetryProvider::Provider(v17);
      if ( *(_DWORD *)v18 > 2u && tlgKeywordOn((__int64)v18, 0x400000000100LL) )
      {
        v27 = v24;
        v28 = a5;
        v33 = v8;
        v25 = a3;
        v26 = v6;
        v29 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v20,
          (int)&unk_1400B0A5A,
          v19,
          v20,
          (__int64)&v29,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v33,
          &v28,
          &v27);
      }
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v24);
    }
    goto LABEL_19;
  }
  v12 = 0;
LABEL_20:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)v12;
}
