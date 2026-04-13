/*
 * XREFs of ?FindAllWebAccountsAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x18002F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetActivationFactory@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180025588 (--$GetActivationFactory@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Window.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::IdentityManager::FindAllWebAccountsAsync(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  wil::GetActivationFactory<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>(
    (const WCHAR *)&v9,
    a2,
    a3);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 96LL))(v9, a2);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4,
      v7);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v9);
  return v5;
}
