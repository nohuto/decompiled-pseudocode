/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180077AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800247B8 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800256F0 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     ??4?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18005937C (--4-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800597C0 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?Stop@CAudioStream@@QEAAJXZ @ 0x180071258 (-Stop@CAudioStream@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 *i; // rdx
  bool v7; // zf
  int updated; // eax
  __int64 *v9; // rax
  __int64 *j; // rdx
  int v11; // eax
  void (__fastcall ***v12)(_QWORD, __int64 *); // rax
  int v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CAudioStream *v17; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v18 = v5;
  for ( i = (__int64 *)*((_QWORD *)this + 14); i != *((__int64 **)this + 15) && (struct CAudioStream *)*i != a2; ++i )
    ;
  if ( i != *((__int64 **)this + 15) )
  {
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=((__int64 *)&v17, i);
    v4 = v17;
    CAudioStream::Stop(v17);
    v7 = (*((_DWORD *)this + 50))-- == 1;
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, 0LL);
      }
      (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
    }
    updated = CAudioStream::UpdateStreamPriority(v4);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB26,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)updated,
        v14);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  if ( v4 )
    goto LABEL_33;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids);
  }
  v9 = (__int64 *)*((_QWORD *)this + 23);
  for ( j = (__int64 *)*((_QWORD *)this + 22); j != v9 && (struct CAudioStream *)*j != a2; ++j )
    ;
  if ( j != v9 )
  {
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=((__int64 *)&v17, j);
    v4 = v17;
    CAudioStream::Stop(v17);
    v7 = (*((_DWORD *)this + 50))-- == 1;
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, 0LL);
      }
      (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 56LL))(this, 0LL);
    }
    v11 = CAudioStream::UpdateStreamPriority(v4);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB4E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v11,
        v14);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  if ( v4 )
  {
LABEL_33:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v12 = (void (__fastcall ***)(_QWORD, __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(
                                                      (__int64)v15,
                                                      (__int64)this,
                                                      1,
                                                      0,
                                                      (__int64)v4,
                                                      (__int64)L"CAudioSession::StopStream");
    CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::ForEachEntry(
      (LPCRITICAL_SECTION)((char *)this + 432),
      v12);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  return 0LL;
}
