/*
 * XREFs of ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180287AB4
 * Callers:
 *     ??R?$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z @ 0x180285194 (--R-$default_delete@VCComputeScribbleScheduler@@@std@@QEBAXPEAVCComputeScribbleScheduler@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetEvent@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBAXXZ @ 0x18007BF7C (-SetEvent@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@w.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18018D230 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x180287A94 (--1-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleStopwatch@@@std@@.c)
 *     ??1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ @ 0x180287BBC (--1ThreadSharedData@CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18028836C (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComputeScribbleScheduler::~CComputeScribbleScheduler(CComputeScribbleScheduler *this)
{
  HANDLE *v1; // rdi
  void *v3; // rdx
  unsigned int v4; // r8d
  const char *v5; // r9
  __int64 v6; // rcx
  void *v7; // rdx
  void *v8; // rdx
  void *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (HANDLE *)((char *)this + 64);
  if ( (unsigned __int64)(*((_QWORD *)this + 8) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    _SetEvent___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBAXXZ((HANDLE *)this + 9);
    if ( WaitForSingleObject(*v1, 0x3E8u) == -1 )
      wil::details::in1diag3::Log_GetLastError(retaddr, v3, v4, v5);
  }
  v6 = *((_QWORD *)this + 26);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 26);
  CComputeScribbleScheduler::ThreadSharedData::~ThreadSharedData((CComputeScribbleScheduler *)((char *)this + 104));
  std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>((_QWORD *)this + 12);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 11,
    v7);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 10,
    v8);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 9,
    v9);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
