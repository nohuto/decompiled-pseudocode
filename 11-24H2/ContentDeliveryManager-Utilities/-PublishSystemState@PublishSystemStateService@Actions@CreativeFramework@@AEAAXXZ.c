/*
 * XREFs of ?PublishSystemState@PublishSystemStateService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800A09D0
 * Callers:
 *     ?Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A08E0 (-Invoke@PublishSystemStateService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18009094C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_18009094C.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::PublishSystemStateService::PublishSystemState(
        CreativeFramework::Actions::PublishSystemStateService *this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, _QWORD, __int64); // r14
  __int64 v7; // rsi
  unsigned int v8; // ebp
  const WCHAR *v9; // rax
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v14; // [rsp+38h] [rbp-50h] BYREF
  const WCHAR *v15; // [rsp+40h] [rbp-48h] BYREF
  HSTRING_HEADER v16; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v14);
  v13 = 0LL;
  v2 = *v14;
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 104))(v14, &v13);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v3,
      v12);
  v5 = v13;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64))(*(_QWORD *)v13 + 48LL);
  v7 = *((_QWORD *)this + 5);
  v8 = *((_DWORD *)this + 12);
  v9 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v9 = *(const WCHAR **)v9;
  v15 = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v15, v4);
  v11 = v6(v5, v10[1].Reserved.Reserved1, v8, v7);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishsystemstate.cpp",
      (const char *)(unsigned int)v11,
      v12);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v14);
}
