/*
 * XREFs of ?Release@?$produce_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18004E100
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18004D930 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18004E290 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::ITransition,void>::Release(
        __int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int32 v5; // ebx
  volatile signed __int64 *v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // r8
  void *v10; // r8
  __int64 v11; // rax
  __int64 *v12; // r8
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1 - 16;
  if ( !a1 )
    v1 = 0LL;
  v2 = *(_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1 + 8);
  v3 = v2;
  v4 = v2;
  while ( 1 )
  {
    v13 = v2;
    if ( v2 < 0 )
      break;
    v5 = v3 - 1;
    v14 = v3 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v13);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v14);
    v6 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1 + 8);
    v2 = _InterlockedCompareExchange64(v6, v7, v8);
    v4 = v2;
    v3 = v2;
    if ( v8 == v2 )
      goto LABEL_6;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v4 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<1,1>::Release(v10);
LABEL_6:
  if ( !v5 )
  {
    v15 = 1LL;
    winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1 + 8);
    v11 = std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v15);
    *v12 = v11;
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  }
  return v5;
}
