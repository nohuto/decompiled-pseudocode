/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAXXZ @ 0x18007BB44
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18007CCE0 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInterna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Close(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v3 = (__int64 *)(a1 + 16);
  v4 = 0LL;
  if ( &v8 != (__int64 *)(a1 + 16) )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v8 = 0LL;
  v10 = v4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v5 = (char *)(a1 + 24);
  v6 = 0LL;
  if ( &v9 != v5 )
  {
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
  }
  ReleaseSRWLockExclusive(v2);
  result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
