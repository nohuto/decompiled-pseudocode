/*
 * XREFs of ??R_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@QEBA@AEBUIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@Z @ 0x1805E4488
 * Callers:
 *     ??$call@AEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@?$factory_cache_entry@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@UIRandomAccessStreamReferenceStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@Z @ 0x1805E1C34 (--$call@AEAV_lambda_ed0b7a32649d79a086cc6cb7ea869b18_@@@-$factory_cache_entry@URandomAccessStrea.c)
 *     ?CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAccessStream@2345@@Z @ 0x1805E5350 (-CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAcces.c)
 * Callees:
 *     ?CreateFromStream@?$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandomAccessStreamReferenceStatics@Streams@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIRandomAccessStream@Streams@Storage@Windows@3@@Z @ 0x1805E52CC (-CreateFromStream@-$consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics@UIRandom.c)
 */

__int64 __fastcall _lambda_ed0b7a32649d79a086cc6cb7ea869b18_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Storage_Streams_IRandomAccessStreamReferenceStatics<winrt::Windows::Storage::Streams::IRandomAccessStreamReferenceStatics>::CreateFromStream(
    a3,
    a2,
    *a1);
  return a2;
}
