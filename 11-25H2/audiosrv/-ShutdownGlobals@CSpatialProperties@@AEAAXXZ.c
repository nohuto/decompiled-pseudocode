/*
 * XREFs of ?ShutdownGlobals@CSpatialProperties@@AEAAXXZ @ 0x180138290
 * Callers:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800A4374 (--1CSpatialProperties@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x180087994 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180138530 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSpatialProperties::ShutdownGlobals(struct _RTL_CRITICAL_SECTION *this)
{
  bool v1; // zf
  CSpatialAudioTechnologies *v2; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  EnterCriticalSection(&CSpatialProperties::s_globalsLock);
  v1 = CSpatialProperties::s_refCount-- == 1;
  v3 = &CSpatialProperties::s_globalsLock;
  if ( v1 )
  {
    wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset();
    CSpatialAudioTechnologies::FreeTopologyList(v2);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v3);
}
