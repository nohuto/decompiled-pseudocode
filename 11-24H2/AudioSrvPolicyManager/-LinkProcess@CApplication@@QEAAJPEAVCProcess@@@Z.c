/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180032CC8
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012AA0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D798 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180011620 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180018D34 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002B05C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x180030DF8 (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180032038 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // r14
  CApplication *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // r8d
  int v6; // r11d
  _DWORD *v7; // rcx
  _DWORD *v8; // rdx
  _DWORD *v9; // r9
  _DWORD *v10; // r10
  unsigned int v11; // esi
  int v12; // eax
  __int64 result; // rax
  int *v14; // rbx
  ATL::CAtlException *v15; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+20h] BYREF

  v18 = a2;
  v2 = a2;
  v3 = this;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v20 = v4;
  *((_DWORD *)v3 + 162) = *((_DWORD *)v2 + 105);
  v5 = *((_DWORD *)v2 + 106);
  *((_DWORD *)v3 + 163) = v5;
  *((_BYTE *)v3 + 720) = *((_BYTE *)v2 + 786);
  v6 = *((_DWORD *)v3 + 164) | *((_DWORD *)v2 + 111);
  *((_DWORD *)v3 + 164) = v6;
  v7 = (_DWORD *)((char *)v3 + 208);
  v8 = (_DWORD *)((char *)v3 + 216);
  v9 = (_DWORD *)((char *)v3 + 324);
  v10 = (_DWORD *)((char *)v3 + 328);
  if ( !v5 )
  {
    *v7 |= 1u;
    *v8 = 2;
    *v9 = 2;
    *v10 = 2;
  }
  if ( v6 )
  {
    *v7 |= 0x40u;
    *v8 = 2;
    *v9 = 2;
    *v10 = 2;
    *(_QWORD *)((char *)v3 + 620) = 0LL;
    *(_QWORD *)((char *)v3 + 628) = 0LL;
    *(_QWORD *)((char *)v3 + 636) = 0LL;
    *((_DWORD *)v3 + 161) = 1;
  }
  if ( !(unsigned int)CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 171) = 1;
  try
  {
    v11 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      (_QWORD *)v3 + 9,
      &v18);
  }
  catch ( ATL::CAtlException *v15 )
  {
    v14 = (int *)v15;
    if ( *(_DWORD *)v15 == -1073741571 )
      _o__resetstkoflw();
    v19 = *v14;
    v11 = v19;
    if ( v19 >= 0 )
    {
      v3 = this;
      v2 = v18;
      goto LABEL_9;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, v19);
    }
    AudPolicyLogError("CApplication::LinkProcess", 286, v11);
LABEL_17:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
    result = v11;
  }
LABEL_9:
  v12 = CApplication::RegisterProcessWithApplicationSpecificEndpointInfo(v3, v2);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      278LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v12);
  wil::com_ptr_t<CApplication,wil::err_returncode_policy>::operator=((__int64 *)v2 + 28, (volatile int *)v3);
  goto LABEL_17;
}
