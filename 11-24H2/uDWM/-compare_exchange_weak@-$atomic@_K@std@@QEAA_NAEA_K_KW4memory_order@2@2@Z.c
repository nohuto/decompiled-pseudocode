/*
 * XREFs of ?compare_exchange_weak@?$atomic@_K@std@@QEAA_NAEA_K_KW4memory_order@2@2@Z @ 0x18004E1F0
 * Callers:
 *     ?make_weak_ref@?$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18008F5FC (-make_weak_ref@-$root_implements@UWindowJointResizeTransition@implementation@Private@Transitions.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18004E290 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 */

char __fastcall std::atomic<unsigned __int64>::compare_exchange_weak(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  volatile signed __int64 *v4; // rax
  signed __int64 *v5; // rdx
  signed __int64 v6; // r8
  signed __int64 v7; // r9
  signed __int64 v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a3;
  std::_Atomic_reinterpret_as<__int64,unsigned __int64>(a2);
  std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v10);
  v4 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v3);
  v8 = _InterlockedCompareExchange64(v4, v6, v7);
  if ( v7 == v8 )
    return 1;
  *v5 = v8;
  return 0;
}
