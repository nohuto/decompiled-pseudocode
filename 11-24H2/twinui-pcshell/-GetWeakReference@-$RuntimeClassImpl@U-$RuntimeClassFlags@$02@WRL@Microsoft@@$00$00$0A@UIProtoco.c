/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@UIProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData@567@U?$CloakedIid@UIServiceProvider@@@23@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@VCWRLObjectWithGITSite@@VCActivatedEventArgsWithViewIdBase@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180330C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18016DE68 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180200E50 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs,Windows::ApplicationModel::Activation::IProtocolActivatedEventArgsWithCallerPackageFamilyNameAndData,Microsoft::WRL::CloakedIid<IServiceProvider>,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>,CWRLObjectWithGITSite,CActivatedEventArgsWithViewIdBase>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 WeakReference; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v6; // r8
  unsigned __int64 v8; // rdx
  bool i; // zf
  signed __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)a2 = 0LL;
  if ( v2 < 0 )
  {
LABEL_10:
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v2 + 12), a2);
  }
  else
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference(
                               (struct IUnknown *)(a1 - 8),
                               (struct IUnknown *)a2);
    v6 = (Microsoft::WRL::Details::WeakReferenceImpl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v8 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v8, v2);
    for ( i = v2 == v10; ; i = v10 == v2 )
    {
      v2 = v10;
      if ( i )
        break;
      if ( v10 < 0 )
      {
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v6, 1);
        goto LABEL_10;
      }
      *((_DWORD *)v6 + 4) = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v8, v10);
    }
  }
  *(_QWORD *)a2 = v6;
  return 0LL;
}
