/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180034568
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E870 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180018A10 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001E320 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180038E28 (--1CApplicationManager@@MEAA@XZ.c)
 * Callees:
 *     ?GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180006310 (-GetApplicationSpecificEndpointInfo@CProcess@@UEAAJPEAPEAUIApplicationSpecificEndpointInfo@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x18001F1E8 (-Find@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@A.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180036630 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct CProcess *v10; // [rsp+68h] [rbp+10h] BYREF
  struct IApplicationSpecificEndpointInfo *v11; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v12 = v4;
  v11 = 0LL;
  if ( (int)CProcess::GetApplicationSpecificEndpointInfo(a2, &v11) >= 0 )
  {
    if ( v11 )
    {
      v5 = (*(__int64 (__fastcall **)(struct IApplicationSpecificEndpointInfo *, _QWORD))(*(_QWORD *)v11 + 72LL))(
             v11,
             *((unsigned int *)a2 + 40));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          307LL,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  v6 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find((_QWORD *)this + 9, &v10);
  if ( v6 )
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt(v7, v6);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v11);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  return 0LL;
}
