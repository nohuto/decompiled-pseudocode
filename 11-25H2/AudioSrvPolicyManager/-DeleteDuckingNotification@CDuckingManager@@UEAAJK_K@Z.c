/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002FB80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x1800284DC (--1CDuckingNotification@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@std@@V_lambda_958c91c43235a8789bf8f41d13e0d823_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_958c91c43235a8789bf8f41d13e0d823_@@@Z @ 0x18002E9CC (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList_.c)
 *     ??0CDuckingNotification@@QEAA@AEBV0@@Z @ 0x18002EB00 (--0CDuckingNotification@@QEAA@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002FF8C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?erase@?$vector@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@@2@0@Z @ 0x180031B64 (-erase@-$vector@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@V-$.c)
 *     WPP_SF_di @ 0x180031E48 (WPP_SF_di.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(CDuckingManager *this, __int64 a2, unsigned __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  CDuckingNotification *v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rax
  ATL::CAtlException *v13; // rbx
  char v14; // [rsp+30h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  ATL::CAtlException *v18; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[56]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v20[16]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v21; // [rsp+A8h] [rbp-60h]
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C8h] [rbp-40h]

  v4 = a2;
  v21 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v21) = 0;
  v23 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, (unsigned int)a2, a3);
  }
  v6 = CDuckingNotification::Init((CDuckingNotification *)v20, v4, 0LL, a3);
  if ( v6 < 0 )
    goto LABEL_8;
  try
  {
    v9 = CDuckingNotification::CDuckingNotification(
           (CDuckingNotification *)v19,
           (const struct CDuckingNotification *)v20,
           v7,
           v8);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v15 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
    v14 = 0;
    v10 = *((_QWORD *)this + 14);
    v16[0] = v9;
    v16[1] = &v14;
    v11 = std::remove_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>>,_lambda_958c91c43235a8789bf8f41d13e0d823_>(
            &v17,
            *((_QWORD *)this + 13),
            v10,
            (__int64)v16);
    std::vector<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry,std::allocator<CLockedList_UniqueValuesOnly<CDuckingNotification,0>::LockedListEntry>>::erase(
      (char *)this + 104,
      v16,
      *v11,
      v10);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
    CDuckingNotification::~CDuckingNotification(v9);
    v6 = 0;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v13 = v18;
    if ( *(_DWORD *)v18 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v15) = *(_DWORD *)v13;
    v6 = (int)v15;
    if ( (int)v15 < 0 )
    {
LABEL_8:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, v6);
      }
      AudPolicyLogError("CDuckingManager::DeleteDuckingNotification", 469, v6);
    }
  }
  CDuckingNotification::~CDuckingNotification((CDuckingNotification *)v20);
  return (unsigned int)v6;
}
