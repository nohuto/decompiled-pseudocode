/*
 * XREFs of ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z @ 0x18003BAD8
 * Callers:
 *     ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00@Z @ 0x18002CF80 (-SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000AB00 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x18003686C (-ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ.c)
 */

void __fastcall CApplicationManager::ResetProcessDataFlowAccessCheckResults(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  CApplicationManager *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  LPCWCH *v9; // rbx
  _QWORD *v10; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = this;
  v3 = g_ApplicationManager;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = (_QWORD *)*((_QWORD *)v3 + 16);
  v11 = v6;
  v10 = v8;
  while ( v10 )
  {
    v9 = (LPCWCH *)*ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v7, &v10);
    if ( (!a2 || CompareStringOrdinal(a2, -1, v9[25], -1, 1) == 2)
      && (!a3 || CompareStringOrdinal(a3, -1, v9[23], -1, 1) == 2) )
    {
      CProcess::ResetDataFlowAccessCheckResults((CProcess *)v9);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
}
