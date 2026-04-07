/*
 * XREFs of ?Release@?$root_implements@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@5673@@impl@winrt@@QEAAIXZ @ 0x18004DA4C
 * Callers:
 *     ?Release@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x18007AB70 (-Release@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@UUser.c)
 *     ?Release@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x18009B1F0 (-Release@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-_ea_18009B1F0.c)
 *     ?Release@?$produce_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IIterable@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAIXZ @ 0x1800E9B30 (-Release@-$produce_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-_ea_1800E9B30.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800EB01C (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18004D930 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18004E290 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Windows::Foundation::Collections::IIterable<winrt::Udwm::Transitions::UserResizeVisual>>::Release(
        __int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int32 v6; // ebx
  volatile signed __int64 *v7; // rax
  signed __int64 v8; // rdx
  signed __int64 v9; // r8
  bool v10; // zf
  _QWORD *v11; // rax
  __int64 v12; // r8
  void *v14; // r8
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1 + 8;
  v3 = *(_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(a1 + 8);
  v4 = v3;
  v5 = v3;
  while ( 1 )
  {
    v15 = v3;
    if ( v3 < 0 )
      break;
    v6 = v4 - 1;
    v16 = v4 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v15);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v16);
    v7 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1);
    v3 = _InterlockedCompareExchange64(v7, v8, v9);
    v10 = v9 == v3;
    v5 = v3;
    v4 = v3;
    if ( v10 )
      goto LABEL_4;
  }
  v6 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v5 + 24));
  if ( !v6 )
    winrt::impl::weak_ref<1,1>::Release(v14);
LABEL_4:
  if ( !v6 )
  {
    v17 = 1LL;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v17);
    v11 = (_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1);
    *v11 = v12;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  return v6;
}
