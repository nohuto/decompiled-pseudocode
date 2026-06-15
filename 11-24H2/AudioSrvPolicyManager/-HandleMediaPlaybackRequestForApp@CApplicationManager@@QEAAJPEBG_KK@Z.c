/*
 * XREFs of ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180037D9C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_::_Do_call @ 0x18003AE00 (std--_Func_impl_no_alloc__lambda_0e1598c2378d1c33dd4f2102e3c6083e__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180037C94 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::HandleMediaPlaybackRequestForApp(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        DWORD a4)
{
  int active; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  _UNKNOWN **v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  struct CApplication **i; // rcx
  struct CApplication *v14; // rbx
  CApplicationManager *v15; // rcx
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+20h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+30h] [rbp-40h] BYREF
  DWORD v19; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v20)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  struct TSSession *v22; // [rsp+90h] [rbp+20h] BYREF

  v22 = this;
  active = 0;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v8;
  v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, a2);
    v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( !g_AppTypesBlockedTillConsoleUnlocked )
  {
LABEL_9:
    if ( a2 )
    {
      CWindowsPolicyManager::Lock((__int64)v9, &v16);
      v22 = 0LL;
      if ( (int)TsSessionFromSessionId(a4, 0, &v22) >= 0 )
      {
        for ( i = (struct CApplication **)*((_QWORD *)v22 + 6); ; ++i )
        {
          if ( i == *((struct CApplication ***)v22 + 7) )
          {
            v14 = 0LL;
            goto LABEL_24;
          }
          if ( *((_QWORD *)*i + 87) == a3 )
            break;
        }
        v14 = *i;
LABEL_24:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
        if ( v14 )
        {
          active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v15, v14);
          if ( active < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Fu,
                &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
                active);
            }
            AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1503, active);
          }
          goto LABEL_17;
        }
      }
      else
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
      }
      v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x40000000) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      WPP_SF_S((TRACEHANDLE)v9[2], 0x1Eu, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, a2);
LABEL_17:
    v11 = active;
    goto LABEL_18;
  }
  g_AppTypesBlockedTillConsoleUnlocked = 0;
  v18 = off_180051058;
  v19 = a4;
  v20 = &v18;
  v10 = QueueGenericWorkItem((__int64 *)&v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C9,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_18:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v11;
}
