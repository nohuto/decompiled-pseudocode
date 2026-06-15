/*
 * XREFs of ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18003934C
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180042990 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000AB00 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?GetNext@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEAVCApplication@@AEAPEAU__POSITION@@@Z @ 0x18000C5F0 (-GetNext@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

struct CApplication *__fastcall CApplicationManager::FindAppFromProcessId(CApplicationManager *this, int a2)
{
  CApplicationManager *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  BOOL v11; // ebx
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *i; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+68h] [rbp+20h] BYREF

  i = this;
  v2 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = (_QWORD *)*((_QWORD *)v2 + 9);
  v7 = 0LL;
  v15 = v6;
  v13 = v4;
  while ( v6 )
  {
    v8 = *ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetNext(v5, &v15);
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
    v10 = *(_QWORD **)(v8 + 72);
    v16 = (struct _RTL_CRITICAL_SECTION *)(v8 + 32);
    v11 = 0;
    for ( i = v10; i; v11 = a2 == *(_DWORD *)(v9 + 160) )
    {
      if ( v11 )
        break;
      v9 = *ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v9, &i);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v16);
    if ( v11 )
    {
      v7 = v8;
      break;
    }
    v6 = v15;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  return (struct CApplication *)v7;
}
