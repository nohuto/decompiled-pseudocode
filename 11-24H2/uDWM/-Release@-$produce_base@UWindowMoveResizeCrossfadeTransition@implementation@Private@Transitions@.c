/*
 * XREFs of ?Release@?$produce_base@UWindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@X@impl@winrt@@UEAAIXZ @ 0x18004DC50
 * Callers:
 *     <none>
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180025608 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x18004D930 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     ??$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z @ 0x18004E290 (--$_Atomic_reinterpret_as@_J_K@std@@YA_JAEB_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition,winrt::Udwm::Transitions::ITransition,void>::Release(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int32 v5; // edi
  volatile signed __int64 *v6; // rax
  signed __int64 v7; // rdx
  signed __int64 v8; // r8
  bool v9; // zf
  _QWORD *v10; // rax
  __int64 v11; // r8
  void *v13; // r8
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v1 = (a1 - 16) & ((unsigned __int128)-(__int128)a1 >> 64);
  v2 = *(_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1 + 8);
  v3 = v2;
  v4 = v2;
  while ( 1 )
  {
    v14 = v2;
    if ( v2 < 0 )
      break;
    v5 = v3 - 1;
    v15 = v3 - 1;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v14);
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v15);
    v6 = (volatile signed __int64 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1 + 8);
    v2 = _InterlockedCompareExchange64(v6, v7, v8);
    v9 = v8 == v2;
    v4 = v2;
    v3 = v2;
    if ( v9 )
      goto LABEL_4;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(2 * v4 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<1,1>::Release(v13);
LABEL_4:
  if ( !v5 )
  {
    v16 = 1LL;
    std::_Atomic_reinterpret_as<__int64,unsigned __int64>(&v16);
    v10 = (_QWORD *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>(v1 + 8);
    *v10 = v11;
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  }
  return v5;
}
