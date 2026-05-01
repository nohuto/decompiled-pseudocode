/*
 * XREFs of _lambda_d2f504444b1331544961ef61763d2cb7_::operator() @ 0x18005F038
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___::Run @ 0x18005EFB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2037807ba102184564a830884e8e7721___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d2f504444b1331544961ef61763d2cb7_::operator()(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // r8
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, SID *, GUID *, __int64 *); // rbx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0LL;
  v11 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = 0LL;
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v5(v4, &SID_ImmersiveApplicationManagerPriv, &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee, &v10);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 184LL))(
           v10,
           *(_QWORD *)(*(_QWORD *)a1 + 608LL),
           &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x230,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v6,
        v8);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v3 = v11;
  }
  LOBYTE(v2) = v3 == 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 120LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           *(_QWORD *)(*(_QWORD *)a1 + 608LL),
           v2);
}
