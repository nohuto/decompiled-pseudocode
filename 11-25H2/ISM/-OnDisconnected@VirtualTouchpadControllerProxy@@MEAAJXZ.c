/*
 * XREFs of ?OnDisconnected@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180133920
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800733F4 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180074494 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ @ 0x180077490 (-GetTouchEnabled@BamoShellGesturesClientProxy@@UEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Erase@PEAVVirtualTouchpadControllerProxy@@@?$_Hash@V?$_Umap_traits@PEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@V?$_Uhash_compare@PEAVVirtualTouchpadControllerProxy@@U?$hash@PEAVVirtualTouchpadControllerProxy@@@std@@U?$equal_to@PEAVVirtualTouchpadControllerProxy@@@3@@std@@V?$allocator@U?$pair@QEAVVirtualTouchpadControllerProxy@@UVPTP_ID@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBQEAVVirtualTouchpadControllerProxy@@@Z @ 0x180132614 (--$_Erase@PEAVVirtualTouchpadControllerProxy@@@-$_Hash@V-$_Umap_traits@PEAVVirtualTouchpadContro.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180132C34 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180134718 (-ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180199CF8 (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x180199ED4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnDisconnected(VirtualTouchpadControllerProxy *this)
{
  VirtualTouchpadContextProvider *Instance; // rax
  int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VirtualTouchpadControllerProxy *v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::VirtualTouchpad::ServerDisconnected(this);
  if ( *((_BYTE *)this + 228) )
  {
    if ( BamoShellGesturesClientProxy::GetTouchEnabled((VirtualTouchpadControllerProxy *)((char *)this + 8)) )
    {
      Instance = VirtualTouchpadContextProvider::GetInstance();
      v3 = VirtualTouchpadContextProvider::OnTouchpadRemoved(Instance, (unsigned __int64)this);
      v4 = v3;
      if ( v3 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadc"
                   "ontroller\\server\\virtualtouchpadcontrollerproxy.cpp",
          (const char *)(unsigned int)v3);
        return v4;
      }
    }
    *((_BYTE *)this + 228) = 0;
    VirtualTouchpadControllerProxy::ConfigureVirtualTouchpad(this);
  }
  wil::EnterCriticalSection(&v9, &VirtualTouchpadControllerProxy::s_lock);
  v8 = this;
  if ( std::_Hash<std::_Umap_traits<VirtualTouchpadControllerProxy *,VPTP_ID,std::_Uhash_compare<VirtualTouchpadControllerProxy *,std::hash<VirtualTouchpadControllerProxy *>,std::equal_to<VirtualTouchpadControllerProxy *>>,std::allocator<std::pair<VirtualTouchpadControllerProxy * const,VPTP_ID>>,0>>::_Erase<VirtualTouchpadControllerProxy *>(
         v6,
         (const unsigned __int8 *)&v8) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontr"
               "oller\\server\\virtualtouchpadcontrollerproxy.cpp",
      (const char *)0x8000FFFFLL);
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v9);
  return 0LL;
}
