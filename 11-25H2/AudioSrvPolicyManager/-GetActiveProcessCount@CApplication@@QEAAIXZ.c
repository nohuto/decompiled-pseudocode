/*
 * XREFs of ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180034A18
 * Callers:
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800356A8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z @ 0x18003B334 (-ReevaluateActiveMediaAppStatusForApplication@CApplicationManager@@IEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000AB00 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CApplication::GetActiveProcessCount(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int64 *Next; // rax
  unsigned int v7; // edx
  _QWORD *i; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  v10 = v1;
  v5 = 0;
  for ( i = v4; i; v5 = v7 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &i);
    v7 = v5 + 1;
    v3 = *Next;
    if ( *(_DWORD *)(*Next + 416) )
      v7 = v5;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return v5;
}
