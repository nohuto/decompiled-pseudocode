/*
 * XREFs of ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x180038518
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Do_call @ 0x18002B010 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D798 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180031CA4 (-DialogSessionStateChanged@CApplication@@QEAAXH@Z.c)
 *     WPP_SF_Sd @ 0x180035A98 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnDialogSessionStateChanged(
        struct _RTL_CRITICAL_SECTION *this,
        struct CProcess *a2,
        unsigned __int8 a3)
{
  int v3; // r15d
  CApplicationManager *v5; // rbp
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  struct CApplication *v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = this;
  v3 = a3;
  v5 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v6;
  v7 = (struct CApplication *)*((_QWORD *)a2 + 28);
  v8 = 0;
  if ( v7 || (CApplicationManager::Register(v5, a2), (v7 = (struct CApplication *)*((_QWORD *)a2 + 28)) != 0LL) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
        *((const wchar_t **)a2 + 22),
        v3);
    }
    v9 = *((_DWORD *)v7 + 52) != 0;
    if ( !*((_DWORD *)a2 + 104) )
    {
      v10 = *((_DWORD *)a2 + 129);
      v11 = v10 - 1;
      v12 = v10 + 1;
      if ( !(_BYTE)v3 )
        v12 = v11;
      *((_DWORD *)a2 + 129) = v12;
      if ( v12 >= 0 )
        CApplication::DialogSessionStateChanged(*((CApplication **)a2 + 28), 2 * v3 - 1);
      else
        *((_DWORD *)a2 + 129) = 0;
    }
    LOBYTE(v8) = *((_DWORD *)v7 + 52) != 0;
    if ( v9 != v8 )
      CApplicationManager::OnApplicationInteractivityChanged(v5, v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return 0LL;
}
