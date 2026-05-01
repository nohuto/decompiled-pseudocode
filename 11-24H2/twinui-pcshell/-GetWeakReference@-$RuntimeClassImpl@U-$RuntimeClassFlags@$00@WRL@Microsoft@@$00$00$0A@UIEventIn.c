/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIEventInvocationContext@details@wil@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18016D9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18016DE68 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,wil::details::IEventInvocationContext,Microsoft::WRL::FtmBase>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rbx
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v6; // rcx
  unsigned __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v11; // rbx

  v2 = *(_QWORD *)(a1 + 48);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 8), a2);
    v6 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    v7 = (WeakReference >> 1) | 0x8000000000000000uLL;
    do
    {
      LODWORD(v6->Release) = v2;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v7, v2);
      v8 = v2 == v9;
      v2 = v9;
      if ( v8 )
      {
        a2->lpVtbl = v6;
        return 0LL;
      }
    }
    while ( v9 >= 0 );
    v6->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))&Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    LODWORD(v6->Release) = -1073741823;
    HIDWORD(v6->AddRef) = -1073741823;
    operator delete(v6, (const struct std::nothrow_t *)0x20);
  }
  v11 = 2 * v2;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v11 + 12), (volatile int *)a2);
  a2->lpVtbl = (struct IUnknownVtbl *)v11;
  return 0LL;
}
