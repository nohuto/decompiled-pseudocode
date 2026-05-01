/*
 * XREFs of ?Invoke@?$delegate@USnapFlyoutInstanceShownHandler@SnapComponent@Shell@Internal@Windows@winrt@@V_lambda_e7e6bc5189a9e0c7fe0bbbff3c3afb53_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x1805B34A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801BC9A8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceShownHandler,_lambda_e7e6bc5189a9e0c7fe0bbbff3c3afb53_>::Invoke(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  struct IUnknown v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = a1 + 16;
  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), &v7);
  try
  {
    if ( v7.lpVtbl )
    {
      LOBYTE(v5) = a3;
      (*(void (__fastcall **)(char *, __int64 *, __int64))(v4 + 8))((char *)v7.lpVtbl + *(int *)(v4 + 16), &v8, v5);
    }
    winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
