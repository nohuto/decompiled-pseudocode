/*
 * XREFs of ?Release@?$implements@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowInternal@345@@winrt@@UEAAKXZ @ 0x180102650
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x180102C90 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindow,Windows::Internal::Shell::ITabProxyWindowInternal>::Release(
        __int64 a1)
{
  _QWORD *v1; // rbx
  signed __int64 v2; // rax
  unsigned __int32 v3; // edi
  signed __int64 v4; // rtt

  v1 = (_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  while ( v2 >= 0 )
  {
    v3 = v2 - 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v2 - 1, v2);
    if ( v4 == v2 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v2 + 24));
  if ( !v3 )
    winrt::impl::weak_ref<1,1>::Release((void *)(2 * v2));
LABEL_4:
  if ( !v3 )
  {
    v1[1] = 1LL;
    if ( v1 )
      (*(void (__fastcall **)(_QWORD *))(*v1 + 8LL))(v1);
  }
  return v3;
}
