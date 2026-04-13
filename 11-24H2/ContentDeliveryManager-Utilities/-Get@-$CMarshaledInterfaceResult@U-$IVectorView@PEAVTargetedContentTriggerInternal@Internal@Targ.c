/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18007C2AC
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18007C5E0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007B340 (--4-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18007FEA0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // r15
  __int64 Ptr; // rdi
  __int64 v7; // r14
  bool v8; // r9
  unsigned int v9; // ebx
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF
  __int64 v15; // [rsp+60h] [rbp+40h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::operator=(&v13, &a1[3].Ptr);
  Ptr = (__int64)a1[2].Ptr;
  v7 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v4 = Ptr;
    v15 = 0LL;
    v14 = Ptr;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v7 = Ptr;
  }
  ReleaseSRWLockShared(v5);
  *a2 = 0LL;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v4 + 24LL))(
           v4,
           &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
           a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    return v9;
  }
  else
  {
    v11 = v13;
    if ( v13 )
    {
      v12 = CMarshaledInterface::_Unmarshal(
              (CMarshaledInterface *)&v13,
              &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
              a2,
              v8);
      v11 = v13;
    }
    else
    {
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    return v12;
  }
}
