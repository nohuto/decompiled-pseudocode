/*
 * XREFs of ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800B1970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18005377C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x1800A1B1C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessSubmixManager::GetProcessSubmixById(
        CProcessSubmixManager *this,
        struct CAppSubmixClient *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v8; // rbp
  _QWORD **v9; // r14
  _QWORD *i; // rbx
  struct IUnknown **v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  struct IProcessSubmixProxy *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IProcessSubmixProxy *v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = *((_QWORD *)a2 + 1);
  v18 = v4;
  v9 = *(_QWORD ***)(v8 + 32);
  for ( i = *v9; ; i = (_QWORD *)*i )
  {
    v11 = (struct IUnknown **)(i + 2);
    if ( i == v9 || ((__int64 (__fastcall *)(struct IUnknown *))(*v11)->lpVtbl[8].Release)(*v11) == a3 )
      break;
  }
  if ( i == *(_QWORD **)(v8 + 32) )
  {
    v12 = -2147023728;
    v13 = 558LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)v12);
    goto LABEL_14;
  }
  v12 = 0;
  if ( HasTooManyReferences(*v11) )
  {
    v12 = -2147024882;
    v13 = 561LL;
    goto LABEL_9;
  }
  wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
    &v17,
    (__int64)*v11);
  v14 = v17;
  if ( v17 )
  {
    *a4 = v17;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  else
  {
    *a4 = 0LL;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
LABEL_14:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v18);
  return v12;
}
