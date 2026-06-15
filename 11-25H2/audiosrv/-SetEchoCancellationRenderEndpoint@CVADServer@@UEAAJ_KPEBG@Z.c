/*
 * XREFs of ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x180107C10
 * Callers:
 *     AudioServerSetEchoCancellationRenderEndpoint @ 0x18010B600 (AudioServerSetEchoCancellationRenderEndpoint.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180064C38 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075A60 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ?SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z @ 0x1800CA78C (-SetEchoCancellationRenderEndpoint@CAudioStream@@QEAAJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::SetEchoCancellationRenderEndpoint(CVADServer *this, __int64 a2, unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v7; // zf
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r8
  const char *v13; // r9
  unsigned int v14; // edi
  int v15; // eax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, __int64 *); // rbx
  struct AudioSrvTelemetryProvider *v18; // rax
  _DWORD *v19; // rbx
  int v20; // eax
  __int64 v21; // rcx
  const WCHAR *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const WCHAR *v27; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v28; // [rsp+48h] [rbp-18h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v32; // [rsp+80h] [rbp+20h] BYREF
  __int64 v33; // [rsp+98h] [rbp+38h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v7 = *((_DWORD *)this + 77) == 3;
  v30 = v3;
  if ( v7 )
  {
    v8 = -2004287422;
    v9 = 5487LL;
LABEL_6:
    v10 = v8;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    goto LABEL_20;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v9 = 5488LL;
LABEL_5:
    v8 = -2004287487;
    goto LABEL_6;
  }
  if ( !*((_QWORD *)this + 18) )
  {
    v9 = 5489LL;
    goto LABEL_5;
  }
  v11 = CVADServer::ValidateStreamHandle(this, a2);
  v14 = v11;
  if ( v11 >= 0 )
  {
    v15 = CAudioStream::SetEchoCancellationRenderEndpoint(*((CAudioStream **)this + 22), a3, v12, v13);
    v8 = v15;
    if ( v15 < 0 )
    {
      v10 = (unsigned int)v15;
      v9 = 5492LL;
      goto LABEL_7;
    }
    v16 = *((_QWORD *)this + 22);
    v33 = 0LL;
    v17 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v16 + 8) + 24LL);
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v33);
    if ( v17(v16 + 8, &v33) >= 0 )
    {
      v18 = AudioSrvTelemetryProvider::Instance();
      v19 = (_DWORD *)*((_QWORD *)v18 + 1);
      if ( *v19 > 4u && tlgKeywordOn(*((_QWORD *)v18 + 1), 512LL) )
      {
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
        v21 = *((_QWORD *)this + 18);
        v32 = v20;
        v22 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v21 + 8) + 64LL))(v21 + 8);
        v23 = *((_QWORD *)this + 22);
        v27 = v22;
        v28 = a3;
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v23 + 8) + 80LL))(v23 + 8);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v19,
          byte_1801A2A72,
          v24,
          v25,
          (__int64)&v29,
          &v28,
          &v27,
          (__int64)&v32);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
    v8 = 0;
  }
  else
  {
    v8 = -2005139336;
    if ( v11 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1572,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11);
      v8 = v14;
    }
  }
LABEL_20:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v30);
  return v8;
}
