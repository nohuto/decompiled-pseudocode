/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x140019DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x140019CF8 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019FC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140045240 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v8; // rcx
  unsigned __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rax

  v2 = *(_QWORD *)(a1 + 16);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 8), a2);
    v8 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    v9 = (WeakReference >> 1) | 0x8000000000000000uLL;
    do
    {
      LODWORD(v8->Release) = v2;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v2);
      v10 = v2 == v11;
      v2 = v11;
      if ( v10 )
      {
        a2->lpVtbl = v8;
        return 0LL;
      }
    }
    while ( v11 >= 0 );
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
      1u);
  }
  v5 = 2 * v2;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), (volatile int *)a2);
  a2->lpVtbl = (struct IUnknownVtbl *)v5;
  return 0LL;
}
