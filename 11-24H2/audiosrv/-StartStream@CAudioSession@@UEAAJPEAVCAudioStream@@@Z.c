/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180025490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800247B8 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800256F0 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ?Start@CAudioStream@@QEAAJXZ @ 0x1800A26B8 (-Start@CAudioStream@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180165600 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct CAudioStream **i; // rax
  struct CAudioStream *v6; // r14
  int updated; // eax
  __int64 v8; // r8
  DWORD LastError; // edi
  int v11; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  v14 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v13 = v4;
  for ( i = (struct CAudioStream **)*((_QWORD *)this + 14); i != *((struct CAudioStream ***)this + 15) && *i != a2; ++i )
    ;
  if ( i == *((struct CAudioStream ***)this + 15) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xADA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x88890004LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    return 2290679812LL;
  }
  else
  {
    v6 = *i;
    if ( *i )
      (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 8LL))(*i);
    CAudioStream::Start(v6);
    updated = CAudioStream::UpdateStreamPriority(v6);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xADF,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated,
        v11);
    if ( ++*((_DWORD *)this + 50) == 1 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, this);
      }
      if ( v4 )
      {
        LastError = GetLastError();
        LeaveCriticalSection(v4);
        SetLastError(LastError);
      }
      v4 = 0LL;
      (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v8 = *((unsigned int *)v6 + 82);
    if ( (_DWORD)v8 == 1 )
      MicrosoftTelemetryAssertTriggeredArgs("AudioSrv.dll", 1LL, v8, 1LL);
    *((_DWORD *)v6 + 82) = 1;
    *((_QWORD *)v6 + 42) = L"CAudioSession::StartStream";
    CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 432));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v6 + 16LL))(v6);
    return 0LL;
  }
}
