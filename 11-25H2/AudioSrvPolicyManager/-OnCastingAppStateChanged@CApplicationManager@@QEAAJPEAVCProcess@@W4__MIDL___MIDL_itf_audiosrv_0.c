/*
 * XREFs of ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003A9A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x18003D670 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Do_call.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D668 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x180034204 (-CastingStateChanged@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z.c)
 *     WPP_SF_Sd @ 0x180038478 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnCastingAppStateChanged(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, int a3)
{
  CApplicationManager *v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  struct CApplication *v7; // rdi
  int v8; // esi
  int v9; // ebx
  int v11; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v12 = v6;
  v7 = *(struct CApplication **)(a2 + 224);
  v8 = 0;
  if ( v7
    || (CApplicationManager::Register(v5, (struct CProcess *)a2), (v7 = *(struct CApplication **)(a2 + 224)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v11 = a3;
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x29u,
        &WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
        *(const wchar_t **)(a2 + 176),
        v11);
    }
    v9 = *((_DWORD *)v7 + 52) != 0;
    CProcess::CastingStateChanged(a2, a3);
    LOBYTE(v8) = *((_DWORD *)v7 + 52) != 0;
    if ( v9 != v8 )
      CApplicationManager::OnApplicationInteractivityChanged(v5, v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  return 0LL;
}
