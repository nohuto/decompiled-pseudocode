/*
 * XREFs of ??$?RAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@QEBA?A_PAEBU?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@@Z @ 0x18054BE10
 * Callers:
 *     ??$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?A_PAEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@Z @ 0x18054C020 (--$call@AEAV_lambda_8e1259a6fed20bb5259b923f46cb90bd_@@@-$factory_cache_entry@UGraphicsCaptureIt.c)
 *     _anonymous_namespace_::CreateGraphicsCaptureItem @ 0x18054C190 (_anonymous_namespace_--CreateGraphicsCaptureItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall _lambda_8e1259a6fed20bb5259b923f46cb90bd_::operator()<winrt::com_ptr<IGraphicsCaptureItemInterop> const &>(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>;
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop> )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>
                                    + 8LL))(winrt::impl::factory_cache_entry_v<winrt::Windows::Graphics::Capture::GraphicsCaptureItem,IGraphicsCaptureItemInterop>);
  return a2;
}
