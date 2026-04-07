/*
 * XREFs of ?GetIids@?$implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@@@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800DE9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x180096690 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 *     WINRT_IMPL_CoTaskMemAlloc @ 0x18009C8F0 (WINRT_IMPL_CoTaskMemAlloc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::GetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  v5 = (-(__int64)(a1 != -16) & a1) + 16;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 32LL))(v5, &v10);
  v6 = v10;
  v7 = 0;
  if ( v10 )
  {
    *a2 = v10;
    v8 = WINRT_IMPL_CoTaskMemAlloc(16LL * v6);
    *a3 = v8;
    if ( v8 )
      std::_Copy_memmove<tagRECT *,tagRECT *>(Src, (__int64)Src + 16 * v10, v8);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return v7;
}
