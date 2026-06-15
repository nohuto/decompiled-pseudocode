/*
 * XREFs of ?OnStart@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAJXZ @ 0x14007D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400192CC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x140078E08 (--0ModuleCommandResult@Devices@Media@Windows@@QEAA@W4SendCommandStatus@123@PEAUIBuffer@Streams@S.c)
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x14007AF00 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Device.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::OnStart(
        Windows::Media::Devices::SendCommandAsyncOperation *this)
{
  __int64 v2; // rbx
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64 *); // rsi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  void *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v15; // [rsp+50h] [rbp+20h] BYREF
  __int64 v16; // [rsp+58h] [rbp+28h] BYREF
  void *v17; // [rsp+60h] [rbp+30h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(&v16, *(_QWORD *)(*((_QWORD *)this + 21) + 96LL));
  v2 = v16;
  if ( v16 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v16 + 56LL);
    v7 = v15;
    v15 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v6(v2, *((_QWORD *)this + 21), *((_QWORD *)this + 22), &v15);
    v3 = v8;
    if ( v8 >= 0 )
    {
      v9 = v15;
      v10 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = v10;
      v11 = 0LL;
      if ( v10 )
      {
        v11 = Windows::Media::Devices::ModuleCommandResult::ModuleCommandResult((__int64)v10, 0, v9);
        v17 = 0LL;
      }
      Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v17);
      v12 = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = v11;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( !*((_QWORD *)this + 19) )
      {
        v3 = -2147024882;
        v4 = 2147942414LL;
        v5 = 1750LL;
        goto LABEL_8;
      }
      v8 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion((__int64)this);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v3 = 0;
        goto LABEL_18;
      }
      v5 = 1753LL;
    }
    else
    {
      v5 = 1745LL;
    }
    v4 = (unsigned int)v8;
  }
  else
  {
    v3 = -2147467261;
    v4 = 2147500035LL;
    v5 = 1743LL;
  }
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v4);
LABEL_18:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
  return v3;
}
