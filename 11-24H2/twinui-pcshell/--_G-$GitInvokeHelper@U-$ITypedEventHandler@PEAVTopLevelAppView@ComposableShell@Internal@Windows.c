/*
 * XREFs of ??_G?$GitInvokeHelper@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVTopLevelAppView@ComposableShell@Internal@Windows@@PEAVTopLevelViewCollectionChangedEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x1801AB2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@ComposableShell@Internal@Windows@@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAA@XZ @ 0x1801AB2DC (--1-$GitInvokeHelper@U-$ITypedEventHandler@PEAUIInspectable@@PEAUITopLevelViewEventArgs@Composab.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::TopLevelAppView *,Windows::Internal::ComposableShell::TopLevelViewCollectionChangedEventArgs *>>,2>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>>,2>::~GitInvokeHelper<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::Internal::ComposableShell::ITopLevelViewEventArgs *>>,2>();
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
