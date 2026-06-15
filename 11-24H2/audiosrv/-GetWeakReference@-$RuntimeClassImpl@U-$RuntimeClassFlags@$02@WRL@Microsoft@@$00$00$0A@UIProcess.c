/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18000A580
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18000B584 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D600 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18005D000 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  signed __int32 v6; // eax
  __int64 WeakReference; // rcx
  bool v9; // zf
  __int64 v10; // rax
  volatile int *v11; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 16), a2);
    if ( !WeakReference )
      return 2147942414LL;
    do
    {
      *(_DWORD *)(WeakReference + 16) = v2;
      v10 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 24),
              (WeakReference >> 1) | 0x8000000000000000uLL,
              v2);
      v9 = v2 == v10;
      v2 = v10;
      if ( v9 )
      {
        a2->lpVtbl = (struct IUnknownVtbl *)WeakReference;
        return 0LL;
      }
    }
    while ( v10 >= 0 );
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)WeakReference,
      1u);
    v5 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), v11);
  }
  else
  {
    v5 = 2 * v2;
    do
      v6 = *(_DWORD *)(v5 + 12);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 12), v6 + 1, v6) );
  }
  a2->lpVtbl = (struct IUnknownVtbl *)v5;
  return 0LL;
}
