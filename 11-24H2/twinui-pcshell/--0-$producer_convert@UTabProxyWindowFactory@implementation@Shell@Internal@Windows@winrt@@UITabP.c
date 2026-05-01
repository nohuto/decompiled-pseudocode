/*
 * XREFs of ??0?$producer_convert@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UITabProxyWindowFactoryInternal@345@X@impl@winrt@@QEAA@XZ @ 0x180293834
 * Callers:
 *     ??0?$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInputSwitchExperienceManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x180293810 (--0-$producers_base@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@V-$tuple.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@UIAsyncOperationLocal@Internal@6@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803FC058 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$IAsyncOperation@PEAVGetCurre.c)
 *     ??0AppRequestOperation@@QEAA@XZ @ 0x18043CEBC (--0AppRequestOperation@@QEAA@XZ.c)
 * Callees:
 *     ??0?$IAsyncOperation_impl@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@QEAA@XZ @ 0x18008FE04 (--0-$IAsyncOperation_impl@PEAU-$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activi.c)
 */

_QWORD *__fastcall winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal,void>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Windows::Foundation::IAsyncOperation_impl<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>::IAsyncOperation_impl<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>(a1);
  result = v1;
  *v1 = &Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>::`vftable';
  return result;
}
