/*
 * XREFs of ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x180105CA0
 * Callers:
 *     AudioServerStartStreamAborted @ 0x18010B970 (AudioServerStartStreamAborted.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005BC80 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::AbortStartStream(CVADServer *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rdi
  unsigned int v4; // esi
  _QWORD *v5; // r15
  int (__fastcall *v6)(__int64, __int64 *); // rbx
  struct AudioSrvTelemetryProvider *v7; // rax
  _DWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v17[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v19; // [rsp+90h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+A0h] [rbp+50h] BYREF
  const WCHAR *v22; // [rsp+A8h] [rbp+58h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v3 = *((_QWORD *)this + 22);
  v4 = 0;
  v21 = v1;
  v20 = 0LL;
  if ( v3 )
  {
    v5 = (_QWORD *)((char *)this + 144);
    if ( *((_QWORD *)this + 18) )
    {
      v6 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v3 + 8) + 24LL);
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v20);
      if ( v6(v3 + 8, &v20) >= 0 )
      {
        v7 = AudioSrvTelemetryProvider::Instance();
        v8 = (_DWORD *)*((_QWORD *)v7 + 1);
        if ( *v8 > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 512LL) )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20);
          v10 = *((_QWORD *)this + 18);
          v19 = v9;
          v11 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 64LL))(v10 + 8);
          v12 = *((_QWORD *)this + 22);
          v22 = v11;
          *(_QWORD *)v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 80LL))(v12 + 8);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
            (__int64)v8,
            byte_1801A2E94,
            v13,
            v14,
            (__int64)v17,
            &v22,
            (__int64)&v19);
        }
      }
    }
  }
  else
  {
    v5 = (_QWORD *)((char *)this + 144);
  }
  if ( *((_DWORD *)this + 40) )
  {
    if ( *v5 )
    {
      if ( *((_QWORD *)this + 22) )
      {
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 65);
        goto LABEL_16;
      }
      v15 = 1858LL;
    }
    else
    {
      v15 = 1857LL;
    }
  }
  else
  {
    v15 = 1856LL;
  }
  v4 = -2004287487;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890001LL);
LABEL_16:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  return v4;
}
