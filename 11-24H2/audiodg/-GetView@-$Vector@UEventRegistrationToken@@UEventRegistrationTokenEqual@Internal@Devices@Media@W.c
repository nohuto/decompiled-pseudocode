/*
 * XREFs of ?GetView@?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@UEventRegistrationToken@@@345@@Z @ 0x140079D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@1234@Upermission@01234@@Z @ 0x1400765FC (--0-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegistra.c)
 *     ?InternalRelease@?$ComPtr@V?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14007A3F8 (-InternalRelease@-$ComPtr@V-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::GetView(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  void *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h] BYREF
  void *v11; // [rsp+60h] [rbp+40h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>>::InternalRelease(&v9);
  v9 = 0LL;
  v4 = 0;
  v10 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>(
           (__int64)v5,
           a1);
    v10 = v6;
    v11 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v11);
  if ( v6 )
  {
    v10 = 0LL;
    v9 = v6;
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>>::InternalRelease(&v10);
  if ( v4 >= 0 )
  {
    v7 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *a2 = v7;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<EventRegistrationToken,Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>,XWinRT::PodLifetimeTraits,XWinRT::IntVersionTag,0>>::InternalRelease(&v9);
  return (unsigned int)v4;
}
