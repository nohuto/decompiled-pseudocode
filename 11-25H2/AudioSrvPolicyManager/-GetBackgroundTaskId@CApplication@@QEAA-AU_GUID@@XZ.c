/*
 * XREFs of ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x180034AAC
 * Callers:
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003BDA0 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000AB00 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

struct _GUID *__fastcall CApplication::GetBackgroundTaskId(CApplication *this, struct _GUID *__return_ptr retstr)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *Next; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v11; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+28h] [rbp-10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *retstr = GUID_00000000_0000_0000_0000_000000000000;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v6 = (_QWORD *)*((_QWORD *)this + 9);
  v11 = v6;
  v12 = v2;
  while ( v6 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v11);
    v8 = *Next;
    if ( !*(_DWORD *)(*Next + 416LL) )
    {
      v9 = *(_QWORD *)(v8 + 520);
      v5 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - v9;
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == v9 )
        v5 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4
           - _mm_srli_si128(*(__m128i *)(v8 + 520), 8).m128i_u64[0];
      if ( v5 )
      {
        *retstr = *(struct _GUID *)(v8 + 520);
        break;
      }
    }
    v6 = v11;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  return retstr;
}
