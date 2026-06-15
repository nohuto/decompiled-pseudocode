/*
 * XREFs of ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003CBE4
 * Callers:
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x18003D460 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Find@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPickerHostContext@@PEAU3@@Z @ 0x1800177B0 (-Find@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@Q.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x18001D4C0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001ECB8 (-FreeNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x18003CABC (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PickerHostContextManager::DestroyPickerHostContext(
        PickerHostContextManager *this,
        struct CPickerHostContext *a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rax
  PickerHostContextManager *v5; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = this;
  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v6 = &PickerHostContextManager::s_csPickerHostContextList;
  v4 = ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::Find(v3, &v5);
  if ( v4 )
  {
    if ( v4 == (__int64 *)PickerHostContextManager::s_PickerHostContextList )
      PickerHostContextManager::s_PickerHostContextList = *v4;
    else
      *(_QWORD *)v4[1] = *v4;
    if ( v4 == (__int64 *)qword_180066F00 )
      qword_180066F00 = v4[1];
    else
      *(_QWORD *)(*v4 + 8) = v4[1];
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode(
      (__int64)&PickerHostContextManager::s_PickerHostContextList,
      v4);
    CPickerHostContext::RevokeInteractivityFromApps(this);
    if ( this )
      CPickerHostContext::`scalar deleting destructor'((__int64 **)this);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
}
