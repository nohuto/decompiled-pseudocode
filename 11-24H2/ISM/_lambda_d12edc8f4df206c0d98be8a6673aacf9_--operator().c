/*
 * XREFs of _lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator() @ 0x18000DC1C
 * Callers:
 *     std::call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___ @ 0x180083074 (std--call_once__lambda_d12edc8f4df206c0d98be8a6673aacf9___.c)
 * Callees:
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x18000D810 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18000DE7C (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ??4?$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVMPCManager@@@Z @ 0x18000EE10 (--4-$ComPtr@VMPCManager@@@WRL@Microsoft@@QEAAAEAV012@PEAVMPCManager@@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008DEC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z @ 0x180099870 (-Create@MPCConstantManager@@SAJPEAVMPCManagerConnection@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z @ 0x1800B6D38 (-MPCManager_InitializationFailed_@ISMTracing@@QEAAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
unsigned int lambda_d12edc8f4df206c0d98be8a6673aacf9_::operator()()
{
  Microsoft::Bamo::BaseBamoConnection *v0; // rbx
  unsigned __int64 v1; // rdx
  unsigned __int8 v2; // cl
  int v3; // edi
  size_t v4; // rcx
  int v5; // eax
  const char *v6; // r9
  size_t v7; // rbx
  __int64 (__fastcall *v8)(size_t, __int64, const wchar_t *, __int64 *); // rdi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r9
  int v12; // eax
  MPCManager *v13; // rax
  __int64 v14; // rcx
  unsigned int result; // eax
  __int64 v16; // rdi
  MPCManager *v17; // rcx
  ISMTracing *v18; // rcx
  int v19; // [rsp+20h] [rbp-20h]
  int v20; // [rsp+20h] [rbp-20h]
  __int128 v21; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  size_t v23; // [rsp+60h] [rbp+20h] BYREF
  __int64 v24; // [rsp+68h] [rbp+28h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v25; // [rsp+70h] [rbp+30h] BYREF
  __int64 v26; // [rsp+78h] [rbp+38h] BYREF

  v23 = 0LL;
  v0 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  v3 = QueryTransientObjectSecurityDescriptor(8LL, L"MPCManager", &v26);
  if ( v3 < 0 )
  {
    if ( ISMTracing::IsEnabled(v2, v1) )
    {
      ISMTracing::Instance();
      ISMTracing::MPCManager_InitializationFailed_(v18, v3);
    }
  }
  else
  {
    v4 = v23;
    v23 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(size_t))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = CoreUICreate(&v23);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v5,
        v19);
    v7 = v23;
    if ( !v23 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x2A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        v6);
    v8 = *(__int64 (__fastcall **)(size_t, __int64, const wchar_t *, __int64 *))(*(_QWORD *)v23 + 56LL);
    v9 = v24;
    v24 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v8(v7, v26, L"System\\MPCManagerPort", &v24);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v10,
        v19);
    v25 = 0LL;
    DWORD2(v21) = 1;
    *(_QWORD *)&v21 = 0LL;
    v12 = Microsoft::Bamo::BaseBamoConnection::CreateServer<MPCManagerConnection>(v23, v24, &v21, v11, &v25);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x39,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v12,
        v20);
    v0 = v25;
  }
  MPCConstantManager::Create(v0);
  *(_QWORD *)&v21 = operator new(0x58uLL);
  v13 = MPCManager::MPCManager((MPCManager *)v21, v0);
  result = Microsoft::WRL::ComPtr<MPCManager>::operator=(v14, v13);
  if ( v0 )
  {
    v16 = *((_QWORD *)v0 + 31);
    v17 = MPCManager::s_instance;
    *((_QWORD *)v0 + 31) = MPCManager::s_instance;
    if ( v17 )
      result = (**((__int64 (__fastcall ***)(__int64))v17 + 2))((__int64)v17 + 16);
    if ( v16 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 16) + 8LL))(v16 + 16);
  }
  if ( v24 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v0 )
    result = Microsoft::Bamo::BaseBamoConnection::Release(v0);
  if ( v23 )
    return (*(__int64 (__fastcall **)(size_t))(*(_QWORD *)v23 + 16LL))(v23);
  return result;
}
