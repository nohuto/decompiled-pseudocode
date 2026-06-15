/*
 * XREFs of ?ThreadpoolCallback@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x14007DB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140045738 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?CoInitializeEx@wil@@YA?AV?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@1@K@Z @ 0x14004A724 (-CoInitializeEx@wil@@YA-AV-$unique_call@P6AXXZ$1-CoUninitialize@@YAXXZ$00@1@K@Z.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@Z @ 0x140075930 (--$DoInvoke@V_lambda_0024b6ff9a14fcf65a4c3da593d931bf_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@Storage@4@@Z @ 0x1400766D4 (--0AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@QEAA@PEAUIBuffer@Streams@St.c)
 *     ??1?$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140076DA4 (--1-$com_ptr_t@VAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@Uerr_returncod.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  __int64 *Ptr; // rcx
  __int64 v7; // rax
  struct Windows::Storage::Streams::IBuffer *v8; // r14
  RTL_SRWLOCK *v9; // rax
  RTL_SRWLOCK *v10; // rbx
  int v11; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Storage::Streams::IBuffer *v12; // [rsp+28h] [rbp-38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp-30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+38h] [rbp-28h] BYREF
  RTL_SRWLOCK *v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+88h] [rbp+28h] BYREF

  wil::CoInitializeEx(&v17);
  if ( Context )
  {
    v11 = 0;
    while ( (*(int (__fastcall **)(PVOID, int *))(*(_QWORD *)Context[24].Ptr + 56LL))(Context[24].Ptr, &v11) >= 0 && v11 )
    {
      v13 = 0LL;
      v12 = 0LL;
      Ptr = (__int64 *)Context[24].Ptr;
      v7 = *Ptr;
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *, _QWORD, struct Windows::Storage::Streams::IBuffer **))(v7 + 48))(
        Ptr,
        0LL,
        &v12);
      if ( v12 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)Context[24].Ptr + 96LL))(Context[24].Ptr, 0LL);
        v8 = v12;
        v9 = (RTL_SRWLOCK *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
        v13 = v9;
        v10 = 0LL;
        if ( v9 )
        {
          v10 = (RTL_SRWLOCK *)Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::AudioDeviceBrokerChangedEventArgs(
                                 (Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *)v9,
                                 v8);
          v13 = 0LL;
        }
        Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>((void **)&v13);
        v13 = v10;
        if ( v10 )
        {
          v15[0] = v10;
          v14 = Context;
          *(_QWORD *)&v16 = &v14;
          *((_QWORD *)&v16 + 1) = v15;
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_0024b6ff9a14fcf65a4c3da593d931bf_>(
            Context + 19,
            &v16);
        }
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v12);
      wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>(&v13);
    }
    AcquireSRWLockExclusive(Context + 27);
    v15[0] = Context + 27;
    if ( !LOBYTE(Context[28].Ptr) )
      SetThreadpoolWait(Wait, Context[23].Ptr, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v15);
  }
  if ( v17 )
    CoUninitialize();
}
